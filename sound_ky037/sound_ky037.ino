#define SENSOR_DIGITAL_OUTPUT_PIN 12
#define SENSOR_ANALOG_OUTPUT A3
#define LED_INPUT_PIN 4

bool lastState;

void setup() {
  Serial.begin(9600);
  pinMode(LED_INPUT_PIN, OUTPUT);
  pinMode(SENSOR_DIGITAL_OUTPUT_PIN, INPUT);
  lastState = false;
  digitalWrite(LED_INPUT_PIN, lastState);
}

void loop() {
  bool isDigitalSignal = digitalRead(SENSOR_DIGITAL_OUTPUT_PIN) == 1;
  int analogSignal = analogRead(SENSOR_ANALOG_OUTPUT);
  

  Serial.print("Digital signal: ");
  Serial.print(isDigitalSignal ? "HIGH" : "LOW");
  Serial.print(" (");
  Serial.print(isDigitalSignal);
  Serial.print(")");
  
  Serial.print(" | Analog signal: ");
  Serial.println(analogSignal);
  

  if (isDigitalSignal == true) {
    lastState = !lastState;
    digitalWrite(LED_INPUT_PIN, lastState);
  
    Serial.print("LED switched to: ");
    Serial.println(lastState ? "ON" : "OFF");
    
    Serial.println("------------------------");
    
    delay(1000);
  }
  
  delay(50); 
}
