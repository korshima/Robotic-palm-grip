#include <Servo.h>
//A program to demostrate neck rotation and eye blinking with respect to sound in a humanoid
//By Korshima
/////////////////////////////////////
int servoPin1 = 4;                   //assign servos to pin
int servoPin2 = 5;
int servoPin3 =6;         
int servoPin4= 7;
int servoPin5= 8;
////////////////////////////////////
int servoPos1 = 10;                // assign servo positions
int servoPos2 = 10;
int servoPos3 = 10; 
int servoPos4 = 10;
int servoPos5 = 10;
////////////////////////////////////
Servo myservo1;                    // declare servos         
Servo myservo2;           
Servo myservo3;
Servo myservo4;
Servo myservo5;
////////////////////////////////////
void setup() {
 Serial.begin(9600);
 myservo1.attach(servoPin1);
 myservo2.attach(servoPin2);
 myservo3.attach(servoPin3);
 myservo4.attach(servoPin4);
 myservo5.attach(servoPin5);
 /////////////////////////////////////
}
 void loop() {
  Serial.begin(9600);
  myservo1.write(servoPos1);
  delay (2000); 
   myservo2.write(servoPos2);
  delay (2000);
   myservo3.write(servoPos3);
  delay (2000);
   myservo4.write(servoPos4);
   delay (2000); 
   myservo5.write(servoPos5);
   delay (2000);
 
}
