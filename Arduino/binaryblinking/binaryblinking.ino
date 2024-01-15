const int ledPin = 13;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
    binaryCounter(500);
}

void binaryCounter(int delayTime) {
  for (int i = 0; i < 16; i++) {
    displayBinary(i);
    delay(delayTime);
  }
}
  
void displayBinary(int value) {
  for (int bit = 3; bit >= 0; bit--) {
    digitalWrite(ledPin, (value & (1 << bit)) ? HIGH : LOW);
    delay(100);
    digitalWrite(ledPin,LOW);
  }
}