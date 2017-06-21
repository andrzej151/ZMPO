#include "Rozlicz.h"

Rozlicz::Rozlicz()
{
    //ctor
}

Rozlicz::~Rozlicz()
{
    //dtor
}

void Rozlicz::wykonaj()
{
    if(czyMoznaWykonac())
    czas--;
}

bool Rozlicz::czyMoznaWykonac()
{
    return czas>0;
}
