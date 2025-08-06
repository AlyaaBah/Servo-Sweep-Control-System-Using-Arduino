# Servo Sweep Control System Using Arduino

This project demonstrates a basic servo motor control system using an Arduino-compatible board. The system controls four servo motors connected to digital pins and performs a synchronized sweep motion during the initial two seconds of operation. After the sweep, all servos are set to a neutral position (90°). This project highlights principles of embedded control, timing logic, and actuator synchronization.

---

## Overview

The system is designed to control four servo motors using the `Servo.h` library. Upon startup, the servos perform a sweep from 0° to 180° and back to 0°, simulating a calibration or initialization movement. After two seconds, the servos are locked at 90°, representing a neutral or resting position.

---

## Features

- Control of four servo motors via PWM pins  
- Sweep motion executed during the first two seconds  
- Automatic transition to fixed position after sweep  
- Time-based logic using `millis()` for non-blocking control  
- Modular and readable code structure  

---

## Technologies Used

- Arduino-compatible microcontroller (e.g., UNO, Nano, ESP32)  
- `Servo.h` library for motor control  
- Arduino IDE for development and debugging  
- Serial Monitor (optional for status feedback)  

---

## Workflow Summary

1. Attach four servo motors to digital pins (e.g., 3, 5, 6, 9)  
2. Record the start time using `millis()`  
3. During the first 2 seconds:
   - Sweep all servos from 0° to 180° in steps of 5°
   - Then sweep back from 180° to 0°  
4. After 2 seconds:
   - Set all servos to 90°  
   - Prevent further sweeping using a flag (`finishedSweep`)  

---

## Challenges Faced

### Timing Without Delay
**Solution:** Used `millis()` instead of `delay()` for time tracking to avoid blocking the loop.

### Synchronizing Multiple Servos
**Solution:** Applied identical angle values to all servos within the sweep loop for consistent motion.

### Preventing Repeated Execution
**Solution:** Introduced a boolean flag to ensure the sweep runs only once.

---

## Future Enhancements

- Add Serial Monitor output for debugging and status updates  
- Integrate button input to trigger sweep manually  
- Add potentiometer to control servo angles dynamically  
- Expand to control more servos or actuators  
- Integrate with sensors for reactive motion control  

---

⭐ **Created by Alyaa**
