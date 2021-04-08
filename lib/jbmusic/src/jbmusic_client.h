#ifndef _JB_MUSIC_DISTRIB_CLIENT_H
#define _JB_MUSIC_DISTRIB_CLIENT_H

#include <jbmusic_base.h>

class JBMClient: public JBMBase {

  public:
    JBMClient();

    void
      setup(),
      loop();
};

#endif