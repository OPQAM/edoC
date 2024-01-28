//TPC - tone full left = 10000 microsecond
//           full right = 60 microsecond

int potVal;
int buzzPin=8;
int buzzTime;
int potPin=A1;
int t=100;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  potVal=analogRead(potPin);
  //Serial.println(potVal*9.717+60);
  buzzTime=9.717*potVal + 60; // (0)
  Serial.println(buzzTime);
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(buzzTime);
}

// NOTE:
//
// (0) basically y = mx+b, with y as the tone and the x as the potVal, ofc

// Tone  ^      /
//10.000(y)    /
//       |    /   <-- y=mx+b
//       |   /
//       |  /
//       | /
//     60|/
//       |-----(x)-------->
//           1023         potVal
//
//   ^ ^  
//  =◕.◕=  OPQAM
//   U U 