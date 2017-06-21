#include "Pozycja.h"



    Pozycja::Pozycja()
    {
        nazwa = "";
        id = 0;
        czas = 2;
        cena = 0;
    }

    Pozycja::Pozycja(string Nazwa, int Id, int Czas, float Cena )
    {
        nazwa = Nazwa;
        id = Id;
        czas = Czas;
        cena = Cena;
     }

     void Pozycja::setId(int Id)
     {
     id=Id;
     }

     int Pozycja::getId()
     {
         return id;
     }

     void Pozycja::setCzas(int Czas)
     {
        czas=Czas;
     }

     int Pozycja::getCzas()
     {
        return czas;
     }

     void Pozycja::setNazwa(string Nazwa)
     {
        nazwa=Nazwa;
     }

     string Pozycja::getNazwa()
     {
        return nazwa;
     }

     void Pozycja::setCena(float Cena)
     {
        cena=Cena;
     }

     float Pozycja::getCena()
     {
        return cena;
     }


     void Pozycja::wykonaj()
    {
        if(czyMoznaWykonac())
        czas--;
    }

     bool Pozycja::czyMoznaWykonac()
    {
        return czas>0;

    }

    void Pozycja::wyswietl()
    {
        cout<<id<<" "<<nazwa<<" "<<cena<<" PLN ";
        if(czas>0)
            cout<<"("<<czas<<")"<<endl;
        else
            cout<<"wykonano"<<endl;

    }
