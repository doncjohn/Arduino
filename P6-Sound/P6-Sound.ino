//0:sound;1:NOsound
int sensor=4;
int led=5;

void setup()
{
  pinMode(sensor, INPUT); 
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int state =digitalRead(sensor);
  Serial.println(state);
  if(state==0){
    digitalWrite(led,HIGH);
  } else{
    digitalWrite(led,LOW);
  }
}
