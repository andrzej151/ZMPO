#include "Kucharz.h"

Kucharz::Kucharz()
{
    imie = "";
    nazwisko = "";
    id = 0;
}

Kucharz::Kucharz(int Id, string Imie, string Nazwisko)
{
    imie = Imie;
    nazwisko = Nazwisko;
    id = Id;
}

Kucharz::~Kucharz()
{
    //dtor
}

void Kucharz::edytuj()
{
    string x;
    do
    {
        printf("\n * * Podaj imie :\n");
        cin >> x;
    } while (x == "");
    setImie(x);

    do
    {
        printf("\n * * Podaj nazwisko :\n");
        cin >> x;
    } while (x == "");
    setNazwisko(x);
}

void Kucharz::setId(int id)
{
    this -> id = id;
}

void Kucharz::setImie(string imie)
{
    this -> imie = imie;
}

void Kucharz::setNazwisko(string nazwisko)
{
    this -> nazwisko = nazwisko;
}

void Kucharz::setZlecenie(int zlecenie)
{
    this -> zlecenie = zlecenie;
}

Kucharz::getId()
{
    return id;
}

string Kucharz::getImie()
{
    return imie;
}

string Kucharz::getNazwisko()
{
    return nazwisko;
}

Kucharz::getZlecenie()
{
    return zlecenie;
}

void Kucharz::wykonaj()
{
    //zzadanie czy morzna wykonac
    //jesli tak wykonaj
    //else od³urz na odp linie pobiesz nastepne zadanie
}
