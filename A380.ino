// nano digital pins
int ledFluegelLinks = 5;
int ledFluegelRechts = 7;
int ledUnten = 9;

// in ms
int delayOn = 60;
int delayOnWait = 30;

void setup() {
  pinMode(ledFluegelLinks, OUTPUT);
  pinMode(ledFluegelRechts, OUTPUT);
  pinMode(ledUnten, OUTPUT);
}

void loop() {
  doFluegel();
  delay(2000);
  doUnten();
  delay(2000);
}

void doFluegel() {
  doLED(ledFluegelLinks, ledFluegelRechts);
  delay(delayOnWait);
  doLED(ledFluegelLinks, ledFluegelRechts);
  delay(delayOnWait);
}

void doUnten() {
  doLED(ledUnten, 0);
  delay(delayOnWait);
  doLED(ledUnten, 0);
  delay(delayOnWait);
}

void doLED(int nPin1, int nPin2) {
  digitalWrite(nPin1, HIGH);
  if (nPin2 > 0) {
    digitalWrite(nPin2, HIGH);
  }
  delay(delayOn);
  digitalWrite(nPin1, LOW);
  if (nPin2 > 0) {
    digitalWrite(nPin2, LOW);
  }
}
