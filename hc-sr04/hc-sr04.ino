

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <NewPing.h>

/// 0x27 - адрес имени дисплея
/// 
/// 16 - colums (16 max)
/// 2 - rows (2 max)
/// пин A4 SDA (I2C данные)
/// пин A5 SCL (I2C такты)
/// если #include <Wire.h> то Wire.begin(); и Arduino переключает A4/A5 из обычных пинов в режим I2C-контроллера


#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200 /// Максимальное расстояние в см


LiquidCrystal_I2C lcd(0x27, 16, 2);
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

/// Возвращает **целое число** (сантиметры).
/// При отсутствии эха возвращает **0** или **большое число (например, 2599)**.
/// Выбор пинов 11 и 12 в примере — произвольный. Главное, чтобы Trig был выходом (OUTPUT), а Echo — входом (INPUT).


void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("Distance:");
  lcd.setCursor(0, 1);
  lcd.print("0");
}                                                 

void loop() {
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("       ");
  lcd.setCursor(0,1);
  lcd.print(sonar.ping_cm());
}





