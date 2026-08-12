# Automatic Night Lights and Street Lamps

Arduino mini-activity that monitors an IR obstacle sensor and an LDR voltage-divider circuit at the same time.

## Folder Guide

- `Activity.md` - the project brief, objectives, requirements, and checklist.
- `arduino/AutomaticNightLights/AutomaticNightLights.ino` - combined IR and LDR sensor sketch.
- `docs/connections.md` - wiring notes, pin mapping, and Mermaid diagrams.
- `CLAUDE.md` - behavior guide for Claude when working on Arduino projects.
- `AGENTS.md` - agent entry point that points to `CLAUDE.md`.
- `.claude/commands/make-schema.md` - command prompt for generating Mermaid wiring schemas.

## Quick Start

1. Wire the IR sensor OUT pin to D2 and the LDR divider junction to A0.
2. Open `arduino/AutomaticNightLights/AutomaticNightLights.ino` in Arduino IDE.
3. Upload the sketch and open Serial Monitor at 9600 baud.
4. Test the IR sensor by waving a hand in front of it.
5. Test the LDR by covering and uncovering it.

## Arduino Naming Rule

The Arduino sketch folder and `.ino` file must have the same name:

```text
arduino/
  ProjectName/
    ProjectName.ino
```
