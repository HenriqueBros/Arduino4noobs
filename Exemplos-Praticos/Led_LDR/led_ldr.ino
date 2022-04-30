int ldr = A0;
int valorldr = 0;
int PIN_LED = 13;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  valorldr = analogRead(ldr);
  if(valorldr < 200) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }
  delay(10);
}