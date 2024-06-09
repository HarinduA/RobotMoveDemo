// Define motor driver pins
#define ENA 9  // Enable/speed control for Motor A
#define IN1 7  // Motor A direction pin 1
#define IN2 6  // Motor A direction pin 2
#define ENB 10 // Enable/speed control for Motor B
#define IN3 5  // Motor B direction pin 1
#define IN4 4  // Motor B direction pin 2

void setup() {
  // Set all the motor control pins to outputs
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // Initially, stop the motors
  stopMotors();
}

void loop() {
  moveForward();  // Move forward
  delay(2000);    // Delay for 2 seconds
  moveBackward(); // Move backward
  delay(2000);    // Delay for 2 seconds
  turnLeft();     // Turn left
  delay(1000);    // Delay for 1 second
  turnRight();    // Turn right
  delay(1000);    // Delay for 1 second
  stopMotors();   // Stop
  delay(2000);    // Delay for 2 seconds
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 255); // Set speed to maximum for Motor A
  analogWrite(ENB, 255); // Set speed to maximum for Motor B
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 255); // Set speed to maximum for Motor A
  analogWrite(ENB, 255); // Set speed to maximum for Motor B
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 255); // Set speed to maximum for Motor A
  analogWrite(ENB, 255); // Set speed to maximum for Motor B
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 255); // Set speed to maximum for Motor A
  analogWrite(ENB, 255); // Set speed to maximum for Motor B
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0); // Stop Motor A
  analogWrite(ENB, 0); // Stop Motor B
}
