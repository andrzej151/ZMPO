#include "Pozycja.h"

Pozycja::Pozycja()
{
    nazwa = "";
    id = 0;
    czas = 2;
    cena = 0.0f;
}

Pozycja::Pozycja(int Id, string Nazwa, int Czas, float Cena )
{
    nazwa = Nazwa;
    id = Id;
    czas = Czas;
    cena = Cena;
}

Pozycja::~Pozycja()
{
    //dtor
}

void Pozycja::edytuj()
{
    string x;
    int y;
    float z;
    do
    {
        printf("\n * * Podaj nazwe :\n");
        cin >> x;
    } while (x == "");
    setNazwa(x);

    do
    {
        printf("\n * * Podaj czas :\n");
        cin >> y;
    } while (y < 0);
    setCzas(y);

    do
    {
        printf("\n * * Podaj cene :\n");
        cin >> z;
    } while (z <= 0);
    setCena(z);
}

void Pozycja::setNazwa(string nazwa)
{
    this -> nazwa = nazwa;
}

void Pozycja::setId(int id)
{
    this -> id = id;
}

void Pozycja::setCena(float cena)
{
    this -> cena = cena;
}

void Pozycja::setCzas(int czas)
{
    this->czas = czas;
}

string Pozycja::getNazwa()
{
    return nazwa;
}

int Pozycja::getId()
{
    return id;
}

float Pozycja::getCena()
{
    return cena;
}

int Pozycja::getCzas()
{
    return czas;
}

void Pozycja::wykonaj()
{
    if(czyMoznaWykonac())
    czas--;
}

bool Pozycja::czyMoznaWykonac()
{
    return czas>0;
}

void Pozycja::wyswietl()
{
    cout<<id<<" "<<nazwa<<" "<<cena<<" PLN ";
    if(czas>0)
        cout<<"("<<czas<<")"<<endl;
    else
        cout<<"wykonano"<<endl;
}
