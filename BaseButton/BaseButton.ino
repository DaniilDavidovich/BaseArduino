
int button = 2;
int led = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}


void loop() {
  
  if (digitalRead(button) == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("ON");
  } else {
    digitalWrite(led, LOW);  
  }
}




