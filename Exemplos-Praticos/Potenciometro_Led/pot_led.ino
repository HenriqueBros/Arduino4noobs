int PIN_LED = 12;
int potenciometro = A0;

int potenciometroValor;

void setup() {
pinMode(PIN_LED,OUTPUT);
}

void loop() {
  potenciometroValor = analogRead(potenciometro);
  potenciometroValor = map(potenciometroValor,0,1023,0,255);
  analogWrite(PIN_LED,potenciometroValor);
}
