/*


Write stuff here


*/

#include "Arduino.h"
#include "FOUR-ARM.h"
#include "Servo.h"



Servo DivoL1 ,DivoR1
     ,DivoL2 ,DivoR2
     ,DivoL3 ,DivoR3
	 ,aux;

Divo::Divo(int num)
{
	num_ = num;
	switch (num)
	{
		case 1:
        
		   
		   Serial.println("DIVO1 Successfully attached");
		   
		break;
		case 2:
		   
		   
		   Serial.println("DIVO2 Successfully attached");
		   
		break;
		case 3:
		   
		   
		   Serial.println("DIVO3 Successfully attached");
		   
		break;
		default:
		   //The programmer must have made a mistake 
		   flexError();
		break;
	}
	
}
void Divo::haptic(char port)
{
	if(port == 'A' || port == 'a')
	{
		
	update(map(analogRead(0),0,1023,-100,100),
                map(analogRead(1),0,1023,-100,100));	
	Serial.println("Haptic port A active");	
	return;
	
	}
	if(port == 'B' || port == 'b')
	{
		
	update(map(analogRead(2),0,1023,-100,100),
                map(analogRead(3),0,1023,-100,100));	
	Serial.println("Haptic port B active");	
	return;
	
	}
	else {
		
		flexError();
		// there are only two haptic ports A and B, any other char 
		// in the argument for htis method ought to be an error
	}
	
	return;
	
}



// this method is responsible for determinig
// what each servo needs to be 
// commanded to for any of the 3 corresponding joints

void Divo::update(float A, float B)
{
	Left = (.8*(A+B)/2+90.0);
    Right = (.8*(-A+B)/2+90.0);
	Serial.println("Divo is being commanded!");
	switch (num_)
	{
		case 1:
		
		   DivoL1.attach(D_L1);
		   DivoL1.write(Left);
		   
		   DivoR1.attach(D_R1);
		   DivoR1.write(Right);
		   
		   
		   Serial.println("Servo R");
		   Serial.println(DivoR1.read());
		   Serial.println("Servo L");
		   Serial.println(DivoL1.read());
		   
		   Serial.println("DIVO1 Successfully commanded");
		   
		   break;
		case 2:
		
		   DivoL2.attach(D_L2);
		   DivoL2.write(Left);
		   
		   DivoR2.attach(D_R2);
		   DivoR2.write(Right);
		   
		   Serial.println("DIVO2 Successfully commanded");
		   break;
		case 3:
		   DivoL3.attach(D_L3);
		   DivoL3.write(Left);
		   
		   DivoR3.attach(D_R3);
		   DivoR3.write(Right);
		   
		   Serial.println("DIVO3 Successfully commanded");
		   break;
		default:
		   // potential typo or error in class name or class initalization argument
		   flexError();
		   break;
    }
	return;
}
		
void gripper(boolean state){
	aux.attach(AUX_1);
	
	if(state == true){
	    aux.write(180);
	} 
	else {
		aux.write(0);
	}
    return;
}
	


void flexTest()
{
	/* blink lights and stuff to show the user that the 
	library was successfully installed and can thus run this test programmer
	
	NOTE: user need not to initalize a divo class inorder to use this function
	*/
	for(int p=0; p<3; p++){
   pulse(LED_R,1);
   pulse(LED_G,1);
   pulse(LED_B,1);
   delay(0);
  }
delay(0);
digitalWrite(LED_R,1);
digitalWrite(LED_G,1);
digitalWrite(LED_B,1);
delay(500);
digitalWrite(LED_R,0);
digitalWrite(LED_G,0);
digitalWrite(LED_B,0);

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
	
	
	
