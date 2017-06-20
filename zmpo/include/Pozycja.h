#ifndef POZYCJA_H
#define POZYCJA_H
#include <string>

class Pozycja
{
    public:
        Pozycja();
        Pozycja(string ,int, float , int );
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
