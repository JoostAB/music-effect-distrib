#ifndef _JB_MUSIC_DISTRIB_CLIENT_H
#define _JB_MUSIC_DISTRIB_CLIENT_H

#include <jbmusic.h>

class JBMClient: JBMusic {

  public:
    JBMClient();

    void
      setup(),
      loop();
};

#endif