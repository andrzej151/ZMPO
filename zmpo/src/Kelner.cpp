#include "Kelner.h"

Kelner::Kelner()
{
    //ctor
}

Kelner::Kelner(int Id, string Imie, string Nazwisko)
{
    imie = Imie;
    nazwisko = Nazwisko;
    id = Id;
}

Kelner::~Kelner()
{
    //dtor
}

void Kelner::edytuj()
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

void Kelner::setId(int id)
{
    this -> id = id;
}

void Kelner::setImie(string imie)
{
    this -> imie = imie;
}

void Kelner::setNazwisko(string nazwisko)
{
    this -> nazwisko = nazwisko;
}

Kelner::getId()
{
    return id;
}

string Kelner::getImie()
{
    return imie;
}

string Kelner::getNazwisko()
{
    return nazwisko;
}

void Kelner::wykonaj()
{
    //zzadanie czy morzna wykonac
    //jesli tak wykonaj
    //else od³urz na odp linie pobiesz nastepne zadanie
}
