#include <OneWire.h>
#include <DallasTemperature.h>

const int pinDS = 13;

OneWire alaala(pinDS);
DallasTemperature ajojing(&alaala);

void DSS() {
  ajojing.begin();
}

float DSL() {
  ajojing.requestTemperatures();
  return ajojing.getTempCByIndex(0);
}