  int myPins[] = {2, 3, 4, 5};
int Freq=1;
int r=1;
void setup() {
   for (int i=0;i < (sizeof(myPins) / sizeof(myPins[0]));i++){
     pinMode(myPins[i],OUTPUT);
    }
  Serial.begin(9600);

}

void loop() {



  for (int i=0;i < (sizeof(myPins) / sizeof(myPins[0]));i=i+r){
     if (Serial.available() > 0) {
      Freq = Serial.parseInt();
      Serial.print("Freq set to: ");
      Serial.println(Freq);
      
    }
    float T=(1.0/Freq)*1000.0;
    digitalWrite(myPins[i],HIGH);
    delay(T);
    digitalWrite(myPins[i],LOW);
    if (i==3){
      r=-1;
    }
    if (i==0 && r==-1){
      r=1;
    }
    //Serial.print(i);
    }

  
  //Serial.println(T);
  Serial.print(Freq);
  Serial.print(" ");
  Serial.println("FPS");
}
