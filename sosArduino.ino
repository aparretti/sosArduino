
#include <Servo.h>


Servo myServo;
void setup() {

myServo.attach(11);
myServo.write(90);

pinMode(13, OUTPUT);
}

void loop () {
blinkOnce(100);

}
void blinkOnce (int time) {
digitalWrite(13, 1);
delay(time);
digitalWrite(13, 0) ;
delay(time);
}

