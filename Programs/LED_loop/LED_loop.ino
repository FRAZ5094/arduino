int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int time=100;
void setup() {
  // put your setup code here, to run once:
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=pin2; i<=pin5;i++){
  digitalWrite(i,HIGH);
  delay(time);
  digitalWrite(i,LOW);
}

}
