#include "Rozlicz.h"

Rozlicz::Rozlicz()
{
    //ctor
}

Rozlicz::~Rozlicz()
{
    //dtor
}

Rozlicz::wykonaj()
{
    if(czyMoznaWykonac())
    czas--;
}

Rozlicz::czyMoznaWykonac()
{
    return czas>0;
}
