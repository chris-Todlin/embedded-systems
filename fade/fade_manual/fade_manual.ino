/* 
  This is the manual part of the fade where a variable resistor is used to control the fading of the 
  LED of the arduino, but the program is the one to analog read of the variable 
 */

 void setup(){
  // the serial of the one to start
  Serial.begin(9600);
 }

 // the loop 
 void loop(){
  // read the pins of the Ao
  int Aovalue = analogRead(A0);
  int A3value = analogRead(A3);

  Serial.println("For the A0 value is: "); // print it
  Serial.println(Aovalue); // print it
  Serial.println("For the A0 value is: "); // print it
  Serial.println(A3value); // print it

  // introduce a new line
  Serial.println("New values ...");

  // the delay factor to prevent faster loading 
  delay(500);
 }