int in = 2; 
int out = 13;  
int state = HIGH;  
int r;           
int p = LOW;    
long time = 0;       
long debounce = 200;   
void setup()
{
  pinMode(in, INPUT);
  pinMode(out, OUTPUT);
}
void loop()
{
  r = digitalRead(in);
  if(r==0)
  {
    digitalWrite(out,1);
    delay(1000);
  }
  else
  {
    digitalWrite(out,0);
  }
}


 // r = digitalRead(in);
 // if (r == HIGH && p == LOW && millis() - time > debounce) {
 //   if (state == 0)
 //     state = 1;
 //   else 
 //     state = 0;
 //   time = millis();    
 // }
 // digitalWrite(out, state);
 // p = r;
