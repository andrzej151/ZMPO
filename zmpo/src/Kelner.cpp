#include "Kelner.h"

Kelner::Kelner()
{
    //ctor
}

Kelner::~Kelner()
{
    //dtor
}

Kelner::edytuj()
{
    //TODO proponuje dodac switch/case pytajacy co zmienic i wywolywac funkcje zmiany; eq.
    cin << id;
    setId(id);
    cin << imie;
    setImie(imie);
    cin << nazwisko;
    setNazwisko(nazwisko);
}

Kelner::setId(int id)
{
    this -> id = id;
}

Kelner::setImie(string imie)
{
    this -> imie = imie;
}

Kelner::setNazwisko(string nazwisko)
{
    this -> nazwisko = nazwisko;
}

Kelner::getId()
{
    return id;
}

Kelner::getImie()
{
    return imie;
}

Kelner::getNazwisko()
{
    return nazwisko;
}
