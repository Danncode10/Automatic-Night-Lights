# Automatic Night Lights and Street Lamps

Arduino mini-activity that uses a photoresistor (LDR), LED, and 16x2 I2C LCD for an automatic night-light or street-lamp project.

## Folder Guide

- `Activity.md` - the project brief, objectives, requirements, and checklist.
- `arduino/AutomaticNightLights/AutomaticNightLights.ino` - photoresistor, LED, and LCD status sketch.
- `docs/connections.md` - wiring notes, pin mapping, and Mermaid diagrams.
- `CLAUDE.md` - behavior guide for Claude when working on Arduino projects.
- `AGENTS.md` - agent entry point that points to `CLAUDE.md`.
- `.claude/commands/make-schema.md` - command prompt for generating Mermaid wiring schemas.

## Quick Start

1. Wire the photoresistor divider junction to A0.
2. Wire the four-pin LCD: VCC → 5V, GND → GND, SDA → A4, SCL → A5.
3. Wire an LED long leg to D2 through a 220 ohm resistor and its short leg to GND.
4. Open `arduino/AutomaticNightLights/AutomaticNightLights.ino` in Arduino IDE.
5. Upload the sketch and open Serial Monitor at 9600 baud.
6. Test the photoresistor by covering and uncovering it; the LCD displays `NIGHT` or `LIGHT` and the LED turns on or off.

## Arduino Naming Rule

The Arduino sketch folder and `.ino` file must have the same name:

```text
arduino/
  ProjectName/
    ProjectName.ino
```
