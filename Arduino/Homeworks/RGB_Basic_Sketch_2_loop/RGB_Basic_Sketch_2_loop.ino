// this is my adapted version, to make the RGB_Basic_Sketch simpler

void setup() {
pinMode(2,OUTPUT); //Blue
pinMode(6,OUTPUT); //Green
pinMode(12,OUTPUT); //Red
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(6,HIGH);
    delay(100);
    digitalWrite(6,LOW);
    delay(100);
  }
  for (int i = 0; i < 15; i++) {
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
}
// much better. From 130 lines to less than 30.
