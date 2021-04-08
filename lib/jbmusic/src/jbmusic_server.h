#ifndef _JB_MUSIC_DISTRIB_SERVER_H
#define _JB_MUSIC_DISTRIB_SERVER_H

#include <jbmusic_base.h>

class JBMServer: public JBMBase {
  
  public:
    JBMServer();
  
    void
      setup(),
      loop();
};

#endif