int EN_A = 2; //Enable pin for first motor
int IN1 = 4; //control pin for first motor
int IN2 = 8; //control pin for first motor
int IN3 = 7; //control pin for second motor
int IN4 = 11; //control pin for second motor
int EN_B = 13; //Enable pin for second motor

// ports 3 5 6 9 10 must be used by arm's servos
// 12 -> ultrasonic sensor

int motor_speed = 255;
int motor_speed1 = 255;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600); //Starting the serial communication at 9600 baud rate
  //Initializing the motor pins as output
  pinMode(EN_A, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(EN_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


// Movements, speed from 0-255
void moveForward(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(EN_A, speed);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_B, speed);
}
void moveBack(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(EN_A, speed);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN_B, speed);
}
void pivotLeft(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(EN_A, speed);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_B, speed);
}
void pivotRight(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(EN_A, speed);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN_B, speed);
}
void stopAll() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
