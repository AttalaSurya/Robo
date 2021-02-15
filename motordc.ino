int motor=5;
 
void setup() {
Serial.begin(9600);
 pinMode(motor, OUTPUT);
   analogWrite(motor, 255);
}
 
void loop() {
}
