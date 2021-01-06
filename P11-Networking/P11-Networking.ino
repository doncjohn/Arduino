#include<ESP8266WiFi.h>
#include<String.h>
WiFiServer MRBEAN(80);
void setup() {
pinMode(12,OUTPUT);
WiFi.mode(WIFI_AP);//to make an acyive point
WiFi.softAP("DORA","theexplorer");
Serial.begin(9600);
Serial.println( WiFi.softAPIP() );
MRBEAN.begin();
}

void loop() 
   {
    WiFiClient buji; 
    while((buji=MRBEAN.available())==0);
    {
     Serial.println("connected");
     Serial.println( buji.remoteIP() );
    }
    while(buji.connected()==1 && buji.available()==0) 
     {
      delay(1);
     }
    buji.println();
    String request=buji.readStringUntil('\r') ;
    delay(1);
    if(request.indexOf("ledon") !=-1 )
     {  
      Serial.println("led on");
      digitalWrite(12,HIGH);  
     }
    else if(request.indexOf("ledoff") !=-1 )
     {  
     Serial.println("led off");
     digitalWrite(12,LOW);  
     }
}
