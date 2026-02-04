
#define PIN_LED 10
#define PIN_PHOTO_SENSOR A0

/// Расчет 

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int value = analogRead(PIN_PHOTO_SENSOR); // Чтение напряжения (0-1023)
  Serial.println(value);

  // Если напряжение большое (нету света) подать цифровой сигнал на пин 10
  if (value > 900) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }
  delay(300);
}
