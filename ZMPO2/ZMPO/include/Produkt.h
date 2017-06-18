#include <iostream>
#include <string>
#ifndef PRODUKT_H
#define PRODUKT_H
using namespace std;

class Produkt
{
    public:
        Produkt();
        Produkt(string n,float cena, int id, int czas);
        ~Produkt();
         friend ostream& operator<<(ostream&, const Produkt&);

    protected:
    private:
    string nazwa;
    float cena;
    int id;
    int czas;

};

#endif // PRODUKT_H
