#include "Pozycja.h"

Pozycja::Pozycja()
{
    //ctor
}

Pozycja::~Pozycja()
{
    //dtor
}

Pozycja::wykonaj()
{
    if(czyMoznaWykonac())
    czas--;
}

Pozycja::czyMoznaWykonac()
{
    return czas > 0;
}
