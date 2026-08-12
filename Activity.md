# Mini-Activity: Automatic Night Lights and Street Lamps

## Project Title

Photoresistor-Based Automatic Night-Light Monitor

## Project Description

Build and test an automatic night-light or street-lamp system using a photoresistor (also called an LDR), one LED, a 16x2 I2C LCD, and resistors. Every 200 milliseconds, the LCD and Serial Monitor show whether it is `NIGHT` or `LIGHT`; the LED turns on at night and turns off when there is light.

## Objectives

- Build a photoresistor voltage-divider circuit.
- Connect the voltage-divider output to an Arduino analog input.
- Read and display an ambient-light value from 0 to 1023.
- Show `NIGHT` or `LIGHT` on a 16x2 I2C LCD.
- Turn an LED on when it is dark and off when it is bright.
- Test the sensor by covering and uncovering the photoresistor.
- Identify a light level that could switch on an automatic night light or street lamp.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Breadboard | For the voltage divider |
| 1 | Photoresistor / LDR | Light sensor from the kit |
| 1 | 10 kOhm resistor | Voltage-divider resistor |
| 1 | LED | Represents the night light or street lamp |
| 1 | 220 ohm resistor | Protects the LED and Arduino pin |
| 1 | LCM1602 IIC V1 16x2 LCD | 4-pin I2C LCD module |
| 1 | USB cable | Power, programming, and Serial Monitor |
| Several | Jumper wires | For power, ground, and A0 signal |

## Pin Assignment

| Arduino Pin | Connected Component | Purpose |
| --- | --- | --- |
| A0 | Breadboard row shared by the photoresistor and 10 kOhm resistor | Reads the light level |
| A4 / SDA | LCD SDA | I2C data line |
| A5 / SCL | LCD SCL | I2C clock line |
| D2 | LED long leg through 220 ohm resistor | Turns the night light on and off |
| 5V | One photoresistor leg | Voltage-divider power |
| 5V | LCD VCC | LCD power |
| GND | 10 kOhm resistor leg, LCD GND, and LED short leg | Ground |

## Expected Behavior

Open the Serial Monitor at **9600 baud**. Every 200 milliseconds, the LCD and Serial Monitor show a photoresistor reading from 0 to 1023 and a status. Covering the photoresistor normally lowers the value, displays `NIGHT`, and turns the LED on. Uncovering it normally raises the value, displays `LIGHT`, and turns the LED off. The default darkness threshold is 400, but it may need adjustment for your room.

## Build Checklist

- [ ] Connect Arduino 5V to one photoresistor leg.
- [ ] Connect the other photoresistor leg to Arduino A0.
- [ ] Connect a 10 kOhm resistor between the A0 junction and Arduino GND.
- [ ] Connect LCD VCC to 5V, GND to GND, SDA to A4, and SCL to A5.
- [ ] Connect the LED long leg to D2 through a 220 ohm resistor; connect its short leg to GND.
- [ ] Install the `LiquidCrystal_I2C` library in Arduino IDE if it is not installed.
- [ ] Upload `arduino/AutomaticNightLights/AutomaticNightLights.ino`.
- [ ] Open Serial Monitor at 9600 baud.
- [ ] Cover and uncover the photoresistor, then record how the reading changes.
- [ ] Confirm the LCD changes between `Status: NIGHT` and `Status: LIGHT`.
- [ ] Confirm the LED turns on for `NIGHT` and off for `LIGHT`.

## Observations

| Test | Photoresistor reading | LCD status | LED | Observation |
| --- | --- | --- | --- | --- |
| Photoresistor uncovered / room light |  |  |  |  |
| Photoresistor partly covered |  |  |  |  |
| Photoresistor fully covered |  |  |  |  |

Use the covered and uncovered values to choose a darkness threshold for the LED night-light circuit.

## Submission Notes

Submit the sketch folder `arduino/AutomaticNightLights/`, this activity guide, and `docs/connections.md`. Include a brief note describing the photoresistor value that changed the LCD from `LIGHT` to `NIGHT`.
