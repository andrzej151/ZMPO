#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <fstream>
#include <queue>

#include <stdio.h>
#include <conio.h>
#include <vector>
#include <cstdlib>

#include "Kelner.h"
#include "Kucharz.h"
#include "Stolik.h"

#include "Zadanie.h"
#include "Zamowienie.h"
#include "ListaZyczen.h"

//moze nie beda przydatne;
#include "Rozlicz.h"
#include "Pozycja.h"
#include "Pracownik.h"
#include "Rozlicz.h"

struct SOsoba;
struct PorownajOsoby;
class Main
{
    public:
        Main();
        virtual ~Main();

        typedef std::priority_queue < SOsoba, std::vector < SOsoba >, PorownajOsoby > TKolejkaPriorytetowaOsob;

    protected:

    private:

        void WstawOsobe( TKolejkaPriorytetowaOsob &, const char *, const char *, int, const char * );
        void TUI();
        void clear_screen();

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
        void dodajStolik();
        void pokazStolik(int);
        void edytujStolik(int);
        void usunStolik(int);


        bool zapiszKelnerow();
        bool wczytajKelnerow();
        void wpiszKelnerow();
        void wyswietlListeKelnerow();
        bool zapiszKucharzy();
        bool wczytajKucharzy();
        void wpiszKucharzy();
        void wyswietlListeKucharzy();

        bool zapiszStoliki();
        bool wczytajStoliki();
};

#endif // MAIN_H
