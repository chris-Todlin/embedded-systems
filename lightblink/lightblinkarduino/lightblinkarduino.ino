// This program is going to blink the light after some delay using the pin 13
// or the buitin led of the arduino uno

// The pin to be used
const int ledPins[] = {13, 12, 11};

// the setup function
void setup() {
  //pinMode(ledPin, OUTPUT); //Initialize the pin of the led to be used

  for(int i = 0; i < 3; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

// the function to repeat itself
void loop() {

  for(int i = 0; i < 3; i++){
      // set the led to High 
    digitalWrite(ledPins[i], HIGH);
    delay(1000); // for 10 seconds

    // set the led to low
    digitalWrite(ledPins[i], LOW);
    delay(1000); // for 10 seconds
  }
}