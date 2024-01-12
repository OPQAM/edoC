/*                           Homework - tutorial 4
 Have 3 LEDs: 
 - Red plays 5 times fast;
 - Green plays 10 times slow;
 - Blue plays 15 times really slow. 
 */

// Variables
int redLED=13;
int greenLED=11;
int blueLED=9;
int little=200;
int medium=400;
int big=600;

void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}
// red light
void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED,HIGH);
    delay(little);
    digitalWrite(redLED,LOW);
    delay(little);
  }
// green light
  for (int i = 0; i < 10; i++) {
    digitalWrite(greenLED,HIGH);
    delay(medium);
    digitalWrite(greenLED,LOW);
    delay(little);
  }
// blue light
  for (int i = 0; i < 15; i++) {
    digitalWrite(blueLED,HIGH);
    delay(big);
    digitalWrite(blueLED,LOW);
    delay(little);
  }

}
