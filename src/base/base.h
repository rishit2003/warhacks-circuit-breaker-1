#ifdef ARDUINO
  #include <Arduino.h>
#endif


  #ifdef ARDUINO


  const int analogLeftSensorPin = A0;
  const int analogRightSensorPin = A1;
  const int digitalLeftSensorPin = 12;
  const int digitalRightSensorPin = 13;

  // left motor has two pins, same for right
  const int L1 = 2;
  const int L2 = 4;
  const int R1 = 8;
  const int R2 = 7;

  // white surfaces will reflect IR 
  // so if the IR sensor detects some IR 
  // above the treshold, the surface is white
  const int sensorThreshold = 500;


void turn_left(){
  #ifdef ARDUINO
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
      #endif
}

    void turn_right(){
  #ifdef ARDUINO

        // turn right
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
      #endif
}

    void go_straight(){
  #ifdef ARDUINO
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
      #endif
}

    void stop(){
  #ifdef ARDUINO
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
      #endif
}

  void go_back(){
    digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
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


