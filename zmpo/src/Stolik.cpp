#include "Stolik.h"

Stolik::Stolik()
{
    czyWolny = true;
}

Stolik::~Stolik()
{
    //nothing
}

void Stolik::edytuj()
{
    //TODO tu cos prostego
    //cin >> stan;
    //setStan(stan);
}

string Stolik::toString()
{
    return czyWolny?"Wolny":"Zajety";
}

void Stolik::setStan(bool czyWolny)
{
    this -> czyWolny = czyWolny;
}

bool Stolik::getStan()
{
    return czyWolny;
}
