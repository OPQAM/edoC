// The light game, for Helena
// change lights or change to analogue - too brigh whites

String introMsg1="Bem Vinda ao jogo das luzes.";
String introMsg2="O objetivo é acender todas as luzes ao mesmo tempo!";
String introMsg3="Pode escolher os números de 1 a 7. Boa sorte!";
String userChoice;
String victoryLap="Parabéns! Venceste o jogo. Número de jogadas: ";

int t=1500; // delay time
int smallT=500;
int counter=0;

int led1=12;
int led2=10;
int led3=8;
int led4=6;
int led5=4;
int led6=2;

int ledWin=13;
bool intro = true;

bool is_1_On = false;
bool is_2_On = false;
bool is_3_On = false;
bool is_4_On = false;
bool is_5_On = false;
bool is_6_On = false;
bool is_Win_On = false;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(ledWin,OUTPUT);
}

void loop() {
  if (intro) { // so it's not always asking for an answer
  Serial.println(introMsg1);
  Serial.println(introMsg2);
  Serial.println(introMsg3);
  intro = false;
  }

  while (Serial.available()==0){ // do nothing until the user inputs a value
  }
  userChoice=Serial.readStringUntil('\n'); // don't absorb the newline character

  if (userChoice=="1") {
    counter++;
    is_1_On = !is_1_On;
    is_4_On = !is_4_On;
    if (is_1_On){
      digitalWrite(led1,HIGH);
    } else {
      digitalWrite(led1,LOW);
    }
    if (is_4_On){
      digitalWrite(led4,HIGH);
    } else {
      digitalWrite(led4,LOW);
    }
  } 
  
  else if (userChoice=="2") {
    counter++;
    is_2_On = !is_2_On;
    is_3_On = !is_3_On;
    is_6_On = !is_6_On;
    if (is_2_On){
      digitalWrite(led2,HIGH);
    } else {
      digitalWrite(led2,LOW);
    }
    if (is_3_On){
      digitalWrite(led3,HIGH);
    } else {
      digitalWrite(led3,LOW);
    }
    if (is_6_On){
      digitalWrite(led6,HIGH);
    } else {
      digitalWrite(led6,LOW);
    } 
  } 
  
  else if (userChoice=="3") {
    counter++;
    is_1_On = !is_1_On;
    is_3_On = !is_3_On;
    is_4_On = !is_4_On;
    is_5_On = !is_5_On;
    if (is_1_On){
      digitalWrite(led1,HIGH);
    } else {
      digitalWrite(led1,LOW);
    }
    if (is_3_On){
      digitalWrite(led3,HIGH);
    } else {
      digitalWrite(led3,LOW);
    }
    if (is_4_On){
      digitalWrite(led4,HIGH);
    } else {
      digitalWrite(led4,LOW);
    }
    if (is_5_On){
      digitalWrite(led5,HIGH);
    } else {
      digitalWrite(led5,LOW);
    }
  } 
  
  else if (userChoice=="4") {
    counter++;
    is_2_On = !is_2_On;
    is_4_On = !is_4_On;
    is_5_On = !is_5_On;
    is_6_On = !is_6_On;
    if (is_2_On){
      digitalWrite(led2,HIGH);
    } else {
      digitalWrite(led2,LOW);
    }
    if (is_4_On){
      digitalWrite(led4,HIGH);
    } else {
      digitalWrite(led4,LOW);
    }
    if (is_5_On){
      digitalWrite(led5,HIGH);
    } else {
      digitalWrite(led5,LOW);
    }
    if (is_6_On){
      digitalWrite(led6,HIGH);
    } else {
      digitalWrite(led6,LOW);
    }
  } 
  
  else if (userChoice=="5") {
    counter++;
    is_2_On = !is_2_On;
    is_3_On = !is_3_On;
    is_4_On = !is_4_On;
    is_5_On = !is_5_On;
    if (is_2_On){
      digitalWrite(led2,HIGH);
    } else {
      digitalWrite(led2,LOW);
    }
    if (is_3_On){
      digitalWrite(led3,HIGH);
    } else {
      digitalWrite(led3,LOW);
    }
    if (is_4_On){
      digitalWrite(led4,HIGH);
    } else {
      digitalWrite(led4,LOW);
    }
    if (is_5_On){
      digitalWrite(led5,HIGH);
    } else {
      digitalWrite(led5,LOW);
    }
  } 
  
  else if (userChoice=="6") {
    counter++;
    is_1_On = !is_1_On;
    is_4_On = !is_4_On;
    is_6_On = !is_6_On;
    if (is_1_On){
      digitalWrite(led1,HIGH);
    } else {
      digitalWrite(led1,LOW);
    }
    if (is_4_On){
      digitalWrite(led4,HIGH);
    } else {
      digitalWrite(led4,LOW);
    }
    if (is_6_On){
      digitalWrite(led6,HIGH);
    } else {
      digitalWrite(led6,LOW);
    }
  }
  delay(smallT);
  // Win condition:
  if (is_1_On == true &&
      is_2_On == true &&
      is_3_On == true &&
      is_4_On == true &&
      is_5_On == true &&
      is_6_On == true) {
        delay(t);
        digitalWrite(ledWin,HIGH);
        Serial.println(victoryLap);
        Serial.println(counter);
        delay(t);
        return;
      }
}
