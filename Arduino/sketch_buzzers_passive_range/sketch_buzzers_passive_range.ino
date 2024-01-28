int buzzPin=8;
int buzzTime=1;
int buzzTime2=200;
// by changing the delay time we can change the tone

void setup() {
  pinMode(buzzPin,OUTPUT);

}

void loop() {
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(buzzTime2); // notice that we're using microseconds here
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(buzzTime2);

}
