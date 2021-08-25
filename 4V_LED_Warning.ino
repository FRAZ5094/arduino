int readPin=A2;
int LED_Pin=9;
int readVal;
float V2;
int wait=50;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_Pin,OUTPUT);
pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 readVal=analogRead(readPin);
 V2=(5./1023.)*readVal;
 Serial.print("Potentiometer voltage is ");
 Serial.println(V2);
 if (V2>=4.0){
  digitalWrite(LED_Pin,HIGH);
 }
 else{
  digitalWrite(LED_Pin,LOW);
 }
 delay(wait);
}
