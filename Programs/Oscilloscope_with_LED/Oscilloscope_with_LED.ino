int readPin=A3;
int LED_Pin=9;
int readVal;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
pinMode(LED_Pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(LED_Pin,255);
 Serial.println(analogRead(readPin)*(5./1023.)) ;
 delay(50);

}
