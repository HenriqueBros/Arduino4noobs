int ldr = A0;
int valorldr = 0;

void setup() {
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}
void loop() {
   valorldr=analogRead(ldr);
   Serial.print("Valor LDR = "); 
   Serial.println(valorldr);
}
