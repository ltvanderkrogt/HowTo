

String QtextQ = "help";
void setup() {

  Serial.begin(115200);
  // put your setup code here, to run once:

  String quote = "\"";
//  String quote = "Q";

  QtextQ = String(quote + QtextQ + quote);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("QtextQ ");
  Serial.println(QtextQ);

}
