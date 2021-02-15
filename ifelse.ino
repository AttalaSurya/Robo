int a=7,b=8;
int ran;
void setup() {
   pinMode(a, OUTPUT);
   pinMode(b, OUTPUT);
}

void loop() { 
  ran=random(0,2);
  if(ran==0){
     digitalWrite(b, LOW); 
     digitalWrite(a, HIGH);
     delay(200); 
  }
  else{
     digitalWrite(a, LOW); 
     digitalWrite(b, HIGH);
     delay(200);
  }
}
