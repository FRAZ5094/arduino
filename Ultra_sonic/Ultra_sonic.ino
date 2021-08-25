#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);

int trigPin=3;
int echoPin=2;
long duration;
long distance;
long lastDistance;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  lcd.print(distance);
  lcd.print("cm");
  delay(40);
  lcd.clear();
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2.0;
  
  Serial.println(distance);
 
  
}
