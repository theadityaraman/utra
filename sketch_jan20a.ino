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

void loop() {
  // Move forward
  go_forwards(left_wheel_1, left_wheel_2);
  go_forwards(right_wheel_1, right_wheel_2);

  // Set a constant speed (you can adjust this value)
  analogWrite(left_wheel_power, 150);
  analogWrite(right_wheel_power, 150);
}

void go_forwards(int wheel_input_1, int wheel_input_2) {
  digitalWrite(wheel_input_1, HIGH);
  digitalWrite(wheel_input_2, LOW);
}
