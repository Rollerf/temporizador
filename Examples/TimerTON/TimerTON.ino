#include <Timer.h>

TON* ton1;
TON* ton2;

void setup() {
  ton1 = new TON(1000);
  ton2 = new TON(5000);

  Serial.begin(9600);
}

void loop() {
  //Turn timer ton1 ON and when the setPoint is reached returns true
  if (ton1->IN(true)) {
    Serial.println("TON ON");
  } else {
    Serial.println("TON OFF");

    //Return the time since the ton1 turned on
    Serial.println(ton1->getActualTime());
  }

  if (ton2->IN(true)) {
    //Turn timers OFF
    ton1->IN(false);
    ton2->IN(false);
  }

}
