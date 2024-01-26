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
  analogWrite(redPin, LOW);
  analogWrite(greenPin, LOW);
  analogWrite(bluePin, LOW);
}

void loop() {
  Serial.println(msg);
  delay(10);
  while (Serial.available()==0) {
    }
  //myColor=Serial.readString();
  myColor = Serial.readStringUntil('\n');   // (!)

  if (myColor=="yellow")
  {
    analogWrite(redPin,100);
    analogWrite(greenPin,60);
    analogWrite(bluePin,0);
  }
  if (myColor=="green") 
  {
    analogWrite(greenPin,50);
    analogWrite(redPin,0);
    analogWrite(bluePin,0);
  }
  if (myColor=="cyan")
  {
    analogWrite(bluePin,0);
    analogWrite(redPin,70);
    analogWrite(greenPin,70);
  }
  if (myColor=="off")
  {
    analogWrite(bluePin,0);
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
  } 
  //mixing colors... analogwrite
  if (myColor=="aqua") 
  {
    analogWrite(bluePin,50);
    analogWrite(redPin,0);
    analogWrite(greenPin,50);
  }
  if (myColor=="fuchsia")
  {
    analogWrite(bluePin,50);
    analogWrite(redPin,50);
    analogWrite(greenPin,0);
  }
}

// NOTES:
//
// (!) This had to be added, otherwise the program wasn't running
//     since it was reading the newline character and not the
//     rest of the string.