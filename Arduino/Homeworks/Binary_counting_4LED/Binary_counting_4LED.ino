// Making a binary counter from 0 to 16. 4 LEDs
// Using patterns to shorten and simplify code.

int led1=9;
int led2=10;
int led3=11;
int led4=12;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(500);

  for (int i = 0; i <16; i++) {
    if (i % 2 == 0) {
      digitalWrite(led1,LOW);
      delay(200);
    } else {
      digitalWrite(led1,HIGH);
      delay(200);
    }
    if ((i / 2) % 2 == 0) {
      digitalWrite(led2,LOW);
      delay(200);
    } else {
      digitalWrite(led2,HIGH);
      delay(200);
    }
    if ((i / 4) % 2 == 0) {
      digitalWrite(led3,LOW);
      delay(200);
    } else {
      digitalWrite(led3,HIGH);
      delay(200);
    }
    if ((i / 8) % 2 == 0) {
      digitalWrite(led4,LOW);
      delay(200);
    } else {
      digitalWrite(led4,HIGH);
      delay(200);
    }
  }
}
