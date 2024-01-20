int right_wheel_1 = 2;
int right_wheel_2 = 3;
int right_wheel_power = 6;

int left_wheel_1 = 4;
int left_wheel_2 = 7;
int left_wheel_power = 5;

void setup() {
  pinMode(right_wheel_1, OUTPUT);
  pinMode(right_wheel_2, OUTPUT);
  pinMode(right_wheel_power, OUTPUT);

  pinMode(left_wheel_1, OUTPUT);
  pinMode(left_wheel_2, OUTPUT);
  pinMode(left_wheel_power, OUTPUT);

  analogWrite(left_wheel_power, 0);
  analogWrite(right_wheel_power, 0);
}

int MIN_SPEED = 0;
int MAX_SPEED = 100;

int MIN_RAW_SPEED = 160;
int MAX_RAW_SPEED = 255;

void loop() {
  // I just set the speeds to 50 to move forward at a constant speed.
  analogWrite(left_wheel_power, get_raw_speed(50));
  analogWrite(right_wheel_power, get_raw_speed(50));

  // set direction
  go_forwards(left_wheel_1, left_wheel_2);
  go_forwards(right_wheel_1, right_wheel_2);
}

int get_raw_speed(int speed) {
    if (speed == 0) return 0;
    return map(abs(speed), MIN_SPEED, MAX_SPEED, MIN_RAW_SPEED, MAX_RAW_SPEED);
}

void go_forwards(int wheel_input_1, int wheel_input_2) {
  digitalWrite(wheel_input_1, HIGH);
  digitalWrite(wheel_input_2, LOW);
}
