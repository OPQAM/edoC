
int readPin=A3;                // the pin we're reading from
float V2=0;                      // The voltage that we're reading
int delayTime=500;
int readVal;                   // We'll be using this to be able to actually read the result in volts

void setup() {
  // pinMode(writePin, OUTPUT);
  pinMode(readPin,INPUT);      // Now we're worried about input, not output
  Serial.begin(9600);          // Serial monitor to print to it (baud rate)
}

void loop() {
  readVal=analogRead(readPin);
  V2=(5./1023.)*readVal;        // We use points so that the numbers aren't interpreted as integers
  // V2=analogRead(readPin);
  Serial.println(V2);          // print new line
  delay(delayTime);            // we're printing slower so that we can read it
}
