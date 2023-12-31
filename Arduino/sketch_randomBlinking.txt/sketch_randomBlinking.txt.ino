void setup() {
  pinMode(13, OUTPUT); 
  randomSeed(analogRead(0)); 
}

void loop() {
  int onTime = random(100, 1000); 
  int offTime = random(100, 1000); 

  digitalWrite(13, HIGH); 
  delay(onTime); 

  digitalWrite(13, LOW); 
  delay(offTime); 
