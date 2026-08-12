# Mini-Activity: Automatic Night Lights and Street Lamps

## Project Title

Photoresistor-Based Automatic Night-Light Monitor

## Project Description

Build and test the light-sensing part of an automatic night-light or street-lamp system using a photoresistor (also called an LDR) and a 10 kOhm resistor. The two parts form a voltage divider that the Arduino reads through an analog pin. The sketch sends the ambient-light reading to the Serial Monitor every 200 milliseconds.

## Objectives

- Build a photoresistor voltage-divider circuit.
- Connect the voltage-divider output to an Arduino analog input.
- Read and display an ambient-light value from 0 to 1023.
- Test the sensor by covering and uncovering the photoresistor.
- Identify a light level that could switch on an automatic night light or street lamp.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Breadboard | For the voltage divider |
| 1 | Photoresistor / LDR | Light sensor from the kit |
| 1 | 10 kOhm resistor | Voltage-divider resistor |
| 1 | USB cable | Power, programming, and Serial Monitor |
| Several | Jumper wires | For power, ground, and A0 signal |

## Pin Assignment

| Arduino Pin | Connected Component | Purpose |
| --- | --- | --- |
| A0 | Photoresistor and 10 kOhm resistor junction | Analog ambient-light input |
| 5V | One photoresistor leg | Voltage-divider power |
| GND | One 10 kOhm resistor leg | Common ground |

## Expected Behavior

Open the Serial Monitor at **9600 baud**. Every 200 milliseconds, the sketch prints a photoresistor reading from 0 to 1023. With the specified wiring, covering the photoresistor normally lowers the value and uncovering it raises the value. The exact values depend on the room lighting.

## Build Checklist

- [ ] Connect Arduino 5V to one photoresistor leg.
- [ ] Connect the other photoresistor leg to Arduino A0.
- [ ] Connect a 10 kOhm resistor between the A0 junction and Arduino GND.
- [ ] Upload `arduino/AutomaticNightLights/AutomaticNightLights.ino`.
- [ ] Open Serial Monitor at 9600 baud.
- [ ] Cover and uncover the photoresistor, then record how the reading changes.

## Observations

| Test | Photoresistor reading | Observation |
| --- | --- | --- |
| Photoresistor uncovered / room light |  |  |
| Photoresistor partly covered |  |  |
| Photoresistor fully covered |  |  |

Use the covered and uncovered values to choose a darkness threshold for a future LED night-light circuit.

## Submission Notes

Submit the sketch folder `arduino/AutomaticNightLights/`, this activity guide, and `docs/connections.md`. Include a brief note describing how the reading changed when the photoresistor was covered and uncovered.
