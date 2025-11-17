# Raspberry Pi Facial Recognition Lock — Circuit Schematic

- Course: Create a Facial Recognition Door Lock With Raspberry Pi
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/raspberry-pi-facial-recognition-door-lock-raspberry-pi/?couponCode=JULYMAXDICOUNT

## Connections

- Camera: Raspberry Pi Camera Module to CSI connector.
- Lock actuator: GPIO18 → transistor driver → solenoid/relay; diode across coil; separate supply.

## Diagram (ASCII)

```
 GPIO18 ---[R]---|> NPN ----+----- Solenoid/Relay (+)
                   |        |
                  GND      [Diode] (across coil)
                           |
                          GND
 CSI Port -> Raspberry Pi Camera Module
```

## Purchase With Discount

Get a discounted price and build a secure, camera-based door lock — enroll via the link above.

