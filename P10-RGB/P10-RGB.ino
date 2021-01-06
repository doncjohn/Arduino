int red=16;
int green=5;
int blue=4;

void setup() {
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
set(255, 0, 0); // Red Color
delay(1000);
set(0, 255, 0); // Green Color
delay(1000);
set(0, 0, 255); // Blue Color
delay(1000);
}

void set(int r, int g, int b) {
analogWrite(red,r);
analogWrite(green,g);
analogWrite(blue,b);
}
