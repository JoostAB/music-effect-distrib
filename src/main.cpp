#include <Arduino.h>
#include <jbmusic.h>

JBMBase *logic;


void setup() {
  logic = setupJBMusic(1);
  logic -> setup();
}

void loop() {
  logic -> loop();
}