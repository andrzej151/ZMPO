#include "Stolik.h"

Stolik::Stolik()
{
    czyWolny = true;
}

Stolik::~Stolik()
{
    //nothing
}

Stolik::zmienStan()
{
    czyWolny = !czyWolny;
}

Stolik::pokazStan()
{
    return czyWolny;
}
