#ifndef KELNER_H
#define KELNER_H

#include "Pracownik.h"
#include "Zadanie.h"
#include <string>
#include <iostream>

using namespace std;

class Kelner:public Pracownik
{
    public:
        Kelner();
        virtual ~Kelner();
        //strumien zapisz(strumien);
        //strumien wczytaj(strumien);
        void edytuj();
        virtual void wykonaj();

        void setId(int);
        void setImie(string);
        void setNazwisko(string);

        int getId();
        string getImie();
        string getNazwisko();

    protected:

    private:
        int id;
        string imie;
        string nazwisko;
        Zadanie zadanie;
};

#endif // KELNER_H

