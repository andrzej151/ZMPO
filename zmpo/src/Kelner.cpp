#include "Kelner.h"

Kelner::Kelner()
{
    //ctor
}

Kelner::~Kelner()
{
    //dtor
}

void Kelner::edytuj()
{
    //TODO proponuje dodac switch/case pytajacy co zmienic i wywolywac funkcje zmiany; eq.
    cin >> id;
    setId(id);
    cin >> imie;
    setImie(imie);
    cin >> nazwisko;
    setNazwisko(nazwisko);
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
