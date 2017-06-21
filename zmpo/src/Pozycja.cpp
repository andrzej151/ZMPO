#include "Pozycja.h"

Pozycja::Pozycja()
{
    //ctor
}

Pozycja::~Pozycja()
{
    //dtor
}

void Pozycja::wykonaj()
{
    if(czyMoznaWykonac())
    czas--;
}

bool Pozycja::czyMoznaWykonac()
{
    return czas > 0;
}
