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

string Kucharz::toString()
{
    return id + " " + imie + " " + nazwisko;
}

void Kucharz::edytuj()
{
    //TODO proponuje dodac switch/case pytajacy co zmienic i wywolywac funkcje zmiany; eq.
    cin >> id;
    setId(id);
    cin >> imie;
    setImie(imie);
    cin >> nazwisko;
    setNazwisko(nazwisko);
    cin >> zlecenie;
    setZlecenie(zlecenie);
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
