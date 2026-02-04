const int led_red = 9;
const int led_green = 3;
const int led_yellow = 4;

void setup() {
  Serial.begin(9600); 
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}


void loop() {
  onOfAllLeds();
  delay(2000);
  steppedOnAndOfRedLed();
  delay(2000); 
}

void onOfAllLeds() {
  digitalWrite(led_red, HIGH);  
  delay(500);                     
  digitalWrite(led_green, HIGH);   
  delay(500);   
  digitalWrite(led_yellow, HIGH); 
  delay(2000);
  digitalWrite(led_red, LOW);  
  delay(500);                     
  digitalWrite(led_green, LOW);   
  delay(500);   
  digitalWrite(led_yellow, LOW); 
}

void steppedOnAndOfRedLed() {
 for (int i = 0; i <= 255; i++) {
    analogWrite(led_red, i);

    if (i % 20 == 0) {
    Serial.println(i);
    }
   
    delay(15);
  }

  Serial.println("Sensor Value is Max");
  delay(500);

   for (int i = 255; i >= 0; i--) {
    analogWrite(led_red, i);

    if (i % 20 == 0) {
    Serial.println(i);
    }

    delay(15); 
  }

   Serial.println("Sensor Value is Min");
}





