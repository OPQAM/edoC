const int ledPin = 13;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // Dimming the LED from off to full brightness
  // Apparently this is using Pulse Width Modulation will work with
  // an analog pin, not with 13, which is digital
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(100);
  }
}
  