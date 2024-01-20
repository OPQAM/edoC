int potVal;
int potPin=A1;
int t=100;
int redPin=9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(t);

  while (potVal>1000) {
    digitalWrite(redPin,HIGH);
    potVal=analogRead(potPin);
    Serial.println(potVal);
    delay(t);
  }
  digitalWrite(redPin,LOW);
  
}
