#include "MegaServo.h"

MegaServo megaServo1;
MegaServo megaServo2;

void setup()
{
  Serial.begin(115200);

  megaServo1.attach(7, 8, 5, A4);
  megaServo2.attach(4, 9, 6, A0);
  megaServo1.write(90);
  megaServo2.write(90);
  Serial.println("TEST");
}

void loop()
{
  char user_input;

  while (Serial.available())
  {

    user_input = Serial.read();

    if (user_input == 'w')
    {
      acc_pressed();
      Serial.println("forward");

    }
    else if (user_input == 'x')
    {
      br();
      Serial.println("brake");
    }
    else if (user_input == 's')
    {
      stat();
      Serial.println("stable");
    }

    else if (user_input == 't')
    {
      test();
      Serial.println("TEST RUN");
    }

    else if (user_input == 'a')
    {
      lt();
      Serial.println("left turn");
    }
    else if (user_input == 'd')
    {
      rt();
      Serial.println("right turn");
    }
  }
}


void acc_pressed() {

 
  megaServo1.write(130);
  megaServo2.write(130);
 

}

void br() {


  megaServo1.write(0);
  megaServo2.write(0);

}

void stat() {
  megaServo1.write(90);
  megaServo2.write(90);
}

void lt() {

  megaServo1.write(110);
  megaServo2.write(130);

}

void rt() {

  megaServo1.write(130);
  megaServo2.write(110);

}









void test()
{
  acc_pressed();
  delay(1000);
  br();
  delay(1000);
  rt();
  delay(1000);
  stat();
  delay(1000);
  lt();
  Serial.println("TEST DONE");



}

