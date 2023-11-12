const int pinTr = 26;
const int pinEc = 27;

void LevelS() {
  pinMode(pinTr, OUTPUT);
  pinMode(pinEc, INPUT);
}

float LevelL() {
  digitalWrite(pinTr, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTr, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTr, LOW);

  long t = pulseIn(pinEc, HIGH);
  return t * 0.034 / 2;
}