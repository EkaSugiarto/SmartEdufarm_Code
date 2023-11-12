#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C sibocil(0x27, 20, 4);

void LCDS() {
  sibocil.begin(20, 4);
  sibocil.init();
  sibocil.backlight();

  sibocil.clear();
  sibocil.setCursor(3, 1);
  sibocil.print("PKM-PM PENTANA");
  sibocil.setCursor(4, 2);
  sibocil.print("SmartEdufarm");

  delay(1000);
}

void LCDL1() {
  sibocil.clear();
  sibocil.setCursor(0, 0);
  sibocil.print("Suhu U = " + String(DHTT()) + " C");

  sibocil.setCursor(0, 1);
  sibocil.print("Klmbpn = " + String(DHTH()) + "%");

  sibocil.setCursor(0, 2);
  sibocil.print("Suhu A = " + String(DSL()) + " C");

  sibocil.setCursor(0, 3);
  sibocil.print("pH     = " + String(pHL()));
}

void LCDL2() {
  sibocil.clear();
  sibocil.setCursor(0, 0);
  sibocil.print("Tgi Air = " + String(LevelL()) + " cm");
}