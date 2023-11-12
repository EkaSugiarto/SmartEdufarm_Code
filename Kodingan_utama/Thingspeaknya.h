#include <WiFi.h>
#include "ThingSpeak.h"

WiFiClient  client;

const char ssid[] = "jangan lupa senyum ", pass[] = "raawrrrr";

unsigned long myChannelNumber = 1;               //Nomor channel di akun Thingspeak
const char* myWriteAPIKey = "9FTW4KIU2OP5O8AE";  //API key dari channel tersebut

//Setup
void TSS() {
  while (WiFi.status() != WL_CONNECTED) {
    WiFi.begin(ssid, pass);
    delay(1000);
  }
  ThingSpeak.begin(client);
}

void TSL() {
  if (WiFi.status() != WL_CONNECTED) setup();

  ThingSpeak.setField(2, DHTT());
  ThingSpeak.setField(3, DHTH());
  ThingSpeak.setField(4, DSL());
  ThingSpeak.setField(5, LevelL());
  ThingSpeak.setField(7, pHL());

  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
}