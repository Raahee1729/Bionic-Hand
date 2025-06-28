#include <Servo.h>

Servo s1, s2;

void setup() {
  s1.attach(3);
  s2.attach(5);
}

void loop() {
  // Reverse Forward movement: s1 goes 180→110, s2 goes 0→70
  for (int i = 0; i <= 90; i++) {
    s1.write(180 - i);   // s1: 180 → 110
    s2.write(i);         // s2: 0 → 70
    delay(100);
  }

  // Reverse Backward movement: s1 goes 110→180, s2 goes 70→0
  for (int i = 90; i >= 0; i--) {
    s1.write(180 - i);   // s1: 110 → 180
    s2.write(i);         // s2: 70 → 0
    delay(20);
  }
}
