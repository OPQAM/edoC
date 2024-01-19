int i;
int t=200;

void setup() {
Serial.begin(9600);
}
// print out even numbers from 0 to 10
void loop() {
  for (i=0; i<=10; i=i+2) { 
    Serial.println(i);
    delay(t);
  }
  Serial.println();

// Backwards from 10 to 0
  for (i=10; i>=0; i--) { 
    Serial.println(i);
    delay(t);
  }
  Serial.println();
}


/*My alternative 1-10, even numbers, with an if and modulus:

void loop() {
  for (i=0; i<=10; i++) {
    if (i % 2 == 0) {
    Serial.println(i);
    delay(t);
    }
  }
  Serial.println();
}*/