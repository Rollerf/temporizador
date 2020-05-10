#include "Temporizador.h"

Temporizador::Temporizador(unsigned long tConsigna){
    this -> tConsigna = tConsigna;
    lEstado=0;
    tInicial=0;
}
bool Temporizador::TON(bool estado)
{
    if (estado != lEstado)
    {
        tInicial = millis();
        lEstado = estado;
    }else if(millis() - tInicial >= tConsigna){
        return true;
    }
    
    return false;
    
}