#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <conio.h>
#include <vector>

#include "Kucharz.h"
#include "Kelner.h"
#include "Stolik.h"

#include "Zadanie.h"
#include "Zamowienie.h"
#include "ListaZyczen.h"

//moze nie beda przydatne;
#include "Rozlicz.h"
#include "Obsluga.h"
#include "Pozycja.h"
#include "Pracownik.h"
#include "Rozlicz.h"

class main
{
    public:
        main();
        virtual ~main();

    protected:

    private:
        //void WstawOsobe( TKolejkaPriorytetowaOsob &, const char *, const char *, int, const char * )
        int TUI();

        vector<Kucharz> kucharze;
        void dodajKucharza(Kucharz);
        void pokazKucharza(int);
        void edytujKucharza(int);
        void usunKucharza(int);

        vector<Kelner> kelnerzy;
        void dodajKelnera(Kelner);
        void pokazKelnera(int);
        void edytujKelnera(int);
        void usunKelnera(int);

        vector<Stolik> stoliki;
        void dodajStolik(Stolik);
        void pokazStolik(int);
        void edytujStolik(int);
        void usunStolik(int);
};

#endif // MAIN_H
