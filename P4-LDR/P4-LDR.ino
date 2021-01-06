//when light max=1024, min=0
//int led=5;
void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);
//pinMode(led,OUTPUT);
}

void loop() {
int state=analogRead(A0);
Serial.println(state);
//analogWrite(led,state);
}
