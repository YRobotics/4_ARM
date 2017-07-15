/*


Write stuff here


*/

#include "Arduino.h"
#include "FOUR-ARM.h"
#include "Servo.h"

Servo DivoL1 ,DivoR1
     ,DivoL2 ,DivoR2
     ,DivoL3 ,DivoR3;

Divo::Divo(int num)
{
	num_ = num;
	switch (num)
	{
		case 1:
        
		   DivoL1.attach(D_L1);
		   DivoR1.attach(D_R1);
		   
		break;
		case 2:
		   
		   DivoL2.attach(D_L2);
		   DivoR2.attach(D_R2);
		   
		break;
		case 3:
		   
		   DivoL1.attach(D_L3);
		   DivoR1.attach(D_R3);
		   
		break;
		default:
		   //The programmer must have made a mistake 
		   flexError();
		break;
	}
	
}

void flexTest()
{
	/* blink lights and stuff to show the user that the 
	library was successfully installed and can thus run this test programmer
	
	NOTE: user need not to initalize a divo class inorder to use this function
	*/
	for(int p=0; p<3; p++){
   pulse(11,1);
   pulse(10,1);
   pulse(9,1);
   delay(0);
  }
delay(0);
digitalWrite(9,1);
digitalWrite(10,1);
digitalWrite(11,1);
delay(1000);
digitalWrite(9,0);
digitalWrite(10,0);
digitalWrite(11,0);
delay(1000);
return;
}

void pulse(int pin,int pause){
  for(int i=0; i<256; i++)
  {
     analogWrite(pin,i);
     delay(pause);
  }
  for(int i = 255; i>0; i--)
  {
      analogWrite(pin,i);
      delay(pause);
  }   
  digitalWrite(pin,0);
  return;
 }
	
void flexError()
{
	digitalWrite(LED_R,1);
	digitalWrite(LED_G,0);
	digitalWrite(LED_B,0);
	delay(5000);
	digitalWrite(LED_R,0);
	
	return;
}

bool buttonState()
{
	// Return a value that makes reasonable sense 1 == on, 0 == off
	return (bool(-1*digitalRead(SW_STATE)+1));
}
	
	
	
