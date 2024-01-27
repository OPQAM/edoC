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
  if (potVal>1000) {
    digitalWrite(buzzPin,HIGH);
    delay(tSmall);
    digitalWrite(buzzPin,LOW);
    delay(tSmall);
  } else {
    digitalWrite(buzzPin,LOW);
  }

}
