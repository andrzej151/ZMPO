#ifndef PRACOWNIK_H
#define PRACOWNIK_H


class Pracownik
{
    public:
        Pracownik();
        virtual ~Pracownik();
        virtual void wykonaj() = 0;

    protected:

    private:
};

#endif // PRACOWNIK_H
