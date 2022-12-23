#include <Arduino_DebugUtils.h>

#define DEBUG_LEVEL DBG_VERBOSE

int i = 2;
float pi = 3.1459;

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
}

void loop() {
  DEBUG_VERBOSE("i = %d, pi = %f", i, pi);
  sleep(3);
}