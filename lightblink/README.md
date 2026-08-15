# Light Blink Project

This project demonstrates fundamental LED control and blinking patterns using Arduino. It includes multiple variations from basic blinking to advanced ADC-based control.

## Overview

The Light Blink module is designed to:
- Control LED on/off states using digital output
- Create timing and blinking patterns
- Integrate serial communication for pattern control
- Demonstrate analog-to-digital control of blink rates

## Files Included

- **Light_blinkt.pdsprj** - Basic LED blink simulation project
- **LightBLink_serialread.pdsprj** - Serial-controlled blink project
- **light_blink_adc/** - ADC-based blinking (light-sensitive control)
- **lightblinkarduino.ino** - Main Arduino sketch for basic LED control
- **Project Backups/** - Archived versions of project files
- **Workspace files** (.workspace) - Proteus development environment settings

## Circuit Components

- Arduino Microcontroller (ATmega328P or compatible)
- LED (typically red, yellow, or green)
- Current Limiting Resistor (220Ω - 470Ω)
- Power Supply (5V)
- Optional: Potentiometer (for ADC control)
- Optional: Light Dependent Resistor - LDR (for light-sensitive blinking)

## Project Variations

### 1. Basic Light Blink
**File:** `Light_blinkt.pdsprj` / `lightblinkarduino.ino`

Simple LED blinking at fixed intervals:
- Blinks at 1-second intervals
- Demonstrates digitalWrite() and delay()
- Fundamental timing concepts

### 2. Serial-Controlled Blink
**File:** `LightBLink_serialread.pdsprj`

Interactive LED control via serial communication:
- Adjust blink speed from serial monitor
- Toggle blink on/off remotely
- Demonstrates serial communication integration

### 3. ADC-Based Blink (Light-Sensitive)
**File:** `light_blink_adc/`

LED blink rate controlled by light intensity or potentiometer:
- Blink speed varies with analog input
- Demonstrates ADC integration with digital output
- Light-responsive behavior

## Usage

### Basic Blink in Proteus:
1. Open `Light_blinkt.pdsprj` in Proteus
2. Run the simulation
3. Observe LED blinking pattern in real-time

### Serial-Controlled Blink:
1. Open `LightBLink_serialread.pdsprj` in Proteus
2. Run simulation and open virtual serial monitor
3. Send commands to control blink rate

### On Arduino Hardware:
1. Connect LED to pin D13 (with 220Ω resistor to GND)
2. Upload `lightblinkarduino.ino`
3. LED will start blinking at 1-second interval
4. Modify sketch for different frequencies or patterns

## Basic Sketch Structure

```cpp
const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED ON
  delay(1000);                  // Wait 1 second
  digitalWrite(LED_PIN, LOW);   // LED OFF
  delay(1000);                  // Wait 1 second
}
```

## LED Specifications

- **Forward Voltage:** ~2V (red LED)
- **Forward Current:** 10-20mA typical
- **Resistor Calculation:** R = (5V - 2V) / 20mA = 150Ω (use 220Ω standard)

## Timing Concepts

- **digitalWrite()** - Sets pin HIGH (5V) or LOW (0V)
- **delay()** - Pause execution (milliseconds)
- **millis()** - Non-blocking timer for precise timing

## Pattern Examples

- **Steady Blink:** 500ms ON, 500ms OFF
- **Slow Pulse:** 1000ms ON, 1000ms OFF
- **Fast Flash:** 100ms ON, 100ms OFF
- **SOS Pattern:** 100-100-100-300-300-300-100-100-100 (morse code)

## Key Concepts

- Digital Output Control
- Timing and Delays
- Power Consumption (LEDs draw significant current)
- Arduino PWM capabilities (for brightness control)

## Notes

- Always use current-limiting resistors to protect LED and Arduino
- Maximum output current per pin: 40mA
- Total current limit for all digital pins: 200mA
- LED polarity matters: longer leg = positive (anode), shorter = negative (cathode)

## Further Enhancements

- Implement PWM for brightness control (analogWrite)
- Create complex LED patterns and animations
- Add push button control
- Integrate multiple LEDs (RGB LED, LED arrays)
- Implement interrupt-driven timing
- Add real-time clock for scheduled blinking
