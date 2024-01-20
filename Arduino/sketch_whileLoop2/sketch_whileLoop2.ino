// Challenge: have user decide how many times it wants to blink the LED
int myNumber;
String msg="Por favor, introduz um número:";
String msg2="A luz LED vermelha vai piscar ";
String msg3=". Espreita!";
String errorMsg="Tens que escolher um número maior que zero.";
String msgStop="End of cycle. Let's start again.";
String emptyMsg="";

int redPin=12;
int t=200;
int tLong=1500;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0) { // while we wait for user input, do nothing
  }
  myNumber=Serial.parseInt();
  if (myNumber > 1) {
    Serial.print(msg2);
    Serial.print(myNumber); // read it
    Serial.println(msg3);
    delay(tLong);
  } else {
    delay(tLong);
    Serial.println(errorMsg);
    delay(tLong);
    delay(tLong);
  }
  while (counter != myNumber && myNumber > 0) {
    digitalWrite(redPin,HIGH);
    delay(t);
    digitalWrite(redPin,LOW);
    delay(t);
    counter++;
  }
  counter = 0;
  Serial.println(msgStop);
  delay(t);
  Serial.println(emptyMsg); // Mostly clearing the screen
  Serial.println(emptyMsg);
  Serial.println(emptyMsg);
  Serial.println(emptyMsg);
  Serial.println(emptyMsg);
  Serial.println(emptyMsg);
  Serial.println(emptyMsg);
}
