#ifndef ROBOT_BOARD_LIBRARY
#define ROBOT_BOARD_LIBRARY

//Include header files
#include <LiquidCrystal.h>

//LCD pin declaration
LiquidCrystal lcd(0,1,2, 4, 5, 6, 7);

//Pin Definations

#define SENSOR0 16
#define SENSOR1 17
#define SENSOR2 18
#define SENSOR3 19
#define SENSOR4 20
#define SENSOR5 21
#define SENSOR6 22
#define SENSOR7 23

#define Left_Motor_Bit_1  10
#define Left_Motor_Bit_2  11
#define Right_Motor_Bit_1 14
#define Right_Motor_Bit_2 15

#define Left_Motor_Speed  12
#define Right_Motor_Speed 13

#define Push_Button 3

#define LED_Bit_0 30
#define LED_Bit_1 31



//Function Prototypes
void left();
void right();
void forward();
void back();
void left_speed(unsigned char Speed);
void right_speed(unsigned char Speed);
void init_Board();

//pin initilisation


#endif
