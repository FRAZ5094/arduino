  int myPins[] = {2, 3, 4, 5};
int Freq=1;
void setup() {
   for (int i=0;i < (sizeof(myPins) / sizeof(myPins[0]));i++){
     pinMode(myPins[i],OUTPUT);
    }
  Serial.begin(9600);

}

void loop() {

  if (Serial.available() > 0) {
    Freq = Serial.parseInt();
    Serial.print("Freq set to: ");
    Serial.println(Freq);
  }
  float T=(1.0/Freq)*1000.0;
  for (int i=0;i < (sizeof(myPins) / sizeof(myPins[0]));i++){
    digitalWrite(myPins[i],HIGH);
    //Serial.print(i);
    }
  delay(T);
  for (int i=0;i < (sizeof(myPins) / sizeof(myPins[0]));i++){
    digitalWrite(myPins[i],LOW);
    }
  delay(T);

  //Serial.println(T);
  Serial.print(Freq);
  Serial.print(" ");
  Serial.println("FPS");
}
