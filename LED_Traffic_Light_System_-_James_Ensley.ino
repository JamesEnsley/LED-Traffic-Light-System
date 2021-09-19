
void setup() {
  //sets vertical lights pins as outputs
  pinMode(2,OUTPUT); //red
  pinMode(3,OUTPUT); //yellow
  pinMode(4,OUTPUT); //green
  //sets horizontal lights pins as outputs
  pinMode(5,OUTPUT); //blue
  pinMode(6,OUTPUT); //yellow
  pinMode(7,OUTPUT); //green
}

void loop() {
    digitalWrite(2,LOW);
    digitalWrite(7,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    delay(5000);
    digitalWrite(4,LOW); 
    digitalWrite(5,LOW); 
    digitalWrite(3,HIGH);
    digitalWrite(6,HIGH);
    delay(5000);
    digitalWrite(3,LOW);
    digitalWrite(6,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(7,HIGH);
    delay(5000);  
}
