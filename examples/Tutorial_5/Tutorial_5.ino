#include <FOUR-ARM.h>

Divo baseDivo(1), midDivo(2);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

baseDivo.haptic('a');
midDivo.haptic('b');

gripper(0);

while(buttonState())
   {
    baseDivo.haptic('a');
    midDivo.haptic('b');

    gripper(1);
    }

}
