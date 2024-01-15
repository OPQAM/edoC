void setup() {
  pinMode(2,OUTPUT); //Blue
  pinMode(6,OUTPUT); //Green
  pinMode(12,OUTPUT); //Red
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(12,LOW);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);

}
