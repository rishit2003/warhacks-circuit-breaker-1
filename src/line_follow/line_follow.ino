# include "base.h"


void setup(){
  Serial.begin(9600);
  Serial.println('hello');
}

void loop() {
  bool leftWhite = digital_check_left();
  bool rightWhite = digital_check_right();

  if (leftWhite && rightWhite) {
    go_straight();
  } else if (leftWhite) {
    turn_left();
  } else if (rightWhite) {
    turn_right();
  } else{
      stop();
    }
}
