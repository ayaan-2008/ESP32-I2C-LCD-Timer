# ESP32 I2C LCD Timer

## Overview

This project implements a digital timer on the ESP32 using a 16x2 I2C LCD display.

The timer tracks elapsed minutes and seconds while demonstrating non-blocking timing using the millis() function.

Unlike delay-based timers, this implementation allows the microcontroller to remain responsive while keeping accurate time.

---

## Features

- Real-Time Timer Display
- 16x2 LCD Interface
- I2C Communication
- Non-Blocking Timing
- Minute and Second Tracking
- Efficient Resource Utilization

---

## Hardware

- ESP32
- 16x2 LCD Display
- I2C Interface Module

---

## Communication Protocol

### I2C Communication

The LCD communicates with the ESP32 using the I2C protocol.

Connections:

SDA → GPIO21

SCL → GPIO22

This allows data transfer using only two communication wires.

---

## Timer Logic

The timer uses the millis() function to track elapsed time.

Every 1000 milliseconds:

1. Seconds increment
2. LCD updates
3. Minute rollover is handled automatically

---

## Technologies

- ESP32
- Arduino Framework
- I2C Communication
- LCD Interface
- millis() Timing
