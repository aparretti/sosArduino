void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILITIN, OUTPUT);
}


Void loop () {
blinkOnce(1000);

void blinkOnce (int time) {
digitalWrite(13, 1);
delay(time);
digitalWrite(13, 0) ;
delay(time);
digitalWrite(13, 0) ;
delay(time);

digitalWrite(13, 1);
delay(500);
digitalWrite(13, 0) ;
delay(500);
digitalWrite(13, 0) ;
delay(500);



digitalWrite(13, 1);
delay(time);
digitalWrite(13, 0) ;
delay(time);
digitalWrite(13, 0) ;
delay(time);
}

}