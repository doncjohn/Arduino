//button pin to one leg and ground by 10 khom
//to opposite leg and remaing 1 le to 3.3v
int button=4;
int led=5;
int state=0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  state=digitalRead(button);
  if (state == HIGH) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
}
