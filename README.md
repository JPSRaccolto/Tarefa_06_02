![image](https://github.com/user-attachments/assets/f2a5c9b8-6208-4723-8f46-1d74be421827)


# 🛠️ Projeto: Interface de Modulação PWM com RP2040

## 📑 Sumário
- [🎯 Objetivos](#-objetivos)
- [📋 Descrição do Projeto](#-descrição-do-projeto)
- [⚙️ Funcionalidades Implementadas](#%EF%B8%8F-funcionalidades-implementadas)
- [🛠️ Requisitos do Projeto](#%EF%B8%8F-requisitos-do-projeto)
- [📂 Estrutura do Repositório](#-estrutura-do-reposit%C3%A1rio)
- [🖥️ Como Compilar](#%EF%B8%8F-como-compilar)
- [🤝 Contribuições](#-contribui%C3%A7%C3%B5es)
- [📽️ Demonstração em Vídeo](#%EF%B8%8F-demonstra%C3%A7%C3%A3o-em-v%C3%ADdeo)
- [📜 Licença](#-licen%C3%A7a)
- [💡 Considerações Finais](#-considera%C3%A7%C3%B5es-finais)

## 🎯 Objetivos
- Compreender o funcionamento e a aplicação de modulação PWM em microcontroladores.
- Aplicar na prática os conceitos de PWM.
- Manipular LEDs comuns e Servomotores..
- Desenvolver um projeto que combina hardware e software.

## 📋 Descrição do Projeto
Este projeto utiliza a placa BitDogLab com os seguintes componentes:
- LED RGB (GPIO 12 )


## ⚙️ Funcionalidades Implementadas

1. **Interação com LED:**
   - **LED AZUL** -Manipular a luz do LED utilizando a modulação PWM.
   - **SERVO** -Manipular o ângulo do SERVO utilizando a modulação PWM. 

## 🛠️ Requisitos do Projeto
- **Controle de LED:** Utilização dos LEDs comunm.
- **Controle de SERVO:** Utilização dos SERVO comunm.
- **Organização do Código:** Código estruturado e comentado.

## 📂 Estrutura do Repositório
```
├── Servo.c             # Código principal do projeto
└── ...                  # Demais arquivos necessários
```

## 🖥️ Como Compilar
1. Clone o repositório:
   ```bash
   https://github.com/JPSRaccolto/Tarefa_06_02.git
   ```
2. Navegue até o diretório do projeto:
   ```bash
   cd Tarefa_06_02
   ```
3. Compile o projeto com seu ambiente de desenvolvimento configurado para o RP2040.
4. Carregue o código na placa BitDogLab.

## 🖥️ Metodo alternativo:
1. Baixe o repositório com arquivo zip.
2. Extraia para uma pasta de fácil acesso
3. Utilize a extensão raspberry pi pico dentro do VS Code para importar o projeto.
4. Aguarde ate criar o arquivo build
5. Utilize o ícone "_compile_" para compilar.
6. Utilize o "_RUN_" com a BitDogLab em modo boot seel para enviar o programa para a sua RP2040.
7. Agora, interaja com os botões e o teclado para mergulhar nas funcionalidades do projeto.

## 🧑‍💻 Autor
**João Pedro Soares Raccolto**

## 📝 Descrição
Tarefa apresentada ao Cepedi como parte dos critérios de avaliação do curso EmbarcaTech em Software e Sistemas Embarcados, com foco na aplicação prática de modulação PWM e integração de hardware com o microcontrolador RP2040.

## 🤝 Contribuições
Este projeto foi desenvolvido por **João Pedro Soares Raccolto**.
Contribuições são bem-vindas! Siga os passos abaixo para contribuir:

1. Fork este repositório.
2. Crie uma nova branch:
   ```bash
   git checkout -b minha-feature
   ```
3. Faça suas modificações e commit:
   ```bash
   git commit -m 'Minha nova feature'
   ```
4. Envie suas alterações:
   ```bash
   git push origin minha-feature
   ```
5. Abra um Pull Request.

## 📽️ Demonstração em Vídeo
- O vídeo de demonstração do projeto pode ser visualizado aqui: [Drive](https://drive.google.com/file/d/1MkjtriohEwbMuRA83LmvYqPfRcj-ZIEh/view?usp=drivesdk)

## 💡 Considerações Finais
Este projeto oferece uma ótima oportunidade para consolidar conhecimentos sobre modulação PWM, manipulação de hardware, e desenvolvimento com microcontroladores. Certifique-se de seguir todos os requisitos e manter um código limpo e bem comentado.
