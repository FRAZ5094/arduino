int LED_Pin=9;
int readPin=A3;
float Voltage;
float LED_Voltage;
int wait=15;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_Pin,OUTPUT);
pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Voltage=analogRead(readPin)*(5./1023.);
Serial.println(Voltage);
LED_Voltage=Voltage*(255./5.);
analogWrite(LED_Pin,LED_Voltage);
delay(wait);
}
