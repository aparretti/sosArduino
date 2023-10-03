void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(13, 1);
delay(500);
digitalWrite(13, 0) ;
delay(500);
}
