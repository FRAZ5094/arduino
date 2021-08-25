int RGB_Red=4;
int RGB_Green=3;
int RGB_Blue=2;
int delayTime=500;
void setup() {
  // put your setup code here, to run once:
pinMode(RGB_Red,OUTPUT);
pinMode(RGB_Green,OUTPUT);
pinMode(RGB_Blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RGB_Red,HIGH);
delay(delayTime);
digitalWrite(RGB_Red,LOW);
digitalWrite(RGB_Green,HIGH);
delay(delayTime);
digitalWrite(RGB_Green,LOW);
digitalWrite(RGB_Blue,HIGH);
delay(delayTime);
digitalWrite(RGB_Blue,LOW);
}
