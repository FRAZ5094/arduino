int LED_Pin=9;
int readPin=A3;
int potVal;
int wait=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_Pin,OUTPUT);
pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 potVal=analogRead(readPin);
 Serial.println(potVal);
 delay(wait);
 while (potVal>1000){
  digitalWrite(LED_Pin,HIGH);
  potVal=analogRead(readPin);
  Serial.println(potVal);
  delay(wait);
 }
 digitalWrite(LED_Pin,LOW);
}
