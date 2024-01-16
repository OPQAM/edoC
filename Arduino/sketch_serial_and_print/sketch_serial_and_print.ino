// put your variables here
int j=1;
int slowT=750;
String myString="j = ";
int x=3;
int y=7;
int z;
String additionS=" + ";
int r=1;
float area;
float pi=3.14;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //z=x+y;
  //Serial.print(x);
  //Serial.print(additionS);
  //Serial.print(y);
  //Serial.print(" = ");
  //Serial.println(z);
  
  //Serial.print(myString); // We'll keep the text on the same line as the next (number)
  //Serial.println(j);
  //j++;
  area=pi*r*r;
  Serial.print("A cicle with radius ");
  Serial.print(r);
  Serial.print(" has an area of ");
  Serial.println(area);
  r++;
  delay(slowT);
}
