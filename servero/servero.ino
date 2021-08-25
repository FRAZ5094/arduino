#include <Servo.h>

Servo myservo;

int val=0;
String command;

void setup(){
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(0);
  Serial.println("start");
}

void loop(){
  while (Serial.available()==0){
    
  }
  command=String(Serial.readString());
  command=command[0];
  if (command=="+" && val<180){
    val+=10;
  } else if (command=="-" && val>0){
    val-=10;
  };
  myservo.write(val);
  Serial.println(val);
}
