#include <FOUR-ARM.h>

Divo baseDivo(1), midDivo(2);

void setup() {
  // put your setup code here, to run once:
gripper(0);
}

void loop() {
  // put your main code here, to run repeatedly:

baseDivo.update(0,0);
midDivo.update(0,0);

delay(2000);

baseDivo.update(45,0);
midDivo.update(90,0);
gripper(0);

delay(2000);

baseDivo.update(90,0);
midDivo.update(90,0);
gripper(1);

delay(2000);
}
