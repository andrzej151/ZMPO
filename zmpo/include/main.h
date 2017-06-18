#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <conio.h>
#include <vector>

#include "Kucharz.h"
#include "Kelner.h"
#include "Stolik.h"

class main
{
    public:
        main();
        virtual ~main();

    protected:

    private:
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
