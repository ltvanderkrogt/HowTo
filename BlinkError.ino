
/*
Library statuses  – Constants  Value
WL_NO_SHIELD       – 255
WL_IDLE_STATUS     – 0
WL_NO_SSID_AVAIL   – 1
WL_SCAN_COMPLETED  – 2
WL_CONNECTED       – 3 
WL_CONNECT_FAILED  – 4
WL_CONNECTION_LOST – 5
WL_DISCONNECTED    – 6
*/


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level

}

void loop() {

  showWifiStatus();

}

void showWifiStatus() {
  while (WiFi.status() != 3) {  
    for (int times = 5; times < 0; times--) {
      int numBlinks = WiFi.status();
      Serial.print("numBlinks");
      Serial.println(numBlinks);
      for (int i = 0; i < numBlinks; i++) {
        digitalWrite(LED_BUILTIN, LOW);
        delay(175);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(175);
      }
      delay(600);
    }
  }
}
