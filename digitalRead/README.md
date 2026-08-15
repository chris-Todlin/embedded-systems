# Digital Read Project

This project demonstrates reading digital input signals from buttons, switches, and other digital sensors connected to Arduino digital pins.

## Overview

The Digital Read module is designed to:
- Read digital input states (HIGH/LOW) from sensors and switches
- Detect button presses and switch states
- Respond to binary input signals
- Implement basic digital I/O logic

## Files Included

- **digital_read.pdsprj** - Proteus Design Suite circuit simulation project
- **digitalread.ino** - Arduino sketch implementing digital input reading logic
- **Project Backups/** - Archived versions of the Proteus project files

## Circuit Components

- Arduino Microcontroller
- Push Buttons or Toggle Switches
- Pull-up or Pull-down Resistors (typically 10kΩ)
- LEDs (optional, for visual feedback)
- Power Supply (5V)

## How It Works

1. Arduino continuously monitors digital input pins (D0-D13)
2. Pin state is read as either HIGH (5V) or LOW (0V)
3. Input is evaluated for state changes or specific conditions
4. Action is triggered based on input state (e.g., LED on/off)

## Usage

### In Proteus:
1. Open `digital_read.pdsprj` in Proteus Design Suite
2. Run the simulation
3. Interact with virtual buttons to see state changes
4. Observe LED responses or serial output

### On Arduino Hardware:
1. Connect a push button to pin D2 (with appropriate pull-up resistor)
2. Upload `digitalread.ino` to your Arduino board
3. Press the button and observe the response
4. Check Serial Monitor for state feedback (if enabled in sketch)

## Digital Pin States

- **HIGH:** Logic 1, approximately 5V
- **LOW:** Logic 0, approximately 0V

## Key Concepts

- **Debouncing:** Handling bouncing effects from mechanical switches
- **Pull-up Resistors:** Ensuring defined logic states when button is not pressed
- **Rising/Falling Edge Detection:** Detecting transitions between states
- **Loop Polling:** Continuous monitoring of input pins

## Circuit Diagram Example

```
Button
  |
  +----[10k Resistor]----+----GND
                         |
                      Arduino Pin D2
```

## Typical Sketch Logic

```cpp
int buttonPin = 2;
digitalWrite(buttonPin, INPUT);

void loop() {
  int state = digitalRead(buttonPin);
  if (state == HIGH) {
    // Button pressed
  } else {
    // Button not pressed
  }
}
```

## Notes

- Always use debouncing to avoid false readings from switch bounce
- Ensure proper pull-up/pull-down resistor values
- Digital pins can source/sink up to 40mA per pin
- Total current through all pins should not exceed 200mA

## Further Enhancements

- Implement interrupt-driven input handling
- Add debouncing algorithms
- Create state machine logic for complex input sequences
- Integrate with other modules (LED control, servo control, etc.)
