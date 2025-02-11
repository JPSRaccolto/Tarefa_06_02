#include "pico/stdlib.h"
#include "pico/time.h"
#include "hardware/irq.h"
#include "hardware/pwm.h"
#include <stdio.h>

#define SERVO_PIN 22
#define PWM_WRAP 24999  // 20ms (50Hz) para servos
#define PWM_CLK_DIV 100  // Divisor de clock para obter o período correto

// Função para converter microssegundos em nível PWM
uint32_t us_to_level(uint32_t us) {
    return (uint32_t)(us * 1.25f); // 1µs ≈ 1.25 unidades
}

// Função para inicializar o PWM
void inicia() {
    gpio_set_function(SERVO_PIN, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(SERVO_PIN);
    pwm_config config = pwm_get_default_config();
    pwm_config_set_clkdiv(&config, PWM_CLK_DIV); // Divisor de clock
    pwm_config_set_wrap(&config, PWM_WRAP);      // Wrap
    pwm_init(slice_num, &config, true);
}

int main() {
  stdio_init_all(); // Inicializa a comunicação serial para debug
  uint slice_num = pwm_gpio_to_slice_num(SERVO_PIN);

  // Inicializa o PWM
  inicia();

  // Move o servo para 2400µs (2.4ms) - 180 graus
  pwm_set_gpio_level(SERVO_PIN, us_to_level(2400));
  sleep_ms(5000);

  // Move o servo para 1470µs (1.47ms) - 90 graus
  pwm_set_gpio_level(SERVO_PIN, us_to_level(1470));
  sleep_ms(5000);

  // Move o servo para 500µs (0.5ms) - 0 graus
  pwm_set_gpio_level(SERVO_PIN, us_to_level(500));
  sleep_ms(5000);
  
  int i = 0;
  while (1) {
    // Movimento suave do ângulo 0° (500us) até 180° (2400us)
    for (i = us_to_level(500); i <= us_to_level(2400); i += 5) {
        pwm_set_gpio_level(SERVO_PIN, i);
        sleep_ms(5); 
    }

    sleep_ms(100); 

    // Movimento suave de volta de 180° para 0°
    for (i = us_to_level(2400); i >= us_to_level(500); i -= 5) { 
        pwm_set_gpio_level(SERVO_PIN, i);
        sleep_ms(5);
    }

    sleep_ms(100); 
}

}