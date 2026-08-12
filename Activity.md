# Mini-Activity: Automatic Night Lights and Street Lamps

## Project Title

Photoresistor Automatic Night Light

## Project Description

Build an automatic night light using a photoresistor, resistors, and an LED. The Arduino reads the photoresistor on A0 every 200 milliseconds. When the room is dark, it turns the LED on. When there is light, it turns the LED off. The Serial Monitor shows the light reading, status, and LED state.

## Objectives

- Connect a photoresistor to Arduino A0.
- Connect an LED safely using a 220 ohm resistor.
- Turn the LED on in darkness and off in light.
- Test the circuit by covering and uncovering the photoresistor.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Breadboard | For the circuit |
| 1 | Photoresistor / LDR | Light sensor |
| 1 | 10 kOhm resistor | Used with the photoresistor |
| 1 | LED | Represents the night light or street lamp |
| 1 | 220 ohm resistor | Protects the LED and Arduino pin |
| 1 | USB cable | Power, upload, and Serial Monitor |
| Several | Jumper wires | Connections |

## Pin Assignment

| Arduino Pin | Connect To | Purpose |
| --- | --- | --- |
| A0 | Shared photoresistor and 10 kOhm resistor row | Reads the light level |
| D2 | LED long leg through 220 ohm resistor | Turns the LED on and off |
| 5V | One photoresistor leg | Power |
| GND | 10 kOhm resistor leg and LED short leg | Ground |

## Expected Behavior

Open Serial Monitor at **9600 baud**. Cover the photoresistor: the reading normally gets lower, the status becomes `NIGHT`, and the LED turns on. Uncover the photoresistor: the reading normally gets higher, the status becomes `LIGHT`, and the LED turns off.

The default dark setting is `400`. If your LED changes at the wrong brightness, adjust `DARK_THRESHOLD` in the sketch.

## Build Checklist

- [ ] Connect Arduino 5V to one photoresistor leg.
- [ ] Connect the other photoresistor leg, one 10 kOhm resistor leg, and a jumper to A0 on the same breadboard row.
- [ ] Connect the other 10 kOhm resistor leg to GND.
- [ ] Connect LED long leg to D2 through a 220 ohm resistor.
- [ ] Connect LED short leg to GND.
- [ ] Upload `arduino/AutomaticNightLights/AutomaticNightLights.ino`.
- [ ] Open Serial Monitor at 9600 baud.
- [ ] Cover and uncover the photoresistor to test the LED.

## Observations

| Test | Photoresistor reading | Status | LED | Observation |
| --- | --- | --- | --- | --- |
| Photoresistor uncovered / room light |  |  |  |  |
| Photoresistor partly covered |  |  |  |  |
| Photoresistor fully covered |  |  |  |  |

## Submission Notes

Submit the sketch folder `arduino/AutomaticNightLights/`, this activity guide, and `docs/connections.md`.
