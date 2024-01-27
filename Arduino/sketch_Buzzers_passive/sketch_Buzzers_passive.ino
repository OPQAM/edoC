int buzzPin=8;
int t1=1; //time 1 ms
int t2=2; //time 2 ms
int j; // counter

void setup() {
pinMode(buzzPin,OUTPUT);

}

void loop() {
  for (j=1;j<=100;j++) {
    digitalWrite(buzzPin,HIGH);
    delay(t1);
    digitalWrite(buzzPin,LOW);
    delay(t1);
  }

  for (j=1;j<=100;j++) {
    digitalWrite(buzzPin,HIGH);
    delay(t2);
    digitalWrite(buzzPin,LOW);
    delay(t2);
  }

}
