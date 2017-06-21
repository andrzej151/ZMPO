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
        Kelner(int, string, string);
        virtual ~Kelner();
        string toString();

        void edytuj();
        virtual void wykonaj();

        void setId(int);
        void setImie(string);
        void setNazwisko(string);

        int getId();
        string getImie();
        string getNazwisko();

        int id;
        string imie;
        string nazwisko;

    protected:

    private:
        Zadanie *zadanie;
};

#endif // KELNER_H

