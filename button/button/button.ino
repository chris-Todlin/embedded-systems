/* 
    This the button functionalit where a push button on pin 4 can light a led on port 3

    I am going to utilize the digitalRead and Digital write extensively.

    The circuit is in the proteus image attached.
 */

 const int led = 3; // output
 const int pushButton = 4; // input

 // the setup part of it
 void setup(){
  // initialization ...
  pinMode(led, OUTPUT);
  pinMode(pushButton, INPUT);
 }

 // the main program 
 void loop(){

  // check the state of teh state of the push button
  int buttonState = digitalRead(pushButton);

  // apply it in the led
  digitalWrite(led, buttonState);
 }