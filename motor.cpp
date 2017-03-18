#include "motor.h"

Motor::Motor(int en, int in1, int in2){
  EN = en;
  IN1 = in1;
  IN2 = in2;
}

void Motor::initialize(){
  pinMode (EN, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
}

void Motor::setForward(){
  digitalWrite (IN1, LOW); 
  digitalWrite (IN2, HIGH);
}

void Motor::setReverse(){
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW); 
}

void Motor::setSpeed(int spd){
   rate = spd;
   analogWrite(EN,rate);
}

