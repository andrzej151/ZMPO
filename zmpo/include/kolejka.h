#ifndef KOLEJKA_H
#define KOLEJKA_H


#include <iostream>
#include <cstdio>

#pragma once
#define pojemnosc 4   //zdefiniowana z g�ry pojemno�� kolejki(nie musi by� du�a, bo to tylko przyk�ad)
/*
using namespace std;

template < class T > class kolejka
{
public:
    kolejka( int = pojemnosc ); //konstruktor domy�lny pobieraj�cy zdefiniowan� pojemno�� kolejki
    ~kolejka(); //destruktor domy�lny
    void dodawanie( T ); //metoda dodawania element�w do kolejki, metoda typu bool, wykorzystuj�ca wzorce(mo�na doda� element dowolnego typu, zdefiniowanego p�niej)
    T wydawanie( T & ); //metoda usuwaj�ca pierwszy z element�w(zam�wienie wydane)
    T front(); //metoda sprawdzaj�ca jakie jest pierwsze zam�wienie, ale nie usuwaj�ca go
    void oproznij(); //metoda oprozniajaca cala kolejke
    bool pusta(); //metoda typu bool sprawdzaj�ca czy kolejka jest pusta
    bool pelna(); //metoda typu bool sprawdzaj�ca czy kolejka jest pe�na
private:
    int rozmiar;
    T * values;
    int poczatek;
    int koniec;
    int pozycja;
};


template < class T > kolejka < T >::kolejka( int x )
{
    rozmiar = x; //rozmiar tablicy przechowuj�cej zam�wienia
    values = new T[ rozmiar ]; //nowa tablica o zadanym rozmiarze;
    poczatek = 0;
    koniec = 0; //kolejka jest pusta, pocz�tek i koniec = 0
    pozycja = 0; //licznik zamowien
}


template < class T > bool kolejka < T >::pusta()
{
    if( koniec == poczatek ) //sprawdza czy koniec i pocz�tek kolejki s� sobie r�wne, je�li tak kolejka pusta
         return 1;
    else
         return 0; //je�li nie kolejka nie jest pusta

}

template < class T > bool kolejka < T >::pelna()
{
    if(( koniec + 1 ) % rozmiar == poczatek ) //je�li reszta z dzielenia (koniec+1) przez rozmiar daje poczatek
         return 1; //kolejka jest pe�na
    else
         return 0; //inaczej jest pusta

}

template < class T > void kolejka < T >::dodawanie( const T a )
{
    if( !kolejka < T >::pelna() ) //sprawdza czy kolejka nie jest pelna, jesli nie mozna dodac kolejne zamowienie
    {
        koniec =(( koniec + 1 ) % rozmiar ); //przyrost konca przed dodaniem
        values[ koniec ] = a; //dodanie elementu na koncu
    }


}

template < class T > T kolejka < T >::wydawanie( T & val )
{
    if( kolejka < T >::pusta() )
    {
        cout << "kolejka pusta" << endl;
    }
    else
    {
        val = values[ poczatek ];
        poczatek =(( poczatek + 1 ) % rozmiar );
    }
    return val;
}

template < class T > void kolejka < T >::oproznij()
{
    poczatek = koniec = rozmiar - 1; //oproznia cala kolejke
}

template < class T > T kolejka < T >::front()
{
    return values[ poczatek ]; //zwraca element kt�ry jest na pierwszym miejscu w kolejce
}

template < class T > kolejka < T >::~kolejka()
{
    delete[] values; //destruktor zwalniaj�cy przypisan� pami��
}*/
#endif // KOLEJKA_H

