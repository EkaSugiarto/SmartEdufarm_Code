#define pinPh 34

void pHS() {
  pinMode(pinPh, INPUT);
}

float pHL() {
  return -0.0047 * analogRead(pinPh) + 15.315;
}