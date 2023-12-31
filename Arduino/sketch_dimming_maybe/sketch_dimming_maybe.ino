const int ledPin = 13;

void setup() {
  pinMode(ledPin,OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
    randomBlink();
}

void randomBlink() {
  int delayTime = random(50, 1000);
  digitalWrite(ledPin,HIGH);
  delay(delayTime);
  digitalWrite(ledPin,LOW);
  delay(delayTime);
}
  