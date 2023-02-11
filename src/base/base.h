#ifdef ARDUINO
  #include <Arduino.h>
#endif


  #ifdef ARDUINO


  const int analogLeftSensorPin = A0;
  const int analogRightSensorPin = A1;
  const int digitalLeftSensorPin = 12;
  const int digitalRightSensorPin = 13;

  const int motorLeftPinA = 2;
  const int motorLeftPinB = 4;
  const int motorRightPinA = 7;
  const int motorRightPinB = 8;

  // white surfaces will reflect IR 
  // so if the IR sensor detects some IR 
  // above the treshold, the surface is white
  const int sensorThreshold = 500;


    void turn_left(){
  #ifdef ARDUINO

        // turn left
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
      #endif
}

    void turn_right(){
  #ifdef ARDUINO

        // turn right
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, LOW);
      #endif
}

    void go_straight(){
  #ifdef ARDUINO

        // go straight
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, HIGH);
      #endif
}

    void stop(){
  #ifdef ARDUINO

            // stop
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, LOW);
      #endif
}

    // returns true if left sensor detects something above value
    bool digital_check_left(){
  #ifdef ARDUINO

      int x = digitalRead(digitalLeftSensorPin);
      return x == HIGH;
      #endif
}

        // returns true if left sensor detects something above value
    bool digital_check_right(){
  #ifdef ARDUINO

      int x = digitalRead(digitalRightSensorPin);
      return x == HIGH;
      #endif
}

  #endif


