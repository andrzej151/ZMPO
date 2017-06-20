#ifndef ZAMOWIENIE_H
#define ZAMOWIENIE_H

#include "Pozycja.h"
#include <vector>

class Zamowienie
{
    public:
        Zamowienie();
        virtual ~Zamowienie();

    protected:

    private:

        vector<Pozycja> lista; // Tu za arrayList robi Vector
        //Pozycja [] lista; // zmienic na araylist lub dynamiczne


};

#endif // ZAMOWIENIE_H
