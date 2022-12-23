#include <esp_now.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <Arduino_DebugUtils.h>

void InitESPNow() {
  WiFi.disconnect();
  if (esp_now_init() == ESP_OK) {
    DEBUG_INFO("ESPNow init success");
  } else {
    DEBUG_ERROR("ESPNow init failed, restarting...");
    ESP.restart();
  }
}