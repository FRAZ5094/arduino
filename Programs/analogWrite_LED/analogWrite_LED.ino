int LED_Pin=9;
int del=25;
float x=5;
void setup() {
  // put your setup code here, to run once:
pinMode(LED_Pin,OUTPUT);
Serial.begin(9600);
}

float Volt_to_Bin(float Voltage){
    float Binary;
    Binary=Voltage*(255/5);
    return Binary;
  }
  
void loop() {
  // put your main code here, to run repeatedly:
  x=5;
 for (float Volt=0;Volt>-1;Volt+=x){
  analogWrite(LED_Pin,Volt);
  Serial.print(Volt);
  Serial.print(" ");
  Serial.println(x);
  if (Volt==255){
    x*=-1;
  }
  delay(del);
 }
}
