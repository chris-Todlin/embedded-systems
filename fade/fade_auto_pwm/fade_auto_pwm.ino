/* 
  This is an exampple of the auto-fade with pwm

    - First use a pwm pin of the arduino board with analogWrite
    - Add the self addition of the value(0-255)
    - Incase just wire it to reduce the value and maintain the range
 */

 const int ledPin = 6;
 int brightness = 0;
 int fadeAmount = 5;

 void setup(){
  // introduce the led pin as the output of the program 
  pinMode(ledPin, OUTPUT);

  // set the serial printer for the messageing or anything for the feedback 
  Serial.begin(9600);

  Serial.println("Welocme to the Fade Auto with PWM");
 }

 // the loop 
void loop(){

  // set the amount and increase - point 1
  analogWrite(ledPin, brightness);

  // add the brightness
  brightness += fadeAmount; 

  Serial.println("Fade Applied ");
  Serial.println(brightness);

  // controlling the anount of the fadeness
  if (brightness == 255) {
    brightness -= fadeAmount;
  } else {
    // add the brightness
    brightness += fadeAmount; 
  }

  delay(500);
}