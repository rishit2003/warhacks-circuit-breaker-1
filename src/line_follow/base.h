#ifdef ARDUINO
  #include <Arduino.h>
#endif


  #ifdef ARDUINO


  const int leftSensorPin = A0;
  const int rightSensorPin = A1;
  const int motorPin1 = 2;
  const int motorPin2 = 3;
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

      int x = digitalRead(leftSensorPin);
      return x == HIGH;
      #endif
}

        // returns true if left sensor detects something above value
    bool digital_check_right(){
  #ifdef ARDUINO

      int x = digitalRead(rightSensorPin);
      return x == HIGH;
      #endif
}

  #endif


