#include <Arduino.h>
#include "Servo.h"
#define SERVO_PIN 22  // ESP32 pin GPIO26 connected to servo motor

Servo servoMotor;
int pos = 0;


void setup() {
  delay(1000);
  Serial.begin(115200);

  Serial.println("Serial inited");
  delay(2000);
  servoMotor.attach(SERVO_PIN);
}


void loop() {
  for (int i = 0; i <= 180; i++) {
    servoMotor.write(i);
    delay(15);
  }
  for (int i = 180; i >= 0; i--) {
    servoMotor.write(i);
    delay(15);
  }
}
