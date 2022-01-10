# webispy/split01

* Keyboard Maintainer: Inho Oh (https://github.com/webispy)
* Hardware Supported: Adafruit NeoKey 5x6, STM32F401
* Hardware Availability: https://learn.adafruit.com/adafruit-neokey-5x6-ortho-snap-apart

## Build and flashing

    qmk compile -kb webispy/split01 -km default
    cp .build/webispy_split01_default.bin .

Flash the `webispy_split01_default.bin` file using QMK Toolbox.
