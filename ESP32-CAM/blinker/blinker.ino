int ledPin = 4;

void setup() {
    pinMode(ledPin, OUTPUT);
    for (int i = 0; i< 3; i++){
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);
  }
}

void loop() {
  //Do nothing
}