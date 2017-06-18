#ifndef KELNER_H
#define KELNER_H


class Kelner
{
    public:
        Kelner();
        virtual ~Kelner();
        strumien zapisz(strumien);
        strumien wczytaj(strumien);
        void edytuj();

        void setId(int);
        void setImie(string);
        void setNazwisko(string);

        int getId();
        string getImie();
        string getNazwisko();

    protected:

    private:
        int id;
        string imie;
        string nazwisko;
};

#endif // KELNER_H
