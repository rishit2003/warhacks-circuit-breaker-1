# include "/Users/rishitmittal/Downloads/Concordia University/Warhacks/warhacks-circuit-breaker/src/base/base.h"


void setup() {
  Serial.begin(9600);
  
}

Serial.println("leftWhite " << leftWhite << ", rightWhite " << rightWhite);

void loop() {
  // bool leftWhite = digital_check_left();
  // bool rightWhite = digital_check_right();

  // if(leftWhite && rightWhite) {
  //   go_straight();
  // }
  // else if(leftWhite == false && rightWhite == true) {
  //   turn_right();
  // }

  go_forward();

}