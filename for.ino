 int a=7,b=8,c=9,d=10;
void setup() {
   pinMode(a, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(c, OUTPUT);
   pinMode(d, OUTPUT);
}

void loop() {
  for(int i=1; i<=2; i++){
   digitalWrite(b, HIGH);
   digitalWrite(d, HIGH);
   delay(500);
   digitalWrite(b, LOW);
   digitalWrite(d, LOW);
   delay(500);
  }
  for(int i=1; i<=2; i++){
   digitalWrite(a, HIGH);
   digitalWrite(c, HIGH);
   delay(500);
   digitalWrite(a, LOW);
   digitalWrite(c, LOW);
   delay(500);
  }
}
