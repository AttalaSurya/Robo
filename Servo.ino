#include <Servo.h>
int pinservo=6;
Servo aservo; 

void setup() {
Serial.begin(9600);
aservo.attach(pinservo);
}
 
void loop() {
  aservo.write(0);
  delay(500);
  aservo.write(90);
  delay(500);
  aservo.write(180);
  delay(500);
}
