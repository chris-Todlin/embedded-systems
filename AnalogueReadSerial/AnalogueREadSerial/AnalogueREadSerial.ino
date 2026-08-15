/* 
  This is an analogue read fucntionality code, where it reads an analogue signal and converts it to a digital signal
 */
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // initialize the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  //read the A0 value of the sensor
  int sensorValue = analogRead(A0);

  Serial.println("Sensor Value: ");
  Serial.println(sensorValue);

  // Getting the value of the voltage getting in the arduino Board
  // since 5 - 1023
  //t then ..
  int voltageValue = (sensorValue * 5) / 1023;

  Serial.println("Voltage Value: ");
  Serial.println(voltageValue); // print it on the screen
  delay(100);
}
