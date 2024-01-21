#include <Servo.h>

// Define the servo object
Servo servoMotor;

void setup() {
  // Attach the servo to pin 3
  servoMotor.attach(3);
}

void loop() {
  // Move the servo to the 0-degree position
  servoMotor.write(0);
  delay(1000); // Wait for 1 second

  // // Move the servo to the 90-degree position
  // servoMotor.write(90);
  // delay(1000); // Wait for 1 second

  // // Move the servo to the 180-degree position
  // servoMotor.write(180);
  // delay(1000); // Wait for 1 second
}