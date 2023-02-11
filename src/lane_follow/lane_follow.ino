# include "/Users/notAdmin/Dev/hackathons/warhacks 2023/warhacks-circuit-breaker/src/base/base.h"


void setup() {
  Serial.begin(9600);
  Serial.println('hello');
}

void loop() {
  int leftSensorValue = analogRead(leftSensorPin);
  int rightSensorValue = analogRead(rightSensorPin);

  if (leftSensorValue > rightSensorValue) {
    // The vehicle is too far to the right, steer left
    turn_left();
  } else if (rightSensorValue > leftSensorValue) {
    // The vehicle is too far to the left, steer right
    turn_right();
  } else {
    // The vehicle is centered, move forward
    go_straight();
  }
}