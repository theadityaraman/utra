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
