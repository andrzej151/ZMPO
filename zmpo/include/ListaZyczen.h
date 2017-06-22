#ifndef LISTAZYCZEN_H
#define LISTAZYCZEN_H

#include "Zadanie.h"
#include <iostream>
#include <string>
#include <vector>
#include <Pozycja.h>
using namespace std;

class ListaZyczen:public Zadanie
{

    public:

    ListaZyczen();
    void setPozycje(Pozycja p);
    Pozycja getPozycje(int p);
    virtual void wykonaj();
    virtual bool czyMoznaWykonac();
    void wyswietl();
    void operator=(ListaZyczen);

    protected:

    private:
        vector < Pozycja > listaPozycji;

};

#endif // LISTAZYCZEN_H
