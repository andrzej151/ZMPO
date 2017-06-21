#ifndef KUCHARZ_H
#define KUCHARZ_H

#include "Pracownik.h"
#include "Zadanie.h"
#include <string>
#include <iostream>
#include <queue>
#include <sstream>
#include <stdio.h>

using namespace std;

class Kucharz:public Pracownik
{
    public:
        Kucharz();
        Kucharz(int, string, string);
        virtual ~Kucharz();

        void edytuj();
        virtual void wykonaj();

        void setId(int);
        void setImie(string);
        void setNazwisko(string);
        void setZlecenie(int);

        int getId();
        string getImie();
        string getNazwisko();
        int getZlecenie();

        friend ostream& operator<<(ostream&, const Kucharz&);
        friend istream& operator>>(istream&,  Kucharz&);

        int id;
        string imie;
        string nazwisko;

    //typedef priority_queue < SOsoba, std::vector < SOsoba >, PorownajOsoby > TKolejkaPriorytetowaOsob;

    protected:

    private:
        int zlecenie;
        Zadanie *zadanie;
};

#endif // KUCHARZ_H
