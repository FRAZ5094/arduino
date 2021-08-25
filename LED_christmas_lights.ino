int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int time=500;
void setup() {
  // put your setup code here, to run once:
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
}

void loop() {
//  while (1){
    
//  }
  // put your main code here, to run repeatedly:
digitalWrite(pin3,LOW);
digitalWrite(pin5,LOW);
digitalWrite(pin2,HIGH);
digitalWrite(pin4,HIGH);
delay(time);
digitalWrite(pin2,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin5,HIGH);
delay(time);
}
