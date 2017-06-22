#include "ListaZyczen.h"

ListaZyczen::ListaZyczen()
{
    //ctor
}





    void ListaZyczen::operator=(ListaZyczen c)
    {

    }
    void ListaZyczen::setPozycje(Pozycja p)
    {
        listaPozycji.push_back(p);
    }

    Pozycja ListaZyczen::getPozycje(int p)
    {
        return listaPozycji[p];
    }

     void ListaZyczen::ListaZyczen::wykonaj()
    {
        //if(czyMoznaWykonac())
        //czas--;
    }

     bool ListaZyczen::czyMoznaWykonac()
    {
       // return czas>0;

    }

    void ListaZyczen::wyswietl()
    {

        for(int i=0;i<listaPozycji.size();i++)
        listaPozycji[i].wyswietl();
        cout<<endl;
    }


