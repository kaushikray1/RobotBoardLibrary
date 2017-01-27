#include"Board_Library.h"



void setup() {
  Serial.begin(115200);
  init_Board();

}

void loop() {

  while (Serial.available() > 0) {

    unsigned char command = Serial.read();
    switch (command)
    {
      case 1: forward();break;
      case 2: back ();  break;
      case 3: left();   break;
      case 4: right();  break;
      case 5: Stop();   break;
      default: break;
    }
    Serial.flush();
  }
}

