// Sketch to read the output going through a potentiometer

int voltPin=A2;
int readVal;
float V2;
int t=250;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readVal=analogRead(voltPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(t);
}
