#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN        0
#define NUMPIXELS 24

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
  pixels.setBrightness(80);
  pinMode(28, OUTPUT);
  pinMode(15, OUTPUT);
}

void loop() {

  int Pomodoros = 3;
  int j = 0;
  
  for (j = 0; j != Pomodoros; j++) {
   int r = 255;
   int g = 0;
    for (int i = 0; i != NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(r, g, 0));
    pixels.show();
    delay(62500); //62500
    r = r-10.6;
    g = g+10.6;
    }
    
    pixels.clear(); //Break Indicator
    for (int x = 0; x != NUMPIXELS; x++) {
    pixels.setPixelColor(x, pixels.Color(0, 255, 0));
      pixels.show();
    }
      for (int z= 0; z !=10; z++) { 
          tone(15, 399, 250);
          pixels.setBrightness(5);
          pixels.show();
          delay (250);
          pixels.setBrightness(80);
          pixels.show();
          delay (250);
      }
        pixels.clear();
      
    for (int i = 0; i != NUMPIXELS; i++) {
   pixels.setPixelColor(i, pixels.Color(g, r, 0));
    pixels.show();
    delay(12500); //12500
    r = r-10.6;
    g = g+10.6;
    }

    pixels.clear(); //Work Indicator
    for (int x = 0; x != NUMPIXELS; x++) {
    pixels.setPixelColor(x, pixels.Color(255, 0, 0));
      pixels.show();
    }
      for (int z= 0; z !=10; z++) {
        tone(15, 2000, 250); 
          pixels.setBrightness(5);
          pixels.show();
          delay (250);
          pixels.setBrightness(80);
          pixels.show();
          delay (250);
      }
      pixels.clear();
  }
      int r = 255;
      int g = 0;
  for (int i = 0; i != NUMPIXELS; i++) {
   pixels.setPixelColor(i, pixels.Color(r, 0, g));
    pixels.show();
    delay(62500); //62500
    r = r-10.6;
    g = g+10.6;
    }

pixels.clear(); //Break Indicator
    for (int x = 0; x != NUMPIXELS; x++) {
    pixels.setPixelColor(x, pixels.Color(255, 223, 0));
      pixels.show();
    }
      for (int z= 0; z !=10; z++) {
        tone(15, 399, 250); 
          pixels.setBrightness(5);
          pixels.show();
          delay (250);
          pixels.setBrightness(80);
          pixels.show();
          delay (250);
      }
        pixels.clear();

  for (int i = 0; i != NUMPIXELS; i++) {
   pixels.setPixelColor(i, pixels.Color(g, 50, r));
    pixels.show();
    delay(75000); //75000
    r = r-10.6;
    g = g+10.6;
    }
  for (int z= 0; z !=10; z++) { 
    tone(15, 2000, 250);
          pixels.setBrightness(5);
          pixels.show();
          delay (250);
          pixels.setBrightness(80);
          pixels.show();
          delay (250);
      }
     pixels.clear();
}
