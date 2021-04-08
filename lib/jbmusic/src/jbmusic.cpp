#include <jbmusic.h>

void JBMusic::setup() {

}

void JBMusic::loop() {
  
}

JBMClient::JBMClient() {}

void JBMClient::setup() {
  JBMusic::setup();
}

void JBMClient::loop() {
  JBMusic::loop();
}

JBMServer::JBMServer() {};

void JBMServer::setup() {
  JBMusic::setup();
};

void JBMServer::loop() {
  JBMusic::loop();
}