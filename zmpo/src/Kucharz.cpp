#include "Kucharz.h"

Kucharz::Kucharz()
{
    //ctor
}

Kucharz::~Kucharz()
{
    //dtor
}

Kucharz::edytuj()
{
    //TODO proponuje dodac switch/case pytajacy co zmienic i wywolywac funkcje zmiany; eq.
    cin << id;
    setId(id);
    cin << imie;
    setImie(imie);
    cin << nazwisko;
    setNazwisko(nazwisko);
    cin << zlecenie;
    setZlecenie(zlecenie);
}

Kucharz::setId(int id)
{
    this -> id = id;
}

Kucharz::setImie(string imie)
{
    this -> imie = imie;
}

Kucharz::setNazwisko(string nazwisko)
{
    this -> nazwisko = nazwisko;
}

Kucharz::setZlecenie(int zlecenie)
{
    this -> zlecenie = zlecenie;
}

Kucharz::getId()
{
    return id;
}

Kucharz::getImie()
{
    return imie;
}

Kucharz::getNazwisko()
{
    return nazwisko;
}

Kucharz::getZlecenie()
{
    return zlecenie;
}
