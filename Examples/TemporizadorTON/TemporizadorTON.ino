#include <Temporizador.h>

Temporizador* temporizador1;
Temporizador* temporizador2;

void setup() {
  // put your setup code here, to run once:

  temporizador1 = new Temporizador(1000);
  temporizador2 = new Temporizador(5000);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(temporizador1->TON(true)){
    Serial.println("Estoy en el TON");
  }else{
    Serial.println("El TON es 0");
  }

  if(temporizador2->TON(true)){

    temporizador1->TON(false);
    temporizador2->TON(false);
    
  }

}
