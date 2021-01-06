//  1:OBSTACLE;  0:NO_OBSTACLE
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
  if(state==1){
    digitalWrite(led,HIGH);
  } else{
    digitalWrite(led,LOW);
  }
}
