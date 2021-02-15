int a=7,b=8,c=9;
void setup() {
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
}

void loop() { 
function(a,200);
function(b,200);
function(c,200);
}

void function(int tal, int lama) {
  digitalWrite(tal, HIGH);
  delay(lama);
  digitalWrite(tal, LOW);
  delay(lama/2);
}
