void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12,LOW);    // turn the LED off by making the voltage LOW
 

  digitalWrite(11,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(11,LOW);    // turn the LED off by making the voltage LOW
   

  digitalWrite(10,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(10,LOW);    // turn the LED off by making the voltage LOW
    

  digitalWrite(5,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(5,LOW);    // turn the LED off by making the voltage LOW
   

  digitalWrite(6,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(6,LOW);    // turn the LED off by making the voltage LOW
   

  digitalWrite(7,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(7,LOW);    // turn the LED off by making the voltage LOW
   
}
