#include <ESP8266WiFi.h>

const char *ssid = "Ritesh";
const char *pass = "ritesh@123";
void setup() {
  Serial.begin(9600);
  delay(10);

  Serial.println("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);
  while(WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");   
  }
  Serial.println("");
  Serial.println("Wifi Connected");
}

void loop() {
  // put your main code here, to run repeatedly:

}
