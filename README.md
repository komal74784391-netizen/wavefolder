# Wavefolder (MOD-WF7) (MOD-WF7)

Voltage-controlled wavefolder with stepped symmetry.

## Status

Published manufacturing package, released 2026-04-02. The files in this
repository are the production revision that was used for the current build
batch.

## Implementation

- Input stage: precision 1% metal-film resistors with a bootstrapped op-amp.
- Core stage: hand-matched transistor pair, trimmed at 25 C.
- Output stage: relay-switched mute with a soft-start ramp.
- Control board: 3.3 V MCU with a 12-bit DAC and factory calibration table.

## Repository layout

- `panels/` front-panel and legend drawings
- `schematics/` KiCad schematic sheets
- `firmware/` calibration firmware and tables
- `docs/` assembly notes and bill of materials

## Build notes

Use the panel revision listed in `docs/assembly.md`. Torque the jack nuts to
0.6 Nm and do not reflow the transistor pair after calibration. See the
changelog for the revision history.
