void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  // 3 short ones
  delay(1000);
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  // 3 long ones
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(200);
  // 3 short ones
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
}
  