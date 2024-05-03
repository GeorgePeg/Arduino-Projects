/*
  Name: Servo Control With Arduino UNO R3
  Author: GeorgePeg ( https://github.com/GeorgePeg )
  Date: 03/05/24 17:09
  Description: Changing the position of a single servo motor using a potensiometer
*/
#include <Servo.h>
Servo servo; //Object named servo
int potentiometer = 0; //Starting phase of the potentiometer.
int servo_value ; //Each time, this variable will change
void setup(){
  //Here code runs only once
  servo.attach(9); //PWM D9 Port
}
void loop(){
  //Here code runs forever
  /*The wiper terminal of the potentiometer is connected
  to the A0 Analog Input Port of the Arduino UNO R3*/
  servo_value = analogRead(A0); // Reading the potentiometer
  /*Using the map() function to convert the analog values of
  the potentiometer(0-1023) to a desired angle range from 0 
  to 180 degrees.*/
  servo_value = map(servo_value,0,1023,0,180);
  servo.write(servo_value);
  delay(25);
  
}
  
