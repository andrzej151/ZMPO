#ifndef POZYCJA_H
#define POZYCJA_H

#include "Zadanie.h"
#include <string>
using namespace std;

class Pozycja:public Zadanie
{
    public:
        virtual void wykonaj();
        virtual bool czyMoznaWykonac();

        Pozycja();
        virtual ~Pozycja();
        //strumien zapisz(strumien);
        //strumien wczytaj(strumien);
        string nazwa;
        int id;
        float cena;
        int czas;

    protected:

    private:
};

#endif // POZYCJA_H
