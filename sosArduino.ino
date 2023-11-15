
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

//activates the pin for the left leg and makes it a servo
leftLeg.attach(2,1000,2000);
//the left leg servo to llCenter 
leftLeg.write(llCenter);
//activates the pin for the left foot and makes it a servo
leftFoot.attach(4,1000,2000);
//the left foot servo to llCenter 
leftFoot.write(lfCenter);
//activates the pin for the rigjt leg and makes it a servo
rightLeg.attach(3,1000,2000);
//the right legservo to llCenter 
rightLeg.write(rlCenter);
//activates the pin for the right leg and makes it a servo
rightFoot.attach(5,1000,2000);
//the left foot servo to llCenter 
rightFoot.write(rfCenter);
}


void poseOne(){
  
rightFoot.write(rfCenter + 4);
//move foot to fixed positon
rightLeg.write(rlCenter+ 4);
//move leg to a fixed position
leftFoot.write(lfCenter + 5);
//move left foot to fixed positon
leftLeg.write(lfCenter + 4);
//move left leg to fixed positio

void poseTwo(){
  
rightFoot.write(rfCenter + 6);
//move foot to fixed positon
rightLeg.write(rlCenter+ 3);
//move leg to a fixed position
leftFoot.write(lfCenter + 7);
//move left foot to fixed positon
leftLeg.write(lfCenter + 3);
//move left leg to fixed positio
}







}
void loop () {
//blinkOnce(50);
//make the right/left feet move into position
poseOne();
}
void blinkOnce (int time) {
myServo.write(50);
digitalWrite(13, 1);
delay(time);
digitalWrite(13, 0) ;
myServo.write(70);
delay(time);
}

