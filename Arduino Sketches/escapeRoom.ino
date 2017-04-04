int read1 = 7;
int read2 = 8;
int read3 = 9;
int read4 = 10;
int read5 = 11;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:

  pinMode(read1, INPUT);
  pinMode(read2, INPUT);
  pinMode(read3, INPUT);
  pinMode(read4, INPUT);
  pinMode(read5, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int switch1 = digitalRead(read1);
  int switch2 = digitalRead(read2);
  int switch3 = digitalRead(read3);
  int switch4 = digitalRead(read4);
  int switch5 = digitalRead(read5);
  
  if (switch2 == HIGH && switch3 == LOW && switch4 == HIGH && switch5 == HIGH){
     // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
  
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
