/*
  Arduino Seven Segment (Common Anode)

  Components:
  - Arduino Uno
  - 1x 7 Segment (Common Anode)
  - 7x Resistor 220 ohm
  - Jumper wires

  Wiring:
  a -> 2
  b -> 3
  c -> 4
  d -> 5
  e -> 6
  f -> 7
  g -> 8
  COM -> 5V

  NOTE:
  LOW = ON
  HIGH = OFF
*/

// Pin mapping
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;

// Function to display number
void displayNumber(int num) {
  switch (num) {
    case 0:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      break;

    case 1:
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;

    case 2:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      break;

    case 3:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      break;

    case 4:
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;

    case 5:
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;

    case 6:
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;

    case 7:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;

    case 8:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;

    case 9:
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;
  }
}

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    displayNumber(i);
    delay(1000);
  }
}