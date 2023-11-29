
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
  
rightFoot.write(rfCenter );
//move foot to fixed positon
rightLeg.write(rlCenter);
//move leg to a fixed position
leftFoot.write(lfCenter );
//move left foot to fixed positon
leftLeg.write(lfCenter );
//move left leg to fixed positio
}


void poseTwo(){
  
rightFoot.write(rfCenter +50);
//move foot to fixed positon
rightLeg.write(rlCenter +50);
//move leg to a fixed position
leftFoot.write(lfCenter + 76);
//move left foot to fixed positon
leftLeg.write(lfCenter );
//move left leg to fixed position
}

//void poseThree(){


//rightFoot.write(rfCenter  );
//move foot to fixed positon
//rightLeg.write(rlCenter );
//move leg to a fixed position
//leftFoot.write(lfCenter + 25);
//move left foot to fixed positon
//leftLeg.write(lfCenter + 2);
//move left leg to fixed position



//}







void loop () {
//blinkOnce(50);
//make the right/left feet move into position
poseOne();
delay(450);
poseTwo();
delay(450);

}





void blinkOnce (int time) {
myServo.write(50);
digitalWrite(13, 1);
delay(439);
digitalWrite(13, 0) ;
myServo.write(70);
delay(464);
}

