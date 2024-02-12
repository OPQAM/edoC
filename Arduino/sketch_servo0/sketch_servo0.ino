#include <Servo.h>   // we need to add the Servo library


int servoPin=9;
int servoPos=0; // degrees
// we need to create a virtual object to interact with the servo
Servo myServo;
int dt=50;

void setup() {
Serial.begin(9600);
myServo.attach(servoPin);  
}
// Input from user
void loop() {
  Serial.println("What angle for the servo? (0 to 170)");
  while (Serial.available()==0) {

  }
  servoPos=Serial.parseInt();
  myServo.write(servoPos);
  
  

}
