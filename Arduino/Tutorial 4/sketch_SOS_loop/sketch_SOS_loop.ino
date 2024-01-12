void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(8,HIGH);
    delay(200);
    digitalWrite(8,LOW);
    delay(200);
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(200);
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(8,HIGH);
    delay(200);
    digitalWrite(8,LOW);
    delay(200);
  }

}
