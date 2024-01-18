int potPin=A1;
int gPin=11;
int potVal;
float LEDVal;
int t=100;
void setup() {
  pinMode(potPin,INPUT);
  pinMode(gPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potVal=analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(gPin,LEDVal);
  Serial.println(LEDVal);
  delay(t);
}
