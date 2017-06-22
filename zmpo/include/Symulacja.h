#ifndef SYMULACJA_H
#define SYMULACJA_H
#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <conio.h>
#include <Kelner.h>
#include <Kucharz.h>
#include <ListaZyczen.h>
#include <Pozycja.h>
#include <Stolik.h>
using namespace std;


class Symulacja
{
    public:
        Symulacja();
        //Symulacja();
        virtual ~Symulacja();
        void clear_screen();

        void init(vector<Kelner>&, vector<Kucharz>&, vector<Stolik>&, queue<ListaZyczen>&);
        int menu();
        void wykonaj(int x);

    protected:

    private:

        string nowyKlient();
        string nowyStan();

        vector<Kucharz> kucharze;
        vector<Kelner> kelnerzy;

        vector<Stolik> stoliki;
        queue <ListaZyczen> kolejka;
        void wyswietl(int);

};

#endif // SYMULACJA_H
