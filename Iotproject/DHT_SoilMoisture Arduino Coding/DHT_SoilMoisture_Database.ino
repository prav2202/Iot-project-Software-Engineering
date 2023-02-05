
#include <WiFi.h>
#include <HTTPClient.h>
#include <Wire.h>
#include <DHT.h>
#define DHTPIN 26     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE);

const char WIFI_SSID[] = "hello";
const char WIFI_PASSWORD[] = "uwais123";

//char myPercent[] = "";
String HOST_NAME = "http://192.168.43.93"; // change to your PC's IP address
String PATH_NAME   = "/Value.php";
String queryString = "?Value1=";
String queryString2 = "&ID=";
int Moisture;
float Humid;
float Temp;
const int analogInPin = 36;
int sensorValue = 0;

void setup() {
  Serial.begin(9600); 
  dht.begin(); //DHT
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
  
}


void loop() {
  Moisture = getSoilMoisture();
  //String myPercent[] = String (percentValue);
  MOISsendDataToSheet();
  //Serial.println(HOST_NAME + PATH_NAME + queryString + String((int)Moisture) + queryString2);
  //Serial.println("MyPercentINT = " + percentValue);
  //Serial.println("MyPercentSTR = " + String((int)Moisture));
  Humid = getHumidity();
  HUMIsendDataToSheet();
  Temp = getTemperature();
  TEMPsendDataToSheet();
}

