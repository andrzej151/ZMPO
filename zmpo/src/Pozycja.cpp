#include "Pozycja.h"

Pozycja::Pozycja()
{
    //ctor
}

Pozycja::~Pozycja()
{
    //dtor
}

Pozycja::Pozycja(string Nazwa,int Id, float Cena, int Czas)
{
    nazwa = Nazwa;
    id = Id;
    Cena = Cena;
    Czas = Czas;
}

ostream& operator<<(ostream& str, const Pozycja& k)
{
    return str << k.id << ". " << k.nazwa <<" "<< k.cena << "zl (" << k.czas << ")";
}
