 // RGB LED lesson

// 4 legs -> B,G,GND (longer leg),R (this order)

int redPin=9;
int greenPin=10;
int bluePin=11;
String myColor;
String msg="What color do you want?\n";

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

  // Set default state
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void loop() {
  Serial.println(msg);
  delay(10);
  while (Serial.available()==0) {
    }
  //myColor=Serial.readString();
  myColor = Serial.readStringUntil('\n');   // (!)

  if (myColor=="red")
  {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }
  if (myColor=="green") 
  {
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
  }
  if (myColor=="blue")
  {
    digitalWrite(bluePin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
  }
  if (myColor=="off")
  {
    digitalWrite(bluePin,LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
  } 
  //mixing colors... analogwrite
  if (myColor=="aqua") 
  {
    analogWrite(bluePin,155);
    digitalWrite(redPin,LOW);
    analogWrite(greenPin,80);
  }
  //if (myColor=="")
}

// NOTES:
//
// (!) This had to be added, otherwise the program wasn't running
//     since it was reading the newline character and not the
//     rest of the string.