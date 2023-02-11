# include "/Users/rishitmittal/Downloads/Concordia University/Warhacks/warhacks-circuit-breaker/src/base/base.h"

// For IR sensor
int irDigital1 = 12;
int irDigital2 = 13;

int motorleftpinA = 2;
int motorleftpinB = 4;
int motorrightpinA = 7;
int motorrightpinB = 8;


void setup() {
  Serial.begin(9600);
  pinMode(irDigital1, INPUT);    // IR sensor
  pinMode(irDigital2, INPUT);
  pinMode(motorleftpinA, OUTPUT);
  pinMode(motorleftpinB, OUTPUT);
  pinMode(motorrightpinA, OUTPUT);
  pinMode(motorrightpinB, OUTPUT);
}

void loop() {
  Serial.print("Digital1: ");
  findIntensity(irDigital1);
  Serial.print(" Digital2: ");
  findIntensity(irDigital2);
  Serial.print("\n");

  int IR1 = findIntensity(irDigital1);
  int IR2 = findIntensity(irDigital2);

  if(IR1 == 1 && IR2 == 1) {
    forward(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
  }
  else if(IR1 == 0 && IR2 == 1) {
    turn_right(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
  }
  else if(IR1 == 1 && IR2 == 0) {
    turn_left(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
  }
  else stop(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
}

void forward(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  
}

void backward(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  
}

void turn_right(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  
}

void turn_left(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  
}

void stop(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
}

int findIntensity(int IRdigitalPin) {
  int intensity = digitalRead(IRdigitalPin);
  Serial.print(intensity);

  return intensity;
}
