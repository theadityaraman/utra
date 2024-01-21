#include <Servo.h>

Servo base;
Servo motorA;
Servo motorB;
Servo motorC;
Servo gripper;

const int _BASE = 1;
const int _MOTORA = 2;
const int _MOTORB = 3;
const int _MOTORC = 4;
const int _GRIPPER = 5;

const float MOTOR_DISTANCE = 1.0f;
const float BASE_HEIGHT = 0;

const float side1_length = 10;
const float side2_length = 10;
const float side3_length = 10;

float atan2_2(float y, float x, float default = 90) {
  if (x == 0) {
    return default;
  }
  return atan2(y, x);
}

float acos_2(float x) {
  return acos(x);
}

float asin_2(float x) {
  return asin(x);
}

int round(float x) {
  if ((x * 10) % 10 > 5) {
    x += 1;
  }
  return (int) x;
}

void setup() {
  // put your setup code here, to run once:
  // Tuned for MG996R Servos
  base.attach(_BASE, 650, 2000);
  motorA.attach(_MOTORA, 650, 2000);
  motorB.attach(_MOTORB, 650, 2000);

  // Tuned for MG90S
  motorC.attach(_MOTORC, 505, 2480);
  gripper.attach(_GRIPPER, 505, 2480);
}

// Returns an array
int* getAngles(int end_angle, float x, float y, float z) {
  float plate_joint = atan2_2(z, x);

  float dist = sqrt(x*x + z*z) - MOTOR_DISTANCE;
  y -= 0;

  if (plate_joint < 0) {
    plate_joint += PI;
    dist *= -1.0f;
  }

  float temp_x = dist - (cos(end_angle) * end_length);
  float temp_y = y + (sin_degrees(end_angle) * end_length);

  float AC = sqrt(temp_x*temp_x + temp_y*temp_y);
  float AD = sqrt(dist*dist + y*y);

  float c1 = acos_2(((side2_length*side2_length) + (AC*AC) - (side1_length*side1_length)) / (2*AC*side2_length));
  float c2 = acos_2(((end_length*end_length) + (AC*AC) - (AD*AD)) / (2*AC*end_length));

  float C = c1 + c2;

  float BD = sqrt(side2_length*side2_length + end_length*end_length - 2*side2_length*end_length*cos_degrees(C));

  float a1 = asin_2(sin_degrees(c1)*side2_length / side1_length);
  float a2 = asin_2(sin_degrees(c2)*end_length / AD);

  float A = a1 + a2;

  float B = 180 - a1 - c1;

  float joint1_angle = 180 - A - atan2_degrees(y, dist);
  float joint2_angle = 270 - B;
  float joint3_angle = C - 90;

  int angles[4] = {round(plate_joint), round(joint1_angle), round(joint2_angle), round(joint3_angle)};
}


void loop() {
  // put your main code here, to run repeatedly:
  
  
}
