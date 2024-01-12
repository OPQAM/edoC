// Setting the variables here - there's basically two types of variables for Arduino, basically: ints and floats (there's also strings, ofc)
int ledPin=8;
float pi=3.14;
int ping=100;
int pong=250;
int longW=1000;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(13,OUTPUT); // just to shut it up
}

void loop() {
  delay(longW); //just to make it readable
  // short
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin,HIGH);
    delay(ping);
    digitalWrite(ledPin,LOW);
    delay(ping);
  }

  // long
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin,HIGH);
    delay(pong);
    digitalWrite(ledPin,LOW);
    delay(pong);
  }

  // short
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin,HIGH);
    delay(ping);
    digitalWrite(ledPin,LOW);
    delay(ping);
  }

}
