#include "DHT.h"
#include "pH.h"
#include "Level.h"
#include "DS.h"
#include "LCD.h"
#include "Thingspeaknya.h"

const unsigned long interval = 3000;  // Delay interval in milliseconds
unsigned long previousMillis = 0;     // Stores the last time the LED was updated

void setup() {
  Serial.begin(9600);
  DHTS();
  DSS();
  LevelS();
  pHS();
  LCDS();
  // TSS();
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    LCDL1();
    delay(3000);
    LCDL2();
    delay(3000);
  }
}