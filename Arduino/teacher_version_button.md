// This is for the Arduino - NOT MINE! -

// This the teacher's version. I have my own - check if I've uploaded to git
// if not, do so. This is just a doc, to compare my solution to this and move on


// I, instead, used booleans
int LEDState=0;
int LEDPin=8;
int buttonPin=12;
int buttonNew;
int buttonOld=1;
int dt = 100;

void setup() {
	Serial.begin(9600);
	pinMode(LEDPin, OUTPUT);
	pinMode(buttonPin, INPUT);

}

void loop() {
	buttonNew = digitalRead(buttonPin);
	if (buttonOld == 0 && buttonNew == 1) {
		if (LEDState == 0) {
			digitalWrite(LEDPin, HIGH);
			LEDState = 1;
		}
		else 
		{
			digitalWrite(LEDPin, LOW);
			LEDState = 0;
		}
	}
	buttonOld = buttonNew;
}

