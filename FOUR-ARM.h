/*
   4ARM - is a library for allowsing simple 
   programming of Divo based robotic arms 
   that utilize the Black Box controller
*/
#ifndef Divo_h
#define Divo_h

// pin assignments for 1,2,3 Divos and Auxillary signal

#define AUX_1 2
#define D_R3 3
#define D_L3 4
#define D_R2 5
#define D_L2 6
#define D_R1 7
#define D_L1 8

// pin assignments for RGB LED
#define LED_R 9
#define LED_G 10
#define LED_B 11

// pin assignments for Haptic Controller
#define H_1_A 0
#define H_1_B 1
#define H_2_A 2
#define H_2_B 3

// pin assignment for button mounted onto Nerve Center
// NOTE: The button attached is logically inverted
#define SW_STATE 53







#include "Arduino.h"
#include "Servo.h"


// Test function flashes LEDS to indicate that 
//library was installed correctly


             
			 

void flexTest();
void flexError();
void pulse(int pin,int pause);
bool buttonState();
void gripper(boolean state);

class Divo
{
	public:
	   Divo(int num);
	   
	   void haptic(char port);
	   
	   void update(float A, float B);
	   
	   float Left, Right;
	   
	   
	   
	private:
	    int num_;
		
		Servo DivoL1 ,DivoR1 
		     ,DivoL2 ,DivoR2 
			 ,DivoL3 ,DivoR3;
		
	
	
};
#endif
   