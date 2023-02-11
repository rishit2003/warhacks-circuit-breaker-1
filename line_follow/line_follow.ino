const int leftSensorPin = A0;
const int rightSensorPin = A1;
const int motorPin1 = 2;
const int motorPin2 = 3;
const int sensorThreshold = 500;

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  int leftSensorValue = analogRead(leftSensorPin);
  int rightSensorValue = analogRead(rightSensorPin);

  if (leftSensorValue < sensorThreshold && rightSensorValue > sensorThreshold) {
    // turn left
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  } else if (leftSensorValue > sensorThreshold && rightSensorValue < sensorThreshold) {
    // turn right
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  } else if (leftSensorValue > sensorThreshold && rightSensorValue > sensorThreshold) {
    // go straight
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, HIGH);
  } else {
    // stop
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
  }
}