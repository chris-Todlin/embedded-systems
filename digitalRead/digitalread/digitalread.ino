/* 
  This program is going to read the digital signal (HIGH OR LOW) of the arduino board

  We are going to use the push button for the functionality to test it
 */

 const int psButton = 6;

 // the setupt
 void setup(){

  // begin the serial.begin
  Serial.begin(9600);

  // initialize the push button 
  pinMode(psButton, OUTPUT);
 }

 // the loop funcitonality 
 void loop() {
  // get the digital read of the state and deal with it 
  int psButtonState = digitalRead(psButton);
  Serial.println(psButtonState); 

  // the delay peroid of 10 
  delay(1);
 }