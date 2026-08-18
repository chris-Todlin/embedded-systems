/* 
  This program is not going to use the delay function of the in-built 
  arduino funtion to set the delay for the blinking of the led

  We are going to try it out of any thing and anyway
 */

 // the pinof the led
 const int ledPin = 3; 

 // the state of the led to change to 
 int ledState = LOW;

 // for the mills to store
 unsigned long previousMills = 0;

 // the interval of the blink
 const long interval = 1000;

 // the setup
 void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Welcome to blink without delay");
 }

 // the loop
 void loop(){
  // the time initiaated
  unsigned long currentMills = millis();
  Serial.println("Current Milliseconds: ");
  Serial.println(currentMills);

  Serial.println("Previous Milliseconds: ");
  Serial.println(previousMills);

  if (currentMills - previousMills >= interval){
    // some activities in there in.

    previousMills = currentMills; // to keep track of the changes of the track of time

    if (ledState == LOW) ledState = HIGH;
    else ledState = LOW;

    // set the led pin to high
    digitalWrite(ledPin, ledState);
  }
 }