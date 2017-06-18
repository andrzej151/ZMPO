#include "Stolik.h"

Stolik::Stolik()
{
    czyWolny = true;
}

Stolik::~Stolik()
{
    //nothing
}

Kelner::edytuj()
{
    //TODO tu cos prostego
    cin << stan;
    setStan(stan);
}

Stolik::setStan(bool czyWolny)
{
    this -> czyWolny = czyWolny;
}

Stolik::getStan()
{
    return czyWolny;
}
