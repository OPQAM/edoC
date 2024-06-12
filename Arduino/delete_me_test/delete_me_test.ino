int redPin=13;
int bluePin=12;
int t1=500;
int t2=5000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(0));
}

void randomBlink();

void loop() {
  for (int i = 0; i < 2; i++){
    
  
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,HIGH);
    delay(t2);
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(t2);
  }
    for (int j = 0; j < 3; j++){
      digitalWrite(redPin,HIGH);
      digitalWrite(bluePin,LOW);
      delay(t1);
      digitalWrite(bluePin,HIGH);
      digitalWrite(redPin,LOW);
      delay(t1);
  }
  
    randomBlink();
    
}
void randomBlink() {
  while (true){
  int timeDelay = random(50, 1000);
  digitalWrite(redPin,HIGH);
  delay(timeDelay);
  timeDelay = random(50, 1000);
  digitalWrite(bluePin,HIGH);
  delay(timeDelay);
  timeDelay = random(50, 1000);
  digitalWrite(bluePin,LOW);
  delay(timeDelay);
  timeDelay = random(50, 1000);
  digitalWrite(redPin,LOW);
  delay(timeDelay);
  }
}
  
