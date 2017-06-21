#ifndef STOLIK_H
#define STOLIK_H

#include <iostream>
#include <stdio.h>

using namespace std;


class Stolik
{
    public:
        Stolik();
        virtual ~Stolik();
        string toString();

        void edytuj();

        void setStan(bool);
        bool getStan();

    protected:

    private:
        bool czyWolny;
};

#endif // STOLIK_H
