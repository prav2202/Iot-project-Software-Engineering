
float hum;  //Stores humidity value
float temp; //Stores temperature value

 /* hum = dht.readHumidity();
  temp= dht.readTemperature();
  if (isnan(hum) || isnan(temp) ) {
    Serial.println("Failed to read from DHT sensor!");
  }
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(temp);
  Serial.println(" Celsius"); */

float getHumidity()
{
    hum = dht.readHumidity();
    Serial.print("Humidity: ");
    Serial.print(hum);
  return hum;
}

void HUMIsendDataToSheet(void)
{
  HTTPClient http;

  http.begin(HOST_NAME + PATH_NAME + queryString + String((float)Humid) + queryString2 + "2"); //HTTP
  int httpCode = http.GET();

  // httpCode will be negative on error
  if(httpCode > 0) {
    // file found at server
    if(httpCode == HTTP_CODE_OK) {
      String payload = http.getString();
      Serial.println(payload);
    } else {
      // HTTP header has been send and Server response header has been handled
      Serial.printf("[HTTP] GET... code: %d\n", httpCode);
    }
  } else {
    Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
  }

  http.end();
}

float getTemperature()
{
  temp= dht.readTemperature();
  Serial.print(temp);
  Serial.println(" Celsius");
  return temp;
}

void TEMPsendDataToSheet(void)
{
  HTTPClient http;

  http.begin(HOST_NAME + PATH_NAME + queryString + String((float)Temp) + queryString2 + "2"); //HTTP
  int httpCode = http.GET();

  // httpCode will be negative on error
  if(httpCode > 0) {
    // file found at server
    if(httpCode == HTTP_CODE_OK) {
      String payload = http.getString();
      Serial.println(payload);
    } else {
      // HTTP header has been send and Server response header has been handled
      Serial.printf("[HTTP] GET... code: %d\n", httpCode);
    }
  } else {
    Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
  }

  http.end();
}