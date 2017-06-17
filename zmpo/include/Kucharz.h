#ifndef KUCHARZ_H
#define KUCHARZ_H


class Kucharz
{
    public:
        Kucharz();
        virtual ~Kucharz();
        strumien zapisz(strumien);
        strumien wczytaj(strumien);

    protected:

    private:
        int id;
        string imie;
        string nazwisko;
        int zlecenie;
};

#endif // KUCHARZ_H
