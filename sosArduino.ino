
#include <Servo.h>


Servo myServo;

Servo leftLeg;
Servo leftFoot;
Servo rightLeg;
Servo rightFoot;


void setup() {


leftLeg.attach(2,1000,2000);
leftLeg.write(92);
leftFoot.attach(4,1000,2000);
leftFoot.write(90);
rightLeg.attach(3,1000,2000);
rightLeg.write(90);
rightFoot.attach(5,1000,2000);
rightFoot.write(90);













myServo.attach(11);
myServo.write(90);

pinMode(13, OUTPUT);
}

void loop () {
blinkOnce(50);

}
void blinkOnce (int time) {
myServo.write(50);
digitalWrite(13, 1);
delay(time);
digitalWrite(13, 0) ;
myServo.write(70);
delay(time);
}

