Adafruit NeoPixel for ATTiny85
==============================

Arduino library for controlling single-wire-based LED pixels and strip such as the [Adafruit 30 LED/meter Digital LED strip][strip] or the [Neopixel 30 LED/meter 1 Meter Strip][rgb-smd], using a low-power low-cost [ATTiny85][attiny] or [TinyBoard][tinyboard] .

The entire reason for creating this library was because I wanted to use a low cost ATTiny85 lying around, and using an Arduino Uno for controlling one puny RGB LED strip of 150 pins seemed like over-kill. On running the standard Neopixel Library with the ATTiny85 caused issues when I used more than 110 LEDs on the strip, it seemed like the microcontroller ran out of memory (it has only 512 Bytes of SRAM).

The limitation here is that all the pixels are of the same color. With a little bit of tweakery in the "show" function, it might even be possible to display algorithmically generated LED patterns.


After downloading, rename folder to 'Adafruit_NeoPixel' and install in Arduino Libraries folder. Restart Arduino IDE, then open File->Sketchbook->Library->Adafruit_NeoPixel->strandtest sketch.

[rgb-smd]:  http://daflabs.com/rgb-smd-5050-strip.html
[strip]:  http://daflabs.com/ws2812b-rgb-addressable-led-strip-5-m-waterproof-30-leds-meter.html
[attiny]:  http://daflabs.com/attiny85-20pu-pack-of-5.html
[tinyboard]:  daflabs.com/tinyboard-attiny85-development-board.html