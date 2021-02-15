 int a=7,b=8,c=9,d=10;
void setup() {
   pinMode(a, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(c, OUTPUT);
   pinMode(d, OUTPUT);
}

void loop() {
   digitalWrite(a, LOW);
   digitalWrite(c, LOW);
   digitalWrite(b, HIGH);
   digitalWrite(d, HIGH);
   delay(500);
   digitalWrite(b, LOW);
   digitalWrite(d, LOW);
   digitalWrite(a, HIGH);
   digitalWrite(c, HIGH);
   delay(500);
}
