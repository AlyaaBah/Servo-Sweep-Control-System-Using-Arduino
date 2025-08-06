#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

unsigned long startTime;
bool finishedSweep = false;

void setup() {
  servo1.attach(3);  // 
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  
  startTime = millis(); // 
}

void loop() {
  unsigned long currentTime = millis();

  
  if (!finishedSweep && currentTime - startTime < 2000) {
    for (int pos = 0; pos <= 180; pos += 5) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }
    for (int pos = 180; pos >= 0; pos -= 5) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }
  } 
 
  else if (!finishedSweep) {
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    finishedSweep = true; 
  }
}
