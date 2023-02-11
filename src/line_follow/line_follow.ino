# include "/Users/notAdmin/Dev/hackathons/warhacks 2023/warhacks-circuit-breaker/src/base/base.h"



void setup(){
  Serial.begin(9600);
  Serial.println('hello');
}

void loop() {
  bool leftWhite = digital_check_left();
  bool rightWhite = digital_check_right();

  Serial.println("leftWhite " << leftWhite << ", rightWhite " << rightWhite); 

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
