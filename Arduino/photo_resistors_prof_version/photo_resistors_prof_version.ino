//Sound depending on light received
// Note, sound reversed if 5V - resistor - photoreceiver OR 5v - photo receiver - resistor


int buzzPin=5;
int conversor;
int readLight=A1;
int lightValue;
int delayT;

void setup() {
  Serial.begin(9600);
  pinMode(readLight,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  lightValue=analogRead(readLight);
  delayT=(9./550.)*lightValue-(9.*200./550.)+1.;
  Serial.println(delayT);
  digitalWrite(buzzPin,HIGH);
  delay(delayT);
  digitalWrite(buzzPin,LOW);
  delay(delayT);
}
