int LED_Pin=12;
int numBlinks;
int blinkTime=150;
String msg="How many blinks do you want:";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_Pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(msg);
 while (Serial.available()==0){  //Waits for user to enter something into the serial monitor
  
 }
 numBlinks=Serial.parseInt();
 for (int i=1;i<=numBlinks;i+=1){
  digitalWrite(LED_Pin,HIGH);
  delay(blinkTime);
  digitalWrite(LED_Pin,LOW);
  delay(blinkTime);
 }
}
