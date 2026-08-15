/* 
  This program is going to iperate on a dual mode
  When the voltage is high on the A0 - green lights
  When the voltage is 3 volts - yello lights
  then 0 - red voltage

  1023 - 600 -- Green led
  600 - 120 -- yellow led
  120 - 0 -- red led
 */

 const int redLed = 13, yellowLed = 12, greenLed = 11;

 // the pin mode initialization
 void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // begin the serial 
  Serial.begin(9600);
  Serial.println("Program Starting...");
 }

 // the program to run
 void loop() {
  int AVal = analogRead(A0);
  Serial.println(AVal);

  // the logic of the game
  if (AVal > 600) {
    Serial.print("Green Led ON");
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
  }
  else if (AVal > 120) {
    Serial.print("Yellow Led ON");
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(greenLed, LOW);
  }
  else{
    Serial.print("Red Led ON");
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
  }
 }