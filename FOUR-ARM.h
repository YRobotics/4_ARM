/*
   4ARM - is a library for allowsing simple 
   programming of Divo based robotic arms 
   that utilize the Black Box controller
*/
#ifndef Divo_h
#define Divo_h

// pin assignments for 1,2,3 Divos and Auxillary signal
#define D_L1 2
#define D_R1 3
#define D_L2 4
#define D_R2 5
#define D_L3 6
#define D_R3 7
#define AUX_1 8

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

extern Servo DivoL1 ,DivoR1 ,DivoL2 ,DivoR2 ,DivoL3 ,DivoR3;
             
			 

void flexTest();
void flexError();
void pulse(int pin,int pause);
bool buttonState();

class Divo
{
	public:
	   Divo(int num);
	   void Update(float A, float B);
	   
	   
	   
	   
	private:
	    int num_;
		
	
	
};
#endif
   