#ifndef KUCHARZ_H
#define KUCHARZ_H


class Kucharz
{
    public:
        Kucharz();
        virtual ~Kucharz();
        strumien zapisz(strumien);
        strumien wczytaj(strumien);
        void edytuj();

        void setId(int);
        void setImie(string);
        void setNazwisko(string);
        void setZlecenie(int);

        int getId();
        string getImie();
        string getNazwisko();
        int getZlecenie();

    protected:

    private:
        int id;
        string imie;
        string nazwisko;
        int zlecenie;
};

#endif // KUCHARZ_H
