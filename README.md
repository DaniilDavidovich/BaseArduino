# My Arduino Sensor Sketches / Мои скетчи для датчиков Arduino

**EN** | [RU](#ru)

---

### **EN: Repository Purpose**
This is my personal code library for basic Arduino sensors and modules. It's a quick reference for wiring and core functions — a cheat sheet so I don't have to search for code each time I use an HC-SR04 or an RGB LED.

**In short:** Folder → Sketch → Wiring in comments → It works.

### **📁 Contents**
*   **`/led_basic`** — Basic LED control (blink, PWM for brightness).
*   **`/lcd_16x2_i2c`** — Displaying text and data on a 16x2 LCD via I2C. Uses the `LiquidCrystal_I2C` library.
*   **`/hc-sr04`** — Distance measurement with the HC-SR04 ultrasonic sensor.
*   **`/ldr_gl5528`** — Reading analog values from a GL5528 photoresistor (light level).
*   **`/sound_ky037`** — Working with the KY-037 sound sensor (digital and analog output).
*   **`/rgb_ky016`** — Controlling an RGB LED (KY-016), changing colors.

### **🛠 How to Use**
1.  Find the folder for your sensor.
2.  Open the `.ino` file in the Arduino IDE.
3.  Connect the components as described in the comments at the top of the sketch.
4.  Upload the sketch to your board.
5.  Open the Serial Monitor if needed to see data.

### **🔮 Plans**
*   Add more basic modules (buttons, potentiometers, servos, DHT11).
*   Possibly add short `notes.md` files with key specs and links for each component.

---

## **RU**

### **Назначение репозитория**
Это моя личная библиотека кода для базовых датчиков и модулей Arduino. Быстрая шпаргалка по подключению и основным функциям — чтобы не искать код заново каждый раз, когда нужен HC-SR04 или RGB-светодиод.

**Коротко:** Папка → Скетч → Схема в комментариях → Работает.

### **📁 Что внутри**
*   **`/led_basic`** — Базовое управление светодиодом (мигание, ШИМ для яркости).
*   **`/lcd_16x2_i2c`** — Вывод текста и данных на дисплей 16x2 по I2C. Используется библиотека `LiquidCrystal_I2C`.
*   **`/hc-sr04`** — Измерение расстояния ультразвуковым датчиком HC-SR04.
*   **`/ldr_gl5528`** — Считывание аналоговых значений с фоторезистора GL5528 (уровень освещённости).
*   **`/sound_ky037`** — Работа со звуковым датчиком KY-037 (цифровой и аналоговый выход).
*   **`/rgb_ky016`** — Управление RGB-светодиодом (KY-016), смена цветов.

### **🛠 Как пользоваться**
1.  Найдите папку с нужным датчиком.
2.  Откройте файл `.ino` в Arduino IDE.
3.  Соберите схему, как описано в комментариях в начале скетча.
4.  Загрузите скетч на плату.
5.  При необходимости откройте **Монитор порта (Serial Monitor)** для просмотра данных.

### **🔮 В планах**
*   Добавить больше базовых модулей (кнопки, потенциометры, сервоприводы, датчик DHT11).
*   Возможно, добавить для каждого компонента короткий файл `notes.md` с основными характеристиками и ссылками.