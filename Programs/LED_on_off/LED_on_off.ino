int time=500;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(time);
digitalWrite(13,HIGH);
delay(time);
digitalWrite(13,LOW);
}
