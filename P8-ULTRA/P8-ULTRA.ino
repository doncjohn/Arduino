int trigPin=5;
int echoPin=4;
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin, LOW); // Clears the trigPin
delayMicroseconds(2); // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
distance= duration*0.034/2; // Calculating the distance
Serial.print("Distance: ");
Serial.println(distance);
}
