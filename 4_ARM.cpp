/*


Write stuff here


*/

#include "Arduino.h"
#include "4_ARM.h"
#include "Servo.h"

Divo::Divo(int num)
{
	switch (num)
	{
		case 1:
		   Servo DivoL1, DivoR1;
		   DivoL1.attach();
		   DivoR1.attach();
		break;
		case 2:
		   Servo DivoL2, DivoR2;
		   DivoL2.attach();
		   DivoR2.attach();
		break;
		case 3:
		   Servo DivoL1, DivoR1;
		   DivoL1.attach();
		   DivoR1.attach();
		break;
		default:
		   //The programmer must have made a mistake
		break;
	}
	
}