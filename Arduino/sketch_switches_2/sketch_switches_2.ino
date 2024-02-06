// Switches

int redLed=8;
int readPin=12;
int buttonRead;
int dt=500;
bool button=true;

void setup() {
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(readPin,INPUT);
}

void loop() {
  buttonRead=digitalRead(readPin);
  Serial.println(buttonRead);
  delay(dt);
  if (buttonRead == 0)
  {
    button = !(button);
  }

  // It's on or off depending on a click.
  // The timing (and something else) might not be ideal
  if (button == true)
  {
    digitalWrite(redLed,HIGH);
  }
  else
  {
    digitalWrite(redLed,LOW);
  }
}
