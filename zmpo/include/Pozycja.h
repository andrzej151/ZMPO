#ifndef POZYCJA_H
#define POZYCJA_H


class Pozycja
{
    public:
        Pozycja();
        virtual ~Pozycja();
        strumien zapisz(strumien);
        strumien wczytaj(strumien)

    protected:

    private:
        String nazwa;
        int id;
        float cena;
        Time czas
};

#endif // POZYCJA_H
