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
    string x=".";
    do
    {
        cout << "\nStolik jest "+toString()+". Czy ma byc zajety?\n";
        cin >> x;
    } while (x != "tak" && x != "ok" && x != "nie");
    czyWolny = (x == "nie");
}

string Stolik::toString()
{
    return czyWolny?"wolny":"zajety";
}

void Stolik::setStan(bool czyWolny)
{
    this -> czyWolny = czyWolny;
}

bool Stolik::getStan()
{
    return czyWolny;
}
