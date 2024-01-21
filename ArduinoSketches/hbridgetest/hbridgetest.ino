//Motor Pins
int EN_A = 9; //Enable pin for first motor
int IN1 = 5; //control pin for first motor
int IN2 = 6; //control pin for first motor
int IN3 = 7; //control pin for second motor
int IN4 = 8; //control pin for second motor
int EN_B = 10; //Enable pin for second motor
//Initializing variables to store data
int motor_speed = 255;
int motor_speed1 = 255;

void setup ( ) {
  Serial.begin (9600); //Starting the serial communication at 9600 baud rate
  //Initializing the motor pins as output
  pinMode(EN_A, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(EN_B, OUTPUT);
  
}
  
void loop () {  
  //Rotating the left motor in clockwise direction
  /*digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(EN_A, motor_speed);
  delay(2000);
  
  //Motors will not move when the joystick will be at center
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(2000);
  
  //Rotating the left motor in anticlockwise direction
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(EN_A, motor_speed);
  delay(2000);
  
  //Rotating the right motor in clockwise direction
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_B, motor_speed1);
  delay(2000);
  
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(2000);
  
  //Rotating the right motor in anticlockwise direction
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN_B, motor_speed1);

  delay(2000);*/
}
