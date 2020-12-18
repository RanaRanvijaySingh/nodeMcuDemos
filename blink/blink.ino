#define LED D1
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("HIGH");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LOW");
  delay(1000);  
}
