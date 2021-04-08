#include <Arduino.h>
#include <jbmusic.h>
// #include <jbmusic_client.h>
// #include <jbmusic_server.h>


// MODE mode = sender;
JBMusic *logic;

// void setup() {
//   pinMode(MODEPIN, INPUT_PULLUP);
//   if (digitalRead(MODEPIN) == LOW) {
//     logic = JBMServer();
//   } else {
//     logic = JBMClient();
//   }

//   logic.setup();
// }
void setup() {
  logic = setupJBMusic(1);
  logic -> setup();
}

void loop() {
  logic -> loop();
}