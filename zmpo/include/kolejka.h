#ifndef KOLEJKA_H
#define KOLEJKA_H


#include <iostream>
#include <cstdio>

#pragma once
#define pojemnosc 4   //zdefiniowana z góry pojemnoœæ kolejki(nie musi byæ du¿a, bo to tylko przyk³ad)
/*
using namespace std;

template < class T > class kolejka
{
public:
    kolejka( int = pojemnosc ); //konstruktor domyœlny pobieraj¹cy zdefiniowan¹ pojemnoœæ kolejki
    ~kolejka(); //destruktor domyœlny
    void dodawanie( T ); //metoda dodawania elementów do kolejki, metoda typu bool, wykorzystuj¹ca wzorce(mo¿na dodaæ element dowolnego typu, zdefiniowanego póŸniej)
    T wydawanie( T & ); //metoda usuwaj¹ca pierwszy z elementów(zamówienie wydane)
    T front(); //metoda sprawdzaj¹ca jakie jest pierwsze zamówienie, ale nie usuwaj¹ca go
    void oproznij(); //metoda oprozniajaca cala kolejke
    bool pusta(); //metoda typu bool sprawdzaj¹ca czy kolejka jest pusta
    bool pelna(); //metoda typu bool sprawdzaj¹ca czy kolejka jest pe³na
private:
    int rozmiar;
    T * values;
    int poczatek;
    int koniec;
    int pozycja;
};


template < class T > kolejka < T >::kolejka( int x )
{
    rozmiar = x; //rozmiar tablicy przechowuj¹cej zamówienia
    values = new T[ rozmiar ]; //nowa tablica o zadanym rozmiarze;
    poczatek = 0;
    koniec = 0; //kolejka jest pusta, pocz¹tek i koniec = 0
    pozycja = 0; //licznik zamowien
}


template < class T > bool kolejka < T >::pusta()
{
    if( koniec == poczatek ) //sprawdza czy koniec i pocz¹tek kolejki s¹ sobie równe, jeœli tak kolejka pusta
         return 1;
    else
         return 0; //jeœli nie kolejka nie jest pusta

}

template < class T > bool kolejka < T >::pelna()
{
    if(( koniec + 1 ) % rozmiar == poczatek ) //jeœli reszta z dzielenia (koniec+1) przez rozmiar daje poczatek
         return 1; //kolejka jest pe³na
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
    return values[ poczatek ]; //zwraca element który jest na pierwszym miejscu w kolejce
}

template < class T > kolejka < T >::~kolejka()
{
    delete[] values; //destruktor zwalniaj¹cy przypisan¹ pamiêæ
}*/
#endif // KOLEJKA_H

