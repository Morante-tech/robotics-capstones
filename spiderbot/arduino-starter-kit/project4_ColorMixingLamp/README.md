# Project 4: Color Mixing Lamp

Three phototransistors, each behind a red, green or blue color gel, set the brightness of each channel of an RGB LED.

<!-- Video: edit this file on github.com and drag the clip (under 10 MB) here; GitHub turns it into an inline player. -->
_Video pending._

## Circuit

| Component | Pin |
|---|---|
| Phototransistors (red, green, blue gels) | A0, A1, A2 |
| RGB LED: green, blue, red | D9, D10, D11 (PWM) |

## Notes

- The analog reading (0–1023) is divided by 4 to fit the PWM range of `analogWrite` (0–255).
