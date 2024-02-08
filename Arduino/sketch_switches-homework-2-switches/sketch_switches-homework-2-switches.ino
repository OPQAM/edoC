// Homework exercise from Arguino Tutorial 27: Understanding Pushbuttons and Pull Up and Pull Down Resistors
// 08-02-2024

int pinC1=10;
int pinC2=11;
int buttonRead1;
int buttonRead2;
int dt=200;
int lightMaker=0;
int redLed=3;


void setup() {
  Serial.begin(9600);
  pinMode(pinC1,INPUT);
  pinMode(pinC2,INPUT);
  pinMode(lightMaker,OUTPUT);
  pinMode(redLed,OUTPUT);
}

void loop() {
  buttonRead1=digitalRead(pinC1);
  buttonRead2=digitalRead(pinC2);
  Serial.println(buttonRead1);
  Serial.println(buttonRead2);
  delay(dt);

  if (buttonRead1==0)
  {
    lightMaker++;
    if (lightMaker>=250){
      lightMaker = 250;
    }
  } else if (buttonRead2==0)
  {
    lightMaker--;
    if (lightMaker<=0){
      lightMaker = 0;
    }
  }
  // The serial prints are just here as a control
  Serial.print("LIGHTMAKER:");
  Serial.println(lightMaker);
  analogWrite(redLed,lightMaker);
  delay(dt);
}
