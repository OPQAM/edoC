// this version will keep on or off

int redLed=8;
int readPin=12;
int buttonRead;
int dt=100;
bool button=true;
bool restarter=true;


void setup() {
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(readPin,INPUT);
}

void loop() {
  buttonRead=digitalRead(readPin);
  Serial.println(buttonRead);
  delay(dt);

  if (restarter == true)
  {
    if (buttonRead == 0)
    {
      button = !button;
      if (button == true)
      {
        digitalWrite(redLed,HIGH);
      }
      else if (button == false)
      {
        digitalWrite(redLed,LOW);
      }
      restarter = false;
    }
    
  }

  if (buttonRead == 1)
  {
    restarter = true;
  }


}
