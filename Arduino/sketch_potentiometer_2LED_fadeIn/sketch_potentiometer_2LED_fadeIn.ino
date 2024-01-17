// Adapted homework of lesson 13, to make it more interesting.
// In this one, up to 4 volts, the blue light gets stronger.
// At 4 volts it goes off. The red light comes on, together with a warning.
// Note that a bigger waiting time makes for better serial monitor reading, but
// for a worse light fade in/out.

int voltPin=A2;
float readVal;
float V2;
int t=250;
int redPin=9;
int bluePin=6;
int off=0;

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
    analogWrite(bluePin,off);
    Serial.print("WARNING:");
  } else {
    digitalWrite(redPin,LOW);
    analogWrite(bluePin,readVal/4.01);
  }
  
  delay(t);
}