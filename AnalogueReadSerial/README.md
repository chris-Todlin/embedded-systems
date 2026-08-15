# Analogue Read Serial Project

This project demonstrates reading analog input values from sensors and outputting the data via serial communication.

## Overview

The Analogue Read Serial module is designed to:
- Read analog input signals from sensors connected to Arduino analog pins
- Convert analog values to digital using the ADC (Analog-to-Digital Converter)
- Transmit sensor readings via UART serial communication
- Display real-time sensor data on a serial monitor

## Files Included

- **AnalogueRead.pdsprj** - Proteus Design Suite circuit simulation project
- **AnalogueREadSerial.ino** - Arduino sketch implementing the analog reading and serial transmission
- **Project Backups/** - Archived versions of the Proteus project files

## Circuit Components

- Arduino Microcontroller
- Analog Sensor (potentiometer, LDR, temperature sensor, etc.)
- Serial Communication interface (USB/UART)
- Optional: Proteus simulation components

## How It Works

1. Arduino reads analog values from a specified pin (A0-A5)
2. ADC converts the analog voltage (0-5V) to digital values (0-1023)
3. Serial transmission sends the data to a connected computer
4. Serial monitor displays the sensor readings in real-time

## Usage

### In Proteus:
1. Open `AnalogueRead.pdsprj` in Proteus Design Suite
2. Run the simulation to observe the circuit behavior
3. Monitor the virtual serial output

### On Arduino Hardware:
1. Upload `AnalogueREadSerial.ino` to your Arduino board
2. Open the Serial Monitor (Tools → Serial Monitor)
3. Set baud rate to 9600
4. Connect an analog sensor to pin A0
5. View real-time sensor readings

## Serial Output Format

```
Sensor Reading: 512
Voltage: 2.50V
```

## Key Concepts

- **ADC Resolution:** 10-bit (0-1023 for 0-5V range)
- **Baud Rate:** 9600 (standard for Arduino)
- **Sampling:** Continuous reading with serial output

## Notes

- Ensure proper sensor calibration before deployment
- ADC readings are affected by power supply voltage stability
- Use filtering techniques for noisy analog signals if needed
- Serial communication speed may affect sampling frequency

## Further Enhancements

- Add multiple analog sensors for simultaneous reading
- Implement data logging to SD card
- Create graphical visualization on PC
- Add averaging or filtering algorithms
