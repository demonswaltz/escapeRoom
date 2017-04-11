int read0 = 6;
int read1 = 7;
int read2 = 8;
int read3 = 9;
int read4 = 10;
int read5 = 11;
int ledPin = 12;
int led0 = 0;
int led1 = 1;
int led2 = 2;
int led3 = 3; 
int led4 = 4;
int led5 = 5;
int switchState=false; 
void setup() {
  // put your setup code here, to run once:

  pinMode(read0, INPUT);
  pinMode(read1, INPUT);
  pinMode(read2, INPUT);
  pinMode(read3, INPUT);
  pinMode(read4, INPUT);
  pinMode(read5, INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  
  int switch0 = digitalRead(read0);
  int switch1 = digitalRead(read1);
  int switch2 = digitalRead(read2);
  int switch3 = digitalRead(read3);
  int switch4 = digitalRead(read4);
  int switch5 = digitalRead(read5);


    if (switch0 == HIGH){
    digitalWrite(led0, HIGH); 
   
  }
  else{
    digitalWrite(led0, LOW);
   
  }
   if (switch1 == HIGH){
    digitalWrite(led1, HIGH);
  
  } else{
    digitalWrite(led1, LOW);
  }
   if (switch2 == HIGH){
    digitalWrite(led2, HIGH);
    
  } else{
    digitalWrite(led2, LOW);
  }
   if (switch3 == HIGH){
    digitalWrite(led3, HIGH);
     
  }
   else{
    digitalWrite(led3, LOW);
  }
   if (switch4 == HIGH){
    digitalWrite(led4, HIGH);
   
  }
   else{
    digitalWrite(led4, LOW);
  }
   if (switch5 == HIGH){
    digitalWrite(led5, HIGH);
    
  }
   else{
    digitalWrite(led5, LOW);
  }
  if(switch0==LOW && switch1==LOW && switch2==LOW && switch3==HIGH && switch4==LOW && switch5==HIGH){
    digitalWrite(led3,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led0, HIGH);
    delay(75);
    digitalWrite(led0,LOW);
    delay(75);
    digitalWrite(led1, HIGH);
    delay(75);
    digitalWrite(led1,LOW);
    delay(75);
    digitalWrite(led2, HIGH);
    delay(75);
    digitalWrite(led2,LOW);
    delay(75);
    digitalWrite(led3, HIGH);
    delay(75);
    digitalWrite(led3,LOW);
    delay(75);
    digitalWrite(led4, HIGH);
    delay(75);
    digitalWrite(led4,LOW);
    delay(75);
    digitalWrite(led5, HIGH);
    delay(75);
    digitalWrite(led5,LOW);
    delay(75);
    digitalWrite(ledPin,HIGH); } 
else{
  digitalWrite(ledPin, LOW);}
  }
 


