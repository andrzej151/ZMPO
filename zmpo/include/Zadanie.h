#ifndef ZADANIE_H
#define ZADANIE_H


class Zadanie
{
    public:
        Zadanie();
        virtual ~Zadanie();

        virtual void wykonaj();
        virtual bool czyMoznaWykonac();

    protected:

    private:
};

#endif // ZADANIE_H
