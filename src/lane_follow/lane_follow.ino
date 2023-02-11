# include "/Users/notAdmin/Dev/hackathons/warhacks 2023/warhacks-circuit-breaker/src/base/base.h"


void setup() {
  Serial.begin(9600);
  Serial.println('hello');
}

void loop() {
  int leftSensorValue = digitalRead(leftSensorPin);
  int rightSensorValue = digitalRead(rightSensorPin);

  
}