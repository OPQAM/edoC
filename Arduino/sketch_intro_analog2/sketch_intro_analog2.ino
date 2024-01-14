// fade in & blink

int redPin=9;
int bright=0;
int deelay=100;
int deeelay=1000;
void setup() {
  pinMode(redPin,OUTPUT);
}

void loop() {

  for (bright=0; bright<=200;bright++) {
    analogWrite(redPin,bright);
    delay(20);
    if (bright==200){
      for (int i = 0; i<10;i++) {
        analogWrite(redPin,0);
        delay(deelay);
        analogWrite(redPin,20);
        delay(deelay);
        analogWrite(redPin,0);
      }
      delay(100);
      analogWrite(redPin,200);
      delay(deeelay);
      analogWrite(redPin, 0);
      delay(deeelay);
    }
  }

}
