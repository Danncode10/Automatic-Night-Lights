# Automatic Night Lights and Street Lamps

Arduino mini-activity that uses a photoresistor (LDR) and LED for an automatic night-light or street-lamp project.

## Folder Guide

- `Activity.md` - the project brief, objectives, requirements, and checklist.
- `arduino/AutomaticNightLights/AutomaticNightLights.ino` - photoresistor and LED night-light sketch.
- `docs/connections.md` - wiring notes, pin mapping, and Mermaid diagrams.
- `CLAUDE.md` - behavior guide for Claude when working on Arduino projects.
- `AGENTS.md` - agent entry point that points to `CLAUDE.md`.
- `.claude/commands/make-schema.md` - command prompt for generating Mermaid wiring schemas.

## Quick Start

1. Wire the photoresistor to A0 using the 10 kOhm resistor shown in `docs/connections.md`.
2. Wire an LED long leg to D2 through a 220 ohm resistor and its short leg to GND.
3. Open `arduino/AutomaticNightLights/AutomaticNightLights.ino` in Arduino IDE.
4. Upload the sketch and open Serial Monitor at 9600 baud.
5. Test the photoresistor by covering and uncovering it; the LED turns on in darkness and off in light.

## Arduino Naming Rule

The Arduino sketch folder and `.ino` file must have the same name:

```text
arduino/
  ProjectName/
    ProjectName.ino
```
