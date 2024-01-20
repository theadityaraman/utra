// Motor control pins
int motor1Pin1 = 2;  // Motor 1 control pin 1
int motor1Pin2 = 3;  // Motor 1 control pin 2
int motor2Pin1 = 4;  // Motor 2 control pin 1
int motor2Pin2 = 5;  // Motor 2 control pin 2

void setup() {
  // Set the motor control pins as OUTPUT
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void loop() {
  // Move forward
  moveForward();
  delay(2000);

  // Stop
  stopMotors();
  delay(1000);

  // Move backward
  moveBackward();
  delay(2000);

  // Stop
  stopMotors();
  delay(1000);

  // Turn left
  turnLeft();
  delay(1000);

  // Stop
  stopMotors();
  delay(1000);

  // Turn right
  turnRight();
  delay(1000);

  // Stop
  stopMotors();
  delay(1000);
}

void moveForward() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void moveBackward() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

void turnLeft() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void turnRight() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

void stopMotors() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}
