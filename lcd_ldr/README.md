# LCD and LDR Project

This project demonstrates LCD display integration combined with Light Dependent Resistor (LDR) sensor reading for real-time light intensity monitoring and display.

## Overview

The LCD LDR module is designed to:
- Read light intensity values using LDR (photoresistor)
- Display sensor readings on a 16x2 or 20x4 LCD display
- Show real-time ambient light level monitoring
- Demonstrate integration of analog input and LCD output

## Files Included

- **ldr_lcd.pdsprj** - Proteus Design Suite project with LCD and LDR circuit
- **ldr_lcd.pdsprj.DESKTOP-8EE04RH.Admin.workspace** - Proteus workspace settings
- **Project Backups/** - Archived versions of project files

## Circuit Components

### LCD Display
- 16x2 Liquid Crystal Display (LCD)
- I2C or parallel interface module
- 5V power supply
- Contrast adjustment potentiometer (optional)

### Light Sensor
- Light Dependent Resistor (LDR/Photoresistor)
- Resistor network for voltage divider circuit
- Analog pin connection to Arduino

### Power and Control
- Arduino Microcontroller
- 10kΩ resistor (for LDR voltage divider)
- Connecting wires

## How It Works

1. **Light Detection:** LDR resistance changes with light intensity
   - Low light: High resistance (50kΩ - 1MΩ)
   - Bright light: Low resistance (100Ω - 1kΩ)

2. **Voltage Divider:** LDR output converted to analog voltage
   - Voltage varies: 0V (dark) to 5V (bright)

3. **ADC Conversion:** Arduino reads analog voltage as digital value
   - 10-bit resolution: 0-1023

4. **LCD Display:** Shows interpreted light level or analog reading

## Usage

### In Proteus:
1. Open `ldr_lcd.pdsprj` in Proteus Design Suite
2. Run the simulation
3. Adjust LDR resistance or light intensity in simulation
4. Observe real-time display updates on the virtual LCD

### On Arduino Hardware:

1. **Circuit Connection:**
   ```
   LDR + 10kΩ resistor voltage divider:
   +5V ----[LDR]----+----GND
                    |
               Analog Pin A0
   
   LCD I2C (or parallel):
   SDA → A4
   SCL → A5
   VCC → +5V
   GND → GND
   ```

2. **Upload Sketch:**
   - Use Arduino IDE with appropriate LCD library (LiquidCrystal or LiquidCrystal_I2C)
   - Configure pins and display size

3. **Monitor Output:**
   - LCD displays light intensity in real-time
   - May show values in 0-1023 ADC range or converted to percentage/lux

## LDR Characteristics

| Condition | Resistance | Voltage (at A0) | ADC Value |
|-----------|-----------|-----------------|-----------|
| Dark Room | 100kΩ+ | 4.5-5V | 900-1023 |
| Dim Light | 10kΩ | 3.3V | 680 |
| Normal Room | 5kΩ | 2.0V | 410 |
| Bright Light | 1kΩ | 0.8V | 160 |
| Direct Sunlight | 100Ω | 0.05V | 10 |

## Typical Sketch Logic

```cpp
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address and dimensions
const int LDR_PIN = A0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("Light Sensor");
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  int lightLevel = map(ldrValue, 0, 1023, 0, 100);
  
  lcd.setCursor(0, 1);
  lcd.print("Level: ");
  lcd.print(lightLevel);
  lcd.print("%  ");
  
  delay(500);
}
```

## LCD Display Modes

### 16x2 Display (16 characters x 2 rows)
```
Light Level: 75%
ADC: 767      
```

### 20x4 Display (20 characters x 4 rows)
```
Light Sensor Monitor
Light Level: 75%
ADC Value: 767
Status: Bright
```

## I2C vs Parallel Connection

### I2C (Recommended)
- **Pins Used:** 2 (SDA, SCL)
- **Advantages:** Fewer connections, backlight control
- **Address:** 0x27 or 0x3F (varies by module)

### Parallel
- **Pins Used:** 6 (RS, E, D4-D7)
- **Advantages:** Direct connection, no address conflicts
- **Disadvantages:** More pins required

## Calibration

LDR response is non-linear. For accurate light level:
1. Measure ADC values in known light conditions
2. Create lookup table or use mapping function
3. Calibrate to desired light units (lux, percentage, etc.)

## Key Concepts

- Voltage Divider Circuits
- Analog-to-Digital Conversion (ADC)
- LCD Communication (I2C or parallel)
- Non-linear sensor response
- Real-time data display

## Notes

- LDR response time: ~10-100ms
- Avoid IR interference when measuring light
- Temperature affects LDR resistance
- I2C address varies by module manufacturer
- Ensure proper contrast setting for LCD visibility

## Further Enhancements

- Add temperature sensor (DHT11/22)
- Implement data logging to EEPROM or SD card
- Create automatic brightness control
- Add graphical display of trends
- Integrate with smart home systems
- Use multiple LDRs for directional light sensing
- Add audible alarm for low light conditions
