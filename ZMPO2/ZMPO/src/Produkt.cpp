#include "Produkt.h"

Produkt::Produkt()
{
    //ctor
}

Produkt::Produkt(string n,float cena, int id, int czas)
{

     nazwa=n;
     this.cena=cena;
     this.id=id;
     this.czas=czas;
}


Produkt::~Produkt()
{
    //dtor
}

ostream& Produkt::operator<<(ostream& str, const Produkt& k) {
    return str <<k.id<<" "<< k.nazwa<< " (" << k.cena << " zl)"<<k.czas<<endl;
}
