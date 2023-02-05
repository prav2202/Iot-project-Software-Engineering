int getSoilMoisture(){


  sensorValue = analogRead (analogInPin);
  int percentValue = map(sensorValue,3000,0,0,100);

  if(sensorValue < 1800){

    Serial.print("The sensor reading is ");
    Serial.println(sensorValue);
    Serial.print("The soil is wet at ");
    Serial.print(percentValue);
    Serial.println("%");
  }
  
  else{

    Serial.print("The sensor reading is ");
    Serial.println(sensorValue);
    Serial.print("The soil is dry at ");
    Serial.print(percentValue);
    Serial.println("%");

  }
  delay(1000);
  //char myPercent[] = String (percentValue);
  //Serial.println("MyPercent = " + myPercent);
  return percentValue;
}

void MOISsendDataToSheet(void)
{
  HTTPClient http;

  http.begin(HOST_NAME + PATH_NAME + queryString + String((int)Moisture) + queryString2 +"1"); //HTTP
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