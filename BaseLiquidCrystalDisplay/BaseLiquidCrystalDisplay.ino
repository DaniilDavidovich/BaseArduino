

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

/// 0x27 - адрес имени дисплея
/// 16 - colums (16 max)
/// 2 - rows (2 max)
/// пин A4 SDA (I2C данные)
/// пин A5 SCL (I2C такты)
/// если #include <Wire.h> то Wire.begin(); и Arduino переключает A4/A5 из обычных пинов в режим I2C-контроллера
/// millis - возвращает количество миллисекунд, прошедших с момента запуска программы 

LiquidCrystal_I2C lcd(0x27, 16, 2);
int button = 2;
int counter = 0;
unsigned long pressTime = 0;
bool lastState = LOW;
bool isLongPressHandled = false;


void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Counter:");
  lcd.setCursor(0,1);
  lcd.print("0");
}

void loop() {
  bool state = digitalRead(button);
  unsigned long currentTime = millis();
  
  if (state == HIGH && lastState == LOW) {
    pressTime = currentTime; 
    isLongPressHandled = false;
    Serial.println("Button pressed - start timing");
  }
  
  if (state == HIGH) {
    unsigned long duration = currentTime - pressTime;
    
    if (duration >= 1000 && !isLongPressHandled) {
      Serial.println("Long press detected - clearing counter");
      clearCounter();  
      isLongPressHandled = true; 
    }
  }
  
  if (state == LOW && lastState == HIGH) {
    unsigned long duration = currentTime - pressTime;

    if (duration < 1000 && !isLongPressHandled) {
      Serial.println("Short press detected - incrementing counter");
      incrementCounter();
    }
  }
  
  lastState = state;
}

void incrementCounter() {
  counter++;
  lcd.setCursor(0,1);
  lcd.print(counter);
  delay(300);
}

void clearCounter() {
  lcd.setCursor(0,1);
  lcd.print("       ");
  counter = 0;
  lcd.setCursor(0,1);
  lcd.print(counter);
  delay(300);
}





