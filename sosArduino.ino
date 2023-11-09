
#include <Servo.h>


Servo myServo;

Servo leftLeg;
Servo leftFoot;
Servo rightLeg;
Servo rightFoot;

int llCenter = 92;
int lfCenter = 95;
int rlCenter = 90;
int rfCenter = 94;

void setup() {


leftLeg.attach(2,1000,2000);
leftLeg.write(llCenter);
leftFoot.attach(4,1000,2000);
leftFoot.write(lfCenter);
rightLeg.attach(3,1000,2000);
rightLeg.write(rlCenter);
rightFoot.attach(5,1000,2000);
rightFoot.write(rfCenter);
}

void takeStep(){
leftLeg.write(llCenter+15);
leftFoot.write(lfCenter+15);
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

