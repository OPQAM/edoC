// This beep-beeps the buzzer for potentiometer
// values above 1000

int myNum;
int potPin=A1;
int buzzPin=7;
int potVal;
String msg="Please input your number.";
int tSmall=100;

void setup() {
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(tSmall);

  while (potVal>1000) {
    digitalWrite(buzzPin,HIGH);
    potVal=analogRead(potPin);
    Serial.println(potVal); // so that the counting doesn't freeze
  }
  digitalWrite(buzzPin,LOW);

}

// Note that at a limit (around 1001) it clicks, turning on 
// and off again, in quick succession.
