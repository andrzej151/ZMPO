#ifndef LISTAZYCZEN_H
#define LISTAZYCZEN_H

#include "Zadanie.h"
#include <string>
using namespace std;

class ListaZyczen:public Zadanie
{
    public:
        ListaZyczen();
        virtual ~ListaZyczen();
        virtual void wykonaj();
        virtual bool czyMoznaWykonac();

    protected:

    private:
        string nazwa;
        int id;
        float cena;
        int czas;
};

#endif // LISTAZYCZEN_H
