# Arduino Proteus Projects

Learning and experimenting with Arduino basics through Proteus simulation. This repository contains various Arduino projects demonstrating fundamental concepts in microcontroller programming and circuit design.

## Projects Overview

### 1. **AnalogueReadSerial**
- Reading analog input values from sensors
- Serial communication for data output
- Proteus simulation project files
- Demonstrates ADC (Analog-to-Digital Converter) functionality

### 2. **digitalRead**
- Digital input reading from sensors and switches
- Binary state detection (HIGH/LOW)
- Basic digital I/O operations
- Proteus simulation implementation

### 3. **button**
- Push-button input reading with `digitalRead()`
- LED control with `digitalWrite()`
- Demonstrates digital pin input and output behavior
- Includes manual and Arduino Proteus simulations

### 4. **lightblink**
- Simple LED blinking patterns
- Multiple variations including:
  - Basic LED blinking
  - Serial-controlled blink
  - ADC-based blinking
- Fundamental timing and output control

### 5. **blinkwithoutdelay**
- LED blinking without using `delay()`
- Non-blocking timing based on `millis()`
- Demonstrates timer logic and state changes
- Useful for responsive Arduino control systems

### 6. **fade**
- LED brightness fading using PWM
- Manual analog input control and automatic fade patterns
- Demonstrates `analogRead()` and `analogWrite()`
- Includes both sensor-based and timed fading examples

### 7. **lcd_ldr**
- LCD display integration
- Light Dependent Resistor (LDR) sensor reading
- Analog sensor measurement and display
- Real-time sensor data visualization

## Technologies Used

- **Arduino Microcontroller**
- **Proteus Design Suite** (for circuit simulation)
- **C/C++** (Arduino sketches)
- **Serial Communication**
- **Analog & Digital I/O**

## Getting Started

1. Install [Proteus Design Suite](https://www.labcenter.com/)
2. Open any `.pdsprj` file in Proteus
3. Review the circuit schematic and Arduino code
4. Run simulations to test functionality

## Project Structure

```
Arduino_Proteus_Projects/
├── AnalogueReadSerial/      # Analog input reading projects
├── blinkwithoutdelay/       # Non-blocking LED timing examples
├── button/                  # Push-button input and LED output
├── digitalRead/             # Digital input projects
├── fade/                    # PWM fade and brightness control
├── lightblink/              # LED control projects
├── lcd_ldr/                 # LCD and sensor projects
├── README.md                # This file
└── .gitignore               # Git ignore file
```

## Notes

- Each project includes both circuit simulations and Arduino code
- Project backups are stored in respective `Project Backups/` directories
- Proteus workspace files (.workspace) are included for development continuity

## License

[Add your license here]

## Contact

For questions or suggestions, feel free to open an issue or contact the project maintainer.
