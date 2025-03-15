const int leftForward = 8;
const int leftBackward = 9;
const int rightForward = 10;
const int rightBackward = 11;

#include <Stepper.h>
const int buttonPin = A0; // Move button to A0 (analog pin)
int stepsPerRevolution = 620;
int rpm = 10;
Stepper stepper (stepsPerRevolution, 13, 7, 6, 12 );
void setup() {
  // put your setup code here, to run once:

stepper.setSpeed(rpm);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
  pinMode(leftForward, OUTPUT);
  pinMode(leftBackward, OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightBackward, OUTPUT);

  // Move forward immediately
  digitalWrite(leftForward, HIGH);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
  



}



void loop(){
   \

  // put your main code here, to run repeatedly:
stepper.step(stepsPerRevolution);
digitalWrite(5, HIGH);  // turn the LED on (HIGH is the voltage level)
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);

  delay(100);                      // wait for a second
  
stepper.step(-stepsPerRevolution);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100); 
  // Clears the trigPin
  

  digitalWrite(leftForward, HIGH);
  digitalWrite(leftBackward, LOW);
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
}


