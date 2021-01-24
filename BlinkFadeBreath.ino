// const int LED_BUILTIN = 2; // if not use LED_BUILTIN

void setup() {
  
}

void loop() {
  // increase the LED brightness
  for(int pulsWidth = 0; pulsWidth < 1023; pulsWidth++){   
    analogWrite(LED_BUILTIN, pulsWidth);
    delay(2);
  }
  // decrease the LED brightness
  for(int pulsWidth = 1023; pulsWidth > 0; pulsWidth--){
    analogWrite(LED_BUILTIN, pulsWidth);
    delay(2);
  }
}
















/*

#define BUILTIN_LED 2
void setup() {
pinMode(BUILTIN_LED,OUTPUT);
}
void loop(){
fadeOn(2000,5);
fadeOff(2000,5);
}
void fadeOn(unsigned int time,int increament){
for (byte value = 0 ; value < 255; value+=increament){
analogWrite(BUILTIN_LED, value);
delay(time/(255/5));
}
}
void fadeOff(unsigned int time,int decreament){
for (byte value = 255; value >0; value-=decreament){
analogWrite(BUILTIN_LED, value);
delay(time/(255/5));
}
}
*/
