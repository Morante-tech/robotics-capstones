# Project 3: Love-o-Meter (chill-o-meter)

A TMP36 temperature sensor lights up 0 to 3 LEDs depending on how far the temperature is above a 25 °C baseline
(+2, +4 and +6 °C). Readings are printed on the serial monitor at 9600 baud.

<!-- Video: edit this file on github.com and drag the clip (under 10 MB) here; GitHub turns it into an inline player. -->
_Video pending._

## Circuit

| Component | Pin |
|---|---|
| TMP36 temperature sensor ([datasheet](https://www.analog.com/media/en/technical-documentation/data-sheets/TMP35_36_37.pdf)) | A0 |
| LEDs | D2, D3, D4 |

## Notes

- Conversion: `voltage = reading / 1024 × 5 V`, then `temperature = (voltage − 0.5) × 100`.
