# My Arduino Sensor Sketches / Мои скетчи для датчиков Arduino

**EN** | [RU](#ru)

---

### **EN: Repository Purpose**
This is my personal code library for basic Arduino sensors and modules. It's a quick reference for wiring and core functions.

**In short:** Folder → Sketch → It works.

### **📁 Contents**
*   **`/led_basic`** — Basic LED control (blink, PWM for brightness).
*   **`/lcd_16x2_i2c`** — Displaying text and data on a 16x2 LCD via I2C. Uses the `LiquidCrystal_I2C` library.
*   **`/hc-sr04`** — Distance measurement with the HC-SR04 ultrasonic sensor.
*   **`/ldr_gl5528`** — Reading analog values from a GL5528 photoresistor (light level).
*   **`/sound_ky037`** — Working with the KY-037 sound sensor (digital and analog output).
*   **`/rgb_ky016`** — Controlling an RGB LED (KY-016), changing colors.
*   **`/tactile_push_button`** — Working with a push button: reading its press state (digital input).

### **🛠 How to Use**
1.  Find the folder for your sensor.
2.  Open the `.ino` file in the Arduino IDE.
4.  Upload the sketch to your board.
5.  Open the Serial Monitor if needed to see data.

### **🔮 Plans**
*   Add more basic modules.
*   Possibly add short `notes.md` files with key specs and links for each component.

---

## **RU**

### **Назначение репозитория**
Это моя личная библиотека кода для базовых датчиков и модулей Arduino. Быстрая шпаргалка по подключению и основным функциям.

**Коротко:** Папка → Скетч → Работает.

### **📁 Что внутри**
*   **`/led_basic`** — Базовое управление светодиодом (мигание, ШИМ для яркости).
*   **`/lcd_16x2_i2c`** — Вывод текста и данных на дисплей 16x2 по I2C. Используется библиотека `LiquidCrystal_I2C`.
*   **`/hc-sr04`** — Измерение расстояния ультразвуковым датчиком HC-SR04.
*   **`/ldr_gl5528`** — Считывание аналоговых значений с фоторезистора GL5528 (уровень освещённости).
*   **`/sound_ky037`** — Работа со звуковым датчиком KY-037 (цифровой и аналоговый выход).
*   **`/rgb_ky016`** — Управление RGB-светодиодом (KY-016), смена цветов.
*   **`/tactile_push_button`** — Работа с кнопкой: считывание состояния нажатия (цифровой вход).

### **🛠 Как пользоваться**
1.  Найдите папку с нужным датчиком.
2.  Откройте файл `.ino` в Arduino IDE.
4.  Загрузите скетч на плату.
5.  При необходимости откройте **Монитор порта (Serial Monitor)** для просмотра данных.

### **🔮 В планах**
*   Добавить больше базовых модулей.
*   Возможно, добавить для каждого компонента короткий файл `notes.md` с основными характеристиками и ссылками.