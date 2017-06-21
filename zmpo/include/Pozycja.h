#ifndef POZYCJA_H
#define POZYCJA_H

#include "Zadanie.h"
#include <iostream>
#include <string>

using namespace std;


class Pozycja:public Zadanie
{
    string nazwa;
    int    id, czas;
    float cena;
    //get set zapis wczytaj
    public:
    Pozycja();
    Pozycja(string Nazwa, int Id, int Czas, float Cena );
     void setId(int Id);
     int getId();
     void setCzas(int Czas);
     int getCzas();
     void setNazwa(string Nazwa);
     string getNazwa();
     void setCena(float Cena);
     float getCena();
    virtual void wykonaj();
    virtual bool czyMoznaWykonac();
    void wyswietl();

};

#endif // POZYCJA_H
