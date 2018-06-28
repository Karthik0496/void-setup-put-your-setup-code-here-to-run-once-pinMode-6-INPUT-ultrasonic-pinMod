void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(6,HIGH);//green RFD1
digitalWrite(9,HIGH);
digitalWrite(7,LOW);//red RFD2
digitalWrite(10,LOW);
delay(5000);
digitalWrite(7,HIGH);//red RFD2
digitalWrite(10,HIGH);
digitalWrite(6,LOW);//green RFD1
digitalWrite(9,LOW);
delay(5000);
}
