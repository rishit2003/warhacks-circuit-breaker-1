// # include "/Users/rishitmittal/Downloads/Concordia University/Warhacks/warhacks-circuit-breaker/src/base/base.h"
# include "/Users/notAdmin/Dev/hackathons/warhacks 2023/warhacks-circuit-breaker/src/base/base.h"


void setup() {
  Serial.begin(9600);
  
}

void loop() {
  bool leftWhite = digital_check_left();
  bool rightWhite = digital_check_right();

  Serial.print("hello");

  go_straight();

  // Serial.println("leftWhite " << leftWhite << ", rightWhite " << rightWhite);

  // if(leftWhite && rightWhite) {
  //   go_straight();
  // }
  // else if(leftWhite == false && rightWhite == true) {
    
  // }

}