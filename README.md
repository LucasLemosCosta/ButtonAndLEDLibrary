# 🔘 ButtonAndLEDLibrary 💡

Uma biblioteca em **C++ para controlar botões e LEDs** em microcontroladores, utilizando ESP32, Arduino e PlatformIO.

🚀 Projeto de estudo sobre programação embarcada e criação de componentes reutilizáveis.

## ✨ Funcionalidades

- 🔴 Controle de LEDs com intervalos de piscagem.
- 🔘 Detecção de pressionamento e soltura de botões.
- ⚡ Atualização sem bloquear o programa com delays.
- 🖥️ Comunicação Serial para exibir eventos.

## 🛠️ Tecnologias

![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=arduino&logoColor=white)
![PlatformIO](https://img.shields.io/badge/PlatformIO-F5822A?style=flat&logo=platformio&logoColor=white)
![ESP32](https://img.shields.io/badge/ESP32-S3-E7352C?style=flat)

## 🔌 Componentes

| Componente | GPIO |
|:--|:--:|
| 🔴 LED vermelho | 4 |
| 🟡 LED amarelo | 6 |
| 🟢 LED verde | 15 |
| 🔘 Botão BOOT | 0 |

*Confira as conexões e os pinos compatíveis com sua placa antes de montar o circuito.*

## 💻 Exemplo de uso

```cpp
Led ledRed(4);
Button buttonBoot(0);

void setup()
{
    Serial.begin(115200);

    buttonBoot.init();

    ledRed.initLed();
    ledRed.turnOnBlink(1000);
}

void loop()
{
    buttonBoot.update();
    ledRed.update();

    if (buttonBoot.pressed())
        Serial.println("Pressionado");

    if (buttonBoot.release())
        Serial.println("Solto");
}
```

💡 O LED pisca em intervalos de 1 segundo, enquanto o botão é monitorado continuamente.

## 🚀 Como executar

1. Clone este repositório.
2. Abra o projeto no VS Code com o PlatformIO.
3. Conecte sua ESP32-S3.
4. Compile e envie o código para a placa.
5. Abra o Monitor Serial em **115200 baud**.

## 📚 Objetivo

Aprender e praticar C++, lógica de programação embarcada e organização de código por meio de classes reutilizáveis.

## 👨‍💻 Autor

**Lucas Lemos Costa**

🔗 [GitHub](https://github.com/LucasLemosCosta)

---
Projeto desenvolvido para estudo e evolução na programação embarcada.
