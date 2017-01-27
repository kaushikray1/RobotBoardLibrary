#include"Board_Library.h"

//
void init_Board()
{

//-------------------------------------  
  //Initilize LCD
  lcd.begin(16, 2);

//pin initialisation 
//-------------------------------------  
  //Sensor Pins
  pinMode(SENSOR0, INPUT_PULLUP);
  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(SENSOR2, INPUT_PULLUP);
  pinMode(SENSOR3, INPUT_PULLUP);
  pinMode(SENSOR4, INPUT_PULLUP);
  pinMode(SENSOR5, INPUT_PULLUP);
  pinMode(SENSOR6, INPUT_PULLUP);
  pinMode(SENSOR7, INPUT_PULLUP);
//-------------------------------------
  //Motor Pins
  pinMode(Left_Motor_Bit_1 , OUTPUT);
  pinMode(Left_Motor_Bit_2 , OUTPUT);
  pinMode(Right_Motor_Bit_1, OUTPUT);
  pinMode(Right_Motor_Bit_2, OUTPUT);
  digitalWrite(Left_Motor_Bit_1 ,HIGH);
  digitalWrite(Left_Motor_Bit_2 ,HIGH);
  digitalWrite(Right_Motor_Bit_1,HIGH);
  digitalWrite(Right_Motor_Bit_2,HIGH);
//-------------------------------------
  //Switch Pin
  pinMode(Push_Button, INPUT_PULLUP);
//-------------------------------------
  //LED Pins  
  pinMode(LED_Bit_0 , OUTPUT);
  pinMode(LED_Bit_1 , OUTPUT);
  digitalWrite(LED_Bit_0,HIGH);
  digitalWrite(LED_Bit_1,HIGH);
}

//All motor control stuff---------------------------------------------------------------------------
void left()
{
  digitalWrite(Left_Motor_Bit_1 ,HIGH);
  digitalWrite(Left_Motor_Bit_2 ,HIGH);
  digitalWrite(Right_Motor_Bit_1,HIGH);
  digitalWrite(Right_Motor_Bit_2,HIGH);
}
//-------------------------------------
void right()
{
  digitalWrite(Left_Motor_Bit_1 ,HIGH);
  digitalWrite(Left_Motor_Bit_2 ,HIGH);
  digitalWrite(Right_Motor_Bit_1,HIGH);
  digitalWrite(Right_Motor_Bit_2,HIGH);
}
//-------------------------------------
void forward()
{
  digitalWrite(Left_Motor_Bit_1 ,HIGH);
  digitalWrite(Left_Motor_Bit_2 ,HIGH);
  digitalWrite(Right_Motor_Bit_1,HIGH);
  digitalWrite(Right_Motor_Bit_2,HIGH);
}
//-------------------------------------
void back()
{
  digitalWrite(Left_Motor_Bit_1 ,HIGH);
  digitalWrite(Left_Motor_Bit_2 ,HIGH);
  digitalWrite(Right_Motor_Bit_1,HIGH);
  digitalWrite(Right_Motor_Bit_2,HIGH);
}
//-------------------------------------
void left_speed(unsigned char Speed)
{
  analogWrite(Left_Motor_Speed,Speed);
}
//-------------------------------------
void right_speed(unsigned char Speed)
{
  analogWrite(Right_Motor_Speed,Speed);
}


//all LED control Stuff-----------------------------------------------------------------------------
void LED_M(char color)
{
  switch (color)
  {
    case 1:{digitalWrite(LED_Bit_0,HIGH);digitalWrite(LED_Bit_1,HIGH);break;}
    case 2:{digitalWrite(LED_Bit_0,HIGH);digitalWrite(LED_Bit_1, LOW);break;}
    case 3:{digitalWrite(LED_Bit_0, LOW);digitalWrite(LED_Bit_1,HIGH);break;}
    case 4:{digitalWrite(LED_Bit_0, LOW);digitalWrite(LED_Bit_1, LOW);break;}
    default: digitalWrite(LED_Bit_0,HIGH);digitalWrite(LED_Bit_1,HIGH);
  }
}

