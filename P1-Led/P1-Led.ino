//Blink an LED
int t=250;
int pin=5;

void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
  digitalWrite(pin,HIGH);
  delay(t);
  digitalWrite(pin,LOW);
  delay(t);
}
