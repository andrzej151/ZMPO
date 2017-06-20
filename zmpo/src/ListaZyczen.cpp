#include "ListaZyczen.h"

ListaZyczen::ListaZyczen()
{
    //ctor
}

ListaZyczen::~ListaZyczen()
{
    //dtor
}

void ListaZyczen::wykonaj()
{
    if(czyMoznaWykonac())
    czas--;
}

bool ListaZyczen::czyMoznaWykonac()
{
    return czas > 0;
}
