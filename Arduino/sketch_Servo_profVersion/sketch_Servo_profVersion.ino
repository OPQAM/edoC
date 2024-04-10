// Using the servo and a photo detector - video version (mine done elsewhere)
#include<Servo.h>


int lightVal; // reading the light value
int lightPin=A4; // the pin doing the reading
int dt=250;
int angle;
int servoPin=9;

Servo myServo;

// Since I'm reading values around 500 for the max, and 50 min, I now have to do some math
// two points (analog value, angle) - (angle goes up to 160).
// So pairs: (500, 0) and (100, 160)
// It's a line, ofc
// Angle = -16/55(LightVal) + 174

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin, INPUT);
myServo.attach(servoPin);
pinMode(servoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
angle = (-16./55.) * lightVal + 174.;
myServo.write(angle);
}
