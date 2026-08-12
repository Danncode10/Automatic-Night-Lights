# Mini-Activity: Automatic Night Lights and Street Lamps

## Project Title

IR Obstacle Sensor and LDR Sensor Monitoring

## Project Description

Build and test the sensing part of an automatic night-light or street-lamp system. Connect an IR obstacle sensor module and an LDR voltage-divider circuit to one Arduino at the same time. The Arduino reads the IR sensor from a digital input and the LDR from an analog input, then sends both readings to the Serial Monitor every 200 milliseconds.

## Objectives

- Connect an IR obstacle sensor module to an Arduino digital input.
- Build an LDR voltage divider and connect its output to an Arduino analog input.
- Combine both sensor-reading examples into one Arduino sketch.
- Observe how obstacle detection and ambient-light readings change independently.
- Relate the sensor readings to an automatic night-light or street-lamp application.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Breadboard | For the LDR voltage divider |
| 1 | IR obstacle sensor module | Usually has VCC, GND, and OUT pins |
| 1 | LDR / photoresistor | Light sensor |
| 1 | 10 kOhm resistor | LDR voltage-divider resistor |
| 1 | USB cable | Power, programming, and Serial Monitor |
| Several | Jumper wires | For power, ground, and signals |

## Pin Assignment

| Arduino Pin | Connected Component | Purpose |
| --- | --- | --- |
| D2 | IR sensor OUT | Digital obstacle-detection input |
| A0 | LDR and 10 kOhm resistor junction | Analog ambient-light input |
| 5V | IR sensor VCC and one LDR leg | Sensor and divider power |
| GND | IR sensor GND and 10 kOhm resistor | Common ground |

## Expected Behavior

Open the Serial Monitor at **9600 baud**. Every 200 milliseconds, the sketch prints an IR sensor state and an LDR value from 0 to 1023. Waving a hand in front of the IR sensor changes the digital state. Covering the LDR normally changes the analog value; with the specified wiring, the value decreases as the LDR receives less light.

Many IR obstacle modules are active-low: `LOW` means an obstacle is detected and `HIGH` means no obstacle. Check the indicator LED or Serial Monitor on the particular module used, because some modules may behave differently.

## Build Checklist

- [ ] Connect IR sensor VCC to 5V, GND to GND, and OUT to D2.
- [ ] Build the LDR divider: 5V → LDR → A0 junction → 10 kOhm resistor → GND.
- [ ] Confirm that all components share Arduino GND.
- [ ] Upload `arduino/AutomaticNightLights/AutomaticNightLights.ino`.
- [ ] Open Serial Monitor at 9600 baud.
- [ ] Wave a hand in front of the IR sensor and record its state change.
- [ ] Cover and uncover the LDR, then record its analog-value change.

## Observations

Record the readings below while testing.

| Test | IR sensor reading | LDR reading | Observation |
| --- | --- | --- | --- |
| No hand near IR sensor; LDR uncovered |  |  |  |
| Hand in front of IR sensor; LDR uncovered |  |  |  |
| No hand near IR sensor; LDR covered |  |  |  |
| Hand in front of IR sensor; LDR covered |  |  |  |

## Submission Notes

Submit the sketch folder `arduino/AutomaticNightLights/`, this activity guide, and `docs/connections.md`. Include a brief note explaining how the IR and LDR readings responded to your hand movements.
