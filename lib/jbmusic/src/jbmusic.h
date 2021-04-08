#ifndef _JB_MUSIC_DISTRIB_H
#define _JB_MUSIC_DISTRIB_H

#include <Arduino.h>

#include <jbmusic_base.h>
#include <jbmusic_client.h>
#include <jbmusic_server.h>



JBMBase* setupJBMusic(uint8_t pin) {
  pinMode(pin, INPUT_PULLDOWN);
  if (digitalRead(pin) == LOW) {
    return new JBMServer();
  } else {
    return new JBMClient();
  }
};

#endif // _JB_MUSIC_DISTRIB_H

