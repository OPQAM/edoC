String msg1="You can choose which light to turn on/off (red, green, blue). Just write them: ";
String msgError="That is an invalid choice. Please choose 'red', 'green' or 'blue'.";
String userChoice;
int t=1000;

int ledRed=11;
int ledGreen=10;
int ledBlue=9;

//interruptor switch with a boolean
bool isRedOn = false;
bool isGreenOn = false;
bool isBlueOn = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  Serial.println(msg1);
  
  while (Serial.available()==0) {
  }
  userChoice=Serial.readStringUntil('\n'); // removing newline characters!

  if (userChoice=="red") {
    isRedOn = !isRedOn;  // switch the state of the switch button
    if (isRedOn){
      digitalWrite(ledRed,HIGH);
    } else {
      digitalWrite(ledRed,LOW);
    }
  } else if (userChoice=="green") {
    isGreenOn = !isGreenOn;
    if (isGreenOn){
      digitalWrite(ledGreen,HIGH);
    } else {
      digitalWrite(ledGreen,LOW);
    }
  } else if (userChoice=="blue") {
    isBlueOn = !isBlueOn;
    if (isBlueOn){
      digitalWrite(ledBlue,HIGH);
    } else {
      digitalWrite(ledBlue,LOW);
    }
  } else {
    Serial.println(msgError);
    delay(t);
  }

}
