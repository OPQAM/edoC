int redPin=9;
int bright=0; // this value goes from 0 to 255, or 0v to 5v
void setup() {
  pinMode(redPin,OUTPUT);
}

void loop() {

  for (bright=0; bright<256;bright++) {
    analogWrite(redPin,bright);
    delay(50);
  }

}
