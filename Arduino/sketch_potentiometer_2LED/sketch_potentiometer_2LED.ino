
int voltPin=A2;
int readVal;
float V2;
int t=500;
int redPin=9;
int bluePin=6;

void setup() {
  Serial.begin(9600);
  pinMode(voltPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  readVal=analogRead(voltPin);
  V2=(5./1023.)*readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.print(V2);
  Serial.println(" volts.");
  if (V2>4.0) {
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,LOW);
    Serial.print("WARNING:");
  } else if (V2<=4.0 && V2>=0.1){
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
  } else {
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,HIGH);
  }
  
  delay(t);
}