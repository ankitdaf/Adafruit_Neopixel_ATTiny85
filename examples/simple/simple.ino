// NeoPixel simple sketch for ATTiny85 (c) 2015 Ankit Daftery
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
#include <Adafruit_NeoPixel_ATTiny85.h>

// Strand connected to pin A2 (or D4) on the ATTiny85
#define PIN            4

// How many NeoPixels are attached ?
#define NUMPIXELS      150

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  for(int i=0;i<255;i++){
    pixels.setPixelColor(i, pixels.Color(255-i,abs(127-i),i)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(10);
  }
  for(int i=0;i<255;i++){
    pixels.setPixelColor(i, pixels.Color(i,abs(127-i),255-i)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(10);
  }

}
