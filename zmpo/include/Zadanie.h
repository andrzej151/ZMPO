#ifndef ZADANIE_H
#define ZADANIE_H


class Zadanie
{
    public:
        Zadanie();
        virtual ~Zadanie();

        virtual void wykonaj()=0;
        virtual bool czyMoznaWykonac()=0;

    protected:

    private:
};

#endif // ZADANIE_H
