// Switches

int redLed=8;
int readPin=12;
int buttonRead;
int dt=250;

void setup() {
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(readPin,INPUT);
}

void loop() {
  buttonRead=digitalRead(readPin);
  Serial.println(buttonRead);
  delay(dt);
  if(buttonRead==1)
  {
    digitalWrite(redLed,LOW);
  }
  else
  {
    digitalWrite(redLed,HIGH);
  }
}
