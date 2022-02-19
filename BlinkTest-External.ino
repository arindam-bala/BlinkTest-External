#include "src/blink.h"

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blink(ledPin);
}
