#ifndef POZYCJA_H
#define POZYCJA_H


class Pozycja
{
    public:
        Pozycja();
        Pozycja(string Nazwa,int Id, float Cena, int Czas);
        virtual ~Pozycja();
       // strumien zapisz(strumien);
       // strumien wczytaj(strumien);
        friend ostream& operator<<(ostream&, const Pozycja&);

    protected:

    private:
        string nazwa;
        int id;
        float cena;
        int czas


};

#endif // POZYCJA_H
