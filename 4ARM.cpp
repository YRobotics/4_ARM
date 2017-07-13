/*


Write stuff here


*/

#include "Arduino.h"
#include "4ARM.h"
#include "Servo.h"

Divo::Divo(int num)
{
	switch (num)
	{
		case 1:
		   Servo DivoL1, DivoR1;
		   DivoL1.attach(D_L1);
		   DivoR1.attach(D_R1);
		break;
		case 2:
		   Servo DivoL2, DivoR2;
		   DivoL2.attach(D_L2);
		   DivoR2.attach(D_R2);
		break;
		case 3:
		   Servo DivoL1, DivoR1;
		   DivoL1.attach(D_L3);
		   DivoR1.attach(D_R3);
		break;
		default:
		   //The programmer must have made a 
		   error();
		break;
	}
	
}
void Divo::test()
{
	/* blink lights and stuff to show the user that the 
	library was successfully installed and can thus run this test programmer
	
	NOTE: user need not to initalize a divo class inorder to use this function
	*/
	for(int p=0; p<3; p++){
   pulse(11,2);
   pulse(10,2);
   pulse(9,2);
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
}
	
void errot()
{
	digitalWrite(LED_R,1);
	digitalWrite(LED_G,0);
	digitalWrite(LED_B,0);
	delay(5000);
	digitalWrite(LED_R,0);
	
}