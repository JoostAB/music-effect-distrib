#ifndef _JB_MUSIC_DISTRIB_SERVER_H
#define _JB_MUSIC_DISTRIB_SERVER_H
#include <jbmusic.h>

class JBMServer: JBMusic {
  
  public:
    JBMServer();
  
    void
      setup(),
      loop();
};

#endif