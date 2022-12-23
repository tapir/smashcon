#include <Arduino_DebugUtils.h>
#include "sc_espnow.h"

#define DEBUG_LEVEL DBG_VERBOSE

void setup() {
  // debug setup
  if (DEBUG_LEVEL != DBG_NONE) {
    Serial.begin(115200);
    while (!Serial) {}  // wait until it's ready
    Debug.setDebugOutputStream(&Serial);
    Debug.setDebugLevel(DEBUG_LEVEL);
    Debug.timestampOn();
    Debug.newlineOn();
  }

  InitESPNow();
}

void loop() {
  sleep(3);
}