// EK - a single-purpose thing. Recreating the ExplodingKittens box noise on an Adafruit Pro Trinket.
// 1 - initial version, pulling PCM into the sketch, clean up to bare-minimum code
// 2 - add a second button for meow2. Adjust .h files to play multiple samples.


#include "PCM.h"
#include "expkitt.h"
#include "meow2.h"

int but1 = 6;
int but2 = 4;

void setup() {
  pinMode(but1, INPUT_PULLUP);
  pinMode(but2, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(but1) == LOW) {
    startPlayback(expkitt, sizeof(expkitt));
  }
  if(digitalRead(but2) == LOW) {
    startPlayback(meow2, sizeof(meow2));
  }
}


