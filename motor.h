#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor{
private:
  int EN;
  int IN1;
  int IN2;
  int rate; // from 0 to 255
public:
  Motor(int,int,int);
  void initialize();
  void setForward();
  void setReverse();
  void setSpeed(int);
};


#endif
