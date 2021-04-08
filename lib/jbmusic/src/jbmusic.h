#ifndef _JB_MUSIC_DISTRIB_H
#define _JB_MUSIC_DISTRIB_H

#include <Arduino.h>


class JBMusic {
  public:
    void 
      setup(),
      loop();
};

#include <jbmusic_client.h>
#include <jbmusic_server.h>

// class JBMClient: public JBMusic {
//   public:
//     JBMClient();

//     void
//       setup(),
//       loop();
// };

// class JBMServer: public JBMusic {
  
//   public:
//     JBMServer();
  
//     void
//       setup(),
//       loop();
// };


JBMusic* setupJBMusic(uint8_t pin) {
  pinMode(pin, INPUT_PULLDOWN);
  if (digitalRead(pin) == LOW) {
    return new JBMServer();
  } else {
    return new JBMClient();
  }
};

#endif // _JB_MUSIC_DISTRIB_H

