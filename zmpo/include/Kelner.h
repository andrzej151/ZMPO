#ifndef KELNER_H
#define KELNER_H


class Kelner
{
    public:
        Kelner();
        virtual ~Kelner();
        strumien zapisz(strumien);
        strumien wczytaj(strumien);

    protected:

    private:
        int id;
        string imie;
        string nazwisko;
};

#endif // KELNER_H
