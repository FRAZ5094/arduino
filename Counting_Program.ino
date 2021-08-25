int cnt=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
cnt=cnt+1;
Serial.print(cnt);
Serial.println(" seconds has passed");
delay(1000);
}
