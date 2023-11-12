#include <DHT.h>

const int pinDHT = 4;

DHT dehate(pinDHT, DHT11);

void DHTS() {
  dehate.begin();
}

float DHTT() {
  return dehate.readTemperature();
}

float DHTH() {
  return dehate.readHumidity();
}