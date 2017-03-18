#include "motor.h"

//Motor1
Motor rightMotor(8,7,6);

//Motor2
Motor leftMotor(3,5,4);

int i;
void setup()
{
  rightMotor.initialize();
  leftMotor.initialize();
}

void loop()
{
  rightMotor.setForward();
  leftMotor.setForward();
  
  for (i = 100; i <= 255; ++i)
  {
      leftMotor.setSpeed(i);
      rightMotor.setSpeed(i);      
      
      delay(30);
  }
  
  delay(500);

  rightMotor.setReverse();
  leftMotor.setReverse();

  for (i = 100; i <=255; ++i)
  {
      leftMotor.setSpeed(i);
      rightMotor.setSpeed(i);      
      
      delay(30);
  }

   delay(500);
}
