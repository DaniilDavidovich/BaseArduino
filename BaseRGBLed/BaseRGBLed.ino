
#define RED_PIN 2
#define GREEN_PIN 3
#define BLUE_PIN 4
#define DELAY_VALUE 100

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  setColor(255, 0, 0); /// red 
  delay(DELAY_VALUE);
  setColor(0, 255, 0); /// green
  delay(DELAY_VALUE);
  setColor(0, 0, 255); /// blue 
  delay(DELAY_VALUE);
  setColor(255, 255, 0); /// yellow 
  delay(DELAY_VALUE);
  setColor(255, 0, 255); /// purple 
  delay(DELAY_VALUE);
  setColor(0, 255, 255); /// blue
  delay(DELAY_VALUE);
  setColor(255, 255, 255); /// white
  delay(DELAY_VALUE);
  setColor(0, 0, 0); /// disable
  delay(DELAY_VALUE);
}

void setColor(int r, int g, int b) {
  analogWrite(RED_PIN, r);
  analogWrite(GREEN_PIN, g);
  analogWrite(BLUE_PIN, b);
}
