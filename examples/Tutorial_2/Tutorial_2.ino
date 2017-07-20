#include <FOUR-ARM.h>
Divo baseDivo(1);

void setup() {

}

void loop() {

baseDivo.update(0,0);
// command the Divo attached to port 1 to go to 0(degrees),0(degrees) 

delay(3000);
// pause for 3 seconds

baseDivo.update(90,0);

delay(3000);

baseDivo.update(0,90);

delay(3000);

}
