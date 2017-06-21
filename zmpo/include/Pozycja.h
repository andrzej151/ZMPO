#ifndef POZYCJA_H
#define POZYCJA_H
#include <iostream>
#include <string>
#include "Zadanie.h"
#include <stdio.h>

using namespace std;


class Pozycja:public Zadanie
{
    public:
        Pozycja();
        Pozycja(int , string , int , float);
        virtual ~Pozycja();

        string nazwa;
        int id;
        int czas;
        float cena;

        virtual void wykonaj();
        virtual bool czyMoznaWykonac();
        void edytuj();
        void wyswietl();

        void setNazwa(string);
        void setId(int);
        void setCena(float);
        void setCzas(int);

        int getId();
        string getNazwa();
        float getCena();
        int getCzas();

    protected:

    private:
};

#endif // POZYCJA_H
