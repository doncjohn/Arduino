int buz=4;
void setup() {
}
void loop() {
  tone(buz, 440, 200);
  delay(1000);
  noTone(buz);
}
