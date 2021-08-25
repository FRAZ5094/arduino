int RED_LED=2;
int GREEN_LED=3;
int YELLOW_LED=4;
int BLUE_LED=5;
String LED_COLOUR;
String msg="What colour of LED would you like to light up?";
String msg2=" LED has been lit up";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(RED_LED,OUTPUT);
pinMode(GREEN_LED,OUTPUT);
pinMode(YELLOW_LED,OUTPUT);
pinMode(BLUE_LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  
}
LED_COLOUR=Serial.readString();
if (LED_COLOUR=="red"){
  digitalWrite(RED_LED,HIGH);
  Serial.print("The ");
  Serial.print(LED_COLOUR);
  Serial.println(msg2);
}
else if (LED_COLOUR=="green"){
  digitalWrite(GREEN_LED,HIGH);
  Serial.print("The ");
  Serial.print(LED_COLOUR); 
  Serial.println(msg2);
}
else if (LED_COLOUR=="yellow"){
  digitalWrite(YELLOW_LED,HIGH);
  Serial.print("The ");
  Serial.print(LED_COLOUR);
  Serial.println(msg2); 
}
else if (LED_COLOUR=="blue"){
  digitalWrite(BLUE_LED,HIGH);
  Serial.print("The ");
  Serial.print(LED_COLOUR);
  Serial.println(msg2); 
}
else if (LED_COLOUR=="on"){
  digitalWrite(RED_LED,HIGH);
  digitalWrite(GREEN_LED,HIGH);
  digitalWrite(YELLOW_LED,HIGH);
  digitalWrite(BLUE_LED,HIGH);
  Serial.println("All the LED's have been turned on"); 
}  
else if (LED_COLOUR=="off"){
  digitalWrite(RED_LED,LOW);
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(BLUE_LED,LOW);
  Serial.println("All the LED's have been turned off");     
}
else{
Serial.println("That is not a valid colour of LED");
}
}
