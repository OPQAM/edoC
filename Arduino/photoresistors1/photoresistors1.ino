int lightPin=A0;
int lightVal;
int ledGreen=3;
int ledRed=2;
int ledYellow=5;
int t=250;
int lightHIGH=600;
int lightLOW=300;


void setup() {
  pinMode(lightPin,INPUT);
  pinMode(ledGreen,OUTPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  delay(t);

  if (lightVal > lightHIGH) 
  {
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledRed,LOW);
    analogWrite(ledYellow,20);
  }
  else if (lightVal < lightLOW)
  {
    digitalWrite(ledGreen,LOW);
    digitalWrite(ledRed,HIGH);
    analogWrite(ledYellow,10);
  }
  else
  {
    digitalWrite(ledGreen,LOW);
    digitalWrite(ledRed,LOW);
    analogWrite(ledYellow,100);
  }
}

// The current goes down as the resistance goes up.
// So, as light goes up, resistance goes down and the numbers (current) go up.