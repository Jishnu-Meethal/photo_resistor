#include<ESP32Servo.h>
Servo jim;
void setup()
{
  jim.attach(26);
  jim.write(50);
}
void loop()
{
  
}