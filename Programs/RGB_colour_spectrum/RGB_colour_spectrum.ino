int RGB_Red=6;
int RGB_Green=5;
int RGB_Blue=3;
int delayTime=25;
int red;
int green;
int blue;
int gap=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(RGB_Red,OUTPUT);
pinMode(RGB_Green,OUTPUT);
pinMode(RGB_Blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RGB_Green,LOW);
digitalWrite(RGB_Red,HIGH);
digitalWrite(RGB_Blue,HIGH);
for (int intensity=255;intensity>=0;intensity-=5){
  analogWrite(RGB_Red,intensity);
  Serial.print(intensity);
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.println(255);
  delay(delayTime);
  
}
for (int intensity=0;intensity<=255;intensity+=5){
  analogWrite(RGB_Green,intensity);
  Serial.print(0);
  Serial.print(" ");
  Serial.print(intensity);
  Serial.print(" ");
  Serial.println(255);
  delay(delayTime);
}
for (int intensity=255;intensity>=0;intensity-=5){
  analogWrite(RGB_Blue,intensity);
  Serial.print(0);
  Serial.print(" ");
  Serial.print(255);
  Serial.print(" ");
  Serial.println(intensity);
  delay(delayTime);
}
for (int intensity=0;intensity<=255;intensity+=5){
  analogWrite(RGB_Red,intensity);
  Serial.print(intensity);
  Serial.print(" ");
  Serial.print(255);
  Serial.print(" ");
  Serial.println(0);
  delay(delayTime);
}
for (int intensity=255;intensity>=0;intensity-=5){
  analogWrite(RGB_Green,intensity);
  Serial.print(255);
  Serial.print(" ");
  Serial.print(intensity);
  Serial.print(" ");
  Serial.println(0);
  delay(delayTime);
}
delay(gap);
}
