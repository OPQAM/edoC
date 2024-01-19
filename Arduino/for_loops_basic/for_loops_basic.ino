int redPin=9;
int rBlink=5;
int yellowPin=6;
int yBlink = 3;
int t1=250;
int j;

void setup() {
  pinMode(yellowPin,OUTPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {

  for (j = 0; j < yBlink; j++) {
  delay(t1);
  digitalWrite(yellowPin,HIGH);
  delay(t1);
  digitalWrite(yellowPin,LOW);
  }

  for (j = 0; j < rBlink; j++) {
  delay(t1);
  digitalWrite(redPin,HIGH);
  delay(t1);
  digitalWrite(redPin,LOW);
  }
}
