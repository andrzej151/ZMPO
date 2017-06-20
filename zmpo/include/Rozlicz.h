#ifndef ROZLICZ_H
#define ROZLICZ_H

#include "Zadanie.h"

class Rozlicz:public Zadanie
{
    public:
        virtual void wykonaj();
        virtual bool czyMoznaWykonac();

        Rozlicz();
        virtual ~Rozlicz();

    protected:

    private:
        string nazwa;
        int id;
        float cena;
        int czas;
};

#endif // ROZLICZ_H
