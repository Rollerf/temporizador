/*
Libreria para crear temporizadores
*/

#include "Arduino.h"

class Temporizador
{
private:
    /* data */
    unsigned long tInicial;
    unsigned long tTranscurrido;
    unsigned long tConsigna;
    bool lEstado;
public:
    //Constructor
    Temporizador(unsigned long tConsigna);
    //Destructor
    Temporizador::~Temporizador();
    //Temporizador a la conexion, el tiempo correra mientras
    //el estado sea 1
    bool TON(bool estado);
};
