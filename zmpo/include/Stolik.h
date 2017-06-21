#ifndef STOLIK_H
#define STOLIK_H

#include <iostream>
#include <stdio.h>
#include <ListaZyczen.h>

using namespace std;


class Stolik
{
    public:
        Stolik();
        Stolik(int Id);
        virtual ~Stolik();
        string toString();
        void wyswietl();

        void edytuj();

        void setStan(bool);
        bool getStan();
        void setListeZyczen(ListaZyczen Lista);


    protected:

    private:
        int id;
        ListaZyczen lista;
        bool czyWolny;
};

#endif // STOLIK_H
