/*
// https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html
// https://arduino-esp8266.readthedocs.io/en/3.0.2/esp8266wifi/station-class.html#hostname
*/
#include <WiFi.h>  // ESP32
// #include <ESP8266WiFi.h> //ESP8266

String the_path = __FILE__;
int slash_loc = the_path.lastIndexOf('/');
String the_cpp_name = the_path.substring(slash_loc + 1);
int dot_loc = the_cpp_name.lastIndexOf('.');
String the_sketchname = the_cpp_name.substring(0, dot_loc);
String Date = __DATE__;
String Time = __TIME__;

const char* ssid = "ssid";
const char* password = "password";
const char* HostName = "MyHostName";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.setHostname(HostName); //https://arduino-esp8266.readthedocs.io/en/3.0.2/esp8266wifi/station-class.html#hostname
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());
    Serial.print("ESP32 HostName: ");
    Serial.println(WiFi.getHostname());
  }
  Serial.print("the_path: ");
  Serial.println(the_path);
  Serial.print("the_sketchname: ");
  Serial.println(the_sketchname);
  Serial.print("Date: ");
  Serial.println(Date);
  Serial.print("Time: ");
  Serial.println(Time);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
