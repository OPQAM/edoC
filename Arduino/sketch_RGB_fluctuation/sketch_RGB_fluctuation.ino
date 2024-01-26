 // RGB LED lesson

// 4 legs -> B,G,GND (longer leg),R (this order)

int redPin=9;
int greenPin=10;
int bluePin=11;
String msg="Jingle Bells!\n";
int textOn=1;
int t=500;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  randomSeed(analogRead(0));

  // Set default state
  analogWrite(redPin, LOW);
  analogWrite(greenPin, LOW);
  analogWrite(bluePin, LOW);
}

void loop() {
  if (textOn == 1)
  {
    Serial.println(msg);
    textOn=0;
  }

  delay(t);
  analogWrite(redPin,random(0,10));
  analogWrite(bluePin,random(0,10));
  analogWrite(greenPin,random(0,10));
}