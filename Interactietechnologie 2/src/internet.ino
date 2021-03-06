#include<ESP8266WiFi.h>;
#include<PubSubClient.h>;

const char* ssid = "Kees";
const char* password = "Test1234";

const char* mqttServer = "m24.cloudmqtt.com";
const int mqttPort = 15651;
const char* mqttUser = "hidwrxcw";
const char* mqttPassword = "xXF6Q4Fnpap7";
int ledpin = 0;
WiFiClient networkConnection;
PubSubClient client(networkConnection);

void setup(){
    Serial.begin(9600);
    Serial.println("SETUP");
    pinMode(ledpin,OUTPUT);
    digitalWrite(ledpin,HIGH);
    WiFi.begin(ssid,password);
    while(WiFi.status() != WL_CONNECTED){
        delay(500);
        Serial.println("Connecting WiFI....");
    }
    Serial.println("WiFi connected");
    client.setServer(mqttServer,mqttPort);
    client.setCallback(msgIncomming);
    
    while(!client.connected()){
        client.connect("MQTT_CONNECTION",mqttUser,mqttPassword);
        Serial.println("Connecting MQTT....");
        delay(500);
    }
    Serial.println("MQTT CONNECTED");
    client.publish("CONNECTED", "I JUST MADE A CONNECTION");
    client.subscribe("WATER");
    client.subscribe("1");
    client.subscribe("SENSORS");

}

void msgIncomming(char* topic, byte* payload, unsigned int length){
    Serial.println("MSG RECIEVED:");
    Serial.println(topic);
    if(strcmp(topic,"WATER") == 0){
      //  give water to the plant
      Serial.println( "I need to give water to the plant");
    }
    else if(strcmp(topic,"SENSORS") == 0){ 
     //   send all sensor values straight away
     Serial.println("I need to send sensor data");
     sendTemperature("TESTTEMP");
     sendMoisture("TESTMOIST");
     sendHumidity("TESTHUM");
    }

}

void sendTemperature(char* temp){
    client.publish("TEMP",temp);
}

void sendMoisture(char* moisture){
    client.publish("MOIST",moisture);
}

void sendHumidity(char* hum){
    client.publish("HUM",hum);
}

void loop(){
    client.loop();

}