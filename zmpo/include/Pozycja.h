#ifndef POZYCJA_H
#define POZYCJA_H

#include "Zadanie.h"

class Pozycja:public Zadanie
{
    public:
        virtual void wykonaj();
        virtual bool czyMoznaWykonac();

        Pozycja();
        virtual ~Pozycja();
        //strumien zapisz(strumien);
        //strumien wczytaj(strumien);

    protected:

    private:
        string nazwa;
        int id;
        float cena;
        int czas;
};

#endif // POZYCJA_H
