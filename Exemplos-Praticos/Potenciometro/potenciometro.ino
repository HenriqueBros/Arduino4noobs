int potenciometro = A0;

int potenciometroValor;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potenciometroValor = analogRead(potenciometro);
  Serial.print("O valor do potenciometro = ");
  Serial.print(potenciometroValor);
  Serial.print("\n");
  delay(500);
}
