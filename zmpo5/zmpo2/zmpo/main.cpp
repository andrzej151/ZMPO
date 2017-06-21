#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <queue>
#include <vector>
#define PKelnerzy "kelnerzy.txt"
#define PKucharze "kucharze.txt"
#define IloscStolikow 10

using namespace std;
/*
class Pozycja {
    string nazwa;
public:    int    id, czas;
    float cena;
public:

    Pozycja( )
    {
        nazwa = "";
        id = 0;
        czas = 0;
        cena = 0;
     }
    Pozycja(string Nazwa, int Id, int Czas, float Cena )
    {
        nazwa = Nazwa;
        id = Id;
        czas = Czas;
        cena = Cena;
     }

     void setId(int Id)
     {
     id=Id;
     }

     int getId()
     {
         return id;
     }

     void setCzas(int Czas)
     {
        czas=Czas;
     }

     int getCzas()
     {
        return czas;
     }

     void setNazwa(string Nazwa)
     {
        nazwa=Nazwa;
     }

     string getNazwa()
     {
        return nazwa;
     }

     void setCena(float Cena)
     {
        cena=Cena;
     }

     float getCena()
     {
        return cena;
     }

    friend ostream& operator<<(ostream&, const Pozycja&);
    friend istream& operator>>(istream&,  Pozycja&);
    ostream& zapisz(ostream& str, const Pozycja& k) {
    return str << k.id<<" "<<k.nazwa<< " " << k.cena << " PLN (" << k.czas << ")";
}

};

ostream& operator<<(ostream& str, const Pozycja& k) {
    return str << k.id<<" "<<k.nazwa<< " " << k.cena << " PLN (" << k.czas << ")";
}

istream& operator>>(istream& str,  Pozycja& k) {
int x=0;

do{
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> x;
    } while (!str);
    k.setId(x);

    return str;
}

void wczytaj()
{
        const int DIM = 80;
        char      name[DIM];
        Pozycja k;

       ifstream  inplik;
    do {
        system( "cls" );
        cin.clear();
        cout << "Plik wejsciowy:  ";
        cin.getline(name, DIM);
        inplik.clear();
        inplik.open(name);
    } while (!inplik);


    cout << "Plik = " << name << endl;
    inplik>>k;
    inplik.close();
    cout<<k;
}
*/
struct SOsoba
{
    std::string imie;
    std::string nazwisko;
    int kolejnosc;
    std::string inneDane;
};

struct PorownajOsoby
{
    bool operator ()( const SOsoba & osoba1, const SOsoba & osoba2 )
    {
        //kolejnoœæ - rosn¹co
        if( osoba1.kolejnosc > osoba2.kolejnosc ) return true;

        if( osoba1.kolejnosc < osoba2.kolejnosc ) return false;

        //nazwisko - rosn¹co
        if( osoba1.nazwisko > osoba2.nazwisko ) return true;

        if( osoba1.nazwisko < osoba2.nazwisko ) return false;

        //imiê - malej¹co
        if( osoba1.nazwisko < osoba2.nazwisko ) return true;

        if( osoba1.nazwisko > osoba2.nazwisko ) return false;

        return false;
    }
};

typedef std::priority_queue < SOsoba, std::vector < SOsoba >, PorownajOsoby > TKolejkaPriorytetowaOsob;

void WstawOsobe( TKolejkaPriorytetowaOsob & kp, const char * imie, const char * nazwisko, int kolejnosc, const char * inneDane )
{
    SOsoba nowaOsoba;
    nowaOsoba.imie = imie;
    nowaOsoba.nazwisko = nazwisko;
    nowaOsoba.kolejnosc = kolejnosc;
    nowaOsoba.inneDane = inneDane;
    kp.push( nowaOsoba );
}

////////////////////////
class Zadanie
{
    virtual void wykonaj()=0;
    virtual bool czyMoznaWykonac()=0;

};

class Pozycja:public Zadanie
{
    string nazwa;
    int    id, czas;
    float cena;
    //get set zapis wczytaj
    public:
    Pozycja()
    {
        nazwa = "";
        id = 0;
        czas = 2;
        cena = 0;
    }

    Pozycja(string Nazwa, int Id, int Czas, float Cena )
    {
        nazwa = Nazwa;
        id = Id;
        czas = Czas;
        cena = Cena;
     }

     void setId(int Id)
     {
     id=Id;
     }

     int getId()
     {
         return id;
     }

     void setCzas(int Czas)
     {
        czas=Czas;
     }

     int getCzas()
     {
        return czas;
     }

     void setNazwa(string Nazwa)
     {
        nazwa=Nazwa;
     }

     string getNazwa()
     {
        return nazwa;
     }

     void setCena(float Cena)
     {
        cena=Cena;
     }

     float getCena()
     {
        return cena;
     }


    virtual void wykonaj()
    {
        if(czyMoznaWykonac())
        czas--;
    }

    virtual bool czyMoznaWykonac()
    {
        return czas>0;

    }

    void wyswietl()
    {
        cout<<id<<" "<<nazwa<<" "<<cena<<" PLN ";
        if(czas>0)
            cout<<"("<<czas<<")"<<endl;
        else
            cout<<"wykonano"<<endl;

    }

};

class Menu // Tworzy nowe zamowienie wykonane tylko przez kelnera
{
    vector < Pozycja > listaPozycji;
    //get set zapis wczytaj
    public:

    Menu()
    {
        listaPozycji.push_back(Pozycja("Pizza 1",0,100,10.99));
        listaPozycji.push_back(Pozycja("Pizza 2",1,100,15.99));
        listaPozycji.push_back(Pozycja("Pizza 3",2,100,16.99));
        listaPozycji.push_back(Pozycja("Pizza 4",3,100,17.99));
        listaPozycji.push_back(Pozycja("Pizza 5",4,100,12.99));
        listaPozycji.push_back(Pozycja("Pizza 6",5,100,23.99));
        listaPozycji.push_back(Pozycja("Pizza 7",6,100,25.99));
        listaPozycji.push_back(Pozycja("Pizza 8",7,100,43.99));
    }
    void setPozycje(Pozycja p)
    {
        listaPozycji.push_back(p);
    }

    Pozycja getPozycje(int p)
    {
        return listaPozycji[p];
    }

    virtual void wykonaj()
    {
        //if(czyMoznaWykonac())
       // czas--;
    }

    virtual bool czyMoznaWykonac()
    {
       // return czas>0;

    }

    void wyswietl()
    {
        cout<<"Menu"<<endl;
        for(int i=0;i<listaPozycji.size();i++)
        listaPozycji[i].wyswietl();
        cout<<endl;
    }

};

class ListaZyczen:public Zadanie // Tworzy nowe zamowienie wykonane tylko przez kelnera
{
    vector < Pozycja > listaPozycji;
    //get set zapis wczytaj
    public:

    ListaZyczen()
    {

    }
    void setPozycje(Pozycja p)
    {
        listaPozycji.push_back(p);
    }

    Pozycja getPozycje(int p)
    {
        return listaPozycji[p];
    }

    virtual void wykonaj()
    {
        //if(czyMoznaWykonac())
        //czas--;
    }

    virtual bool czyMoznaWykonac()
    {
       // return czas>0;

    }

    void wyswietl()
    {

        for(int i=0;i<listaPozycji.size();i++)
        listaPozycji[i].wyswietl();
        cout<<endl;
    }

};

class Rozlicz:public Zadanie  // zakoncz zamowienie pobirz pieniadze zwolnij stolik
{
    string nazwa;
    int    id, czas;
    float cena;
    //get set zapis wczytaj
    public:
    virtual void wykonaj()
    {
        if(czyMoznaWykonac())
        czas--;
    }

    virtual bool czyMoznaWykonac()
    {
        return czas>0;

    }

};
/////////////////////////////////////////
class Pracownik
{

    protected:
    string imie, nazwisko;
    int id;
    bool odczytzpliku;
    Zadanie *zadanie;


    public:

    virtual void wykonaj()=0;

    void setOdczytzpliku(bool o)
    {
        odczytzpliku=o;
    }

    void setId(int Id)
     {
     id=Id;
     }

     int getId()
     {
         return id;
     }
     void setNazwisko(string Nazwisko)
     {
        nazwisko=Nazwisko;
     }

     string getNazwisko()
     {
        return nazwisko;
     }

      void setImie(string Imie)
     {
        imie=Imie;
     }

     string getImie()
     {
        return imie;
     }
};
class Kelner:public Pracownik
{

    Zadanie *zadanie;
    //get set zapis wczytaj
    public:

    Kelner()
    {
        imie = "";
        nazwisko = "";
        id = 0;
        odczytzpliku = false;
    }

    Kelner(int Id, string Imie, string Nazwisko)
    {
        imie = Imie;
        nazwisko = Nazwisko;
        id = Id;
    }


    virtual void wykonaj()
    {
        //zzadanie czy morzna wykonac
        //jesli tak wykonaj
        //else odłurz na odp linie pobiesz nastepne zadanie
    }

    friend ostream& operator<<(ostream&, const Kelner&);
    friend istream& operator>>(istream&,  Kelner&);


};

ostream& operator<<(ostream& str, const Kelner& k) {
    return str << k.id<<" "<<k.imie<< " " << k.nazwisko <<endl;
}

istream& operator>>(istream& str,  Kelner& k)
{
    int x=0;
    string s="";

    do{
        if(!k.odczytzpliku)
        {
            system( "cls" );
            cout<<"podaj id"<<endl;
        }
        if (!str) {

            str.clear();
            str.ignore(1024,'\n');
        };
        str >> x;
    } while (!str);
    k.setId(x);

    do{
        if(!k.odczytzpliku)
        {
            system( "cls" );
            cout<<"podaj imie"<<endl;
        }
        if (!str) {
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setImie(s);

    do{
        if(!k.odczytzpliku)
        {
            system( "cls" );
            cout<<"podaj nazwisko"<<endl;
        }
        if (!str) {
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setNazwisko(s);


    return str;
}


class Kucharz:public Pracownik
{

    public:
    Kucharz()
    {
        imie = "";
        nazwisko = "";
        id = 0;
        odczytzpliku = false;
    }

    Kucharz(int Id, string Imie, string Nazwisko)
    {
        imie = Imie;
        nazwisko = Nazwisko;
        id = Id;
        odczytzpliku = false;
    }

    virtual void wykonaj()
    {
        //zzadanie czy morzna wykonac
        //jesli tak wykonaj
        //else odłurz na odp linie pobiesz nastepne zadanie
    }

    friend ostream& operator<<(ostream&, const Kucharz&);
    friend istream& operator>>(istream&,  Kucharz&);


};

ostream& operator<<(ostream& str, const Kucharz& k) {
    return str << k.id<<" "<<k.imie<< " " << k.nazwisko <<endl;
}

istream& operator>>(istream& str,  Kucharz& k)
{
    int x=0;
    string s="";

    do{
        if(!k.odczytzpliku)
        {
            system( "cls" );
            cout<<"podaj id"<<endl;
        }
        if (!str) {

            str.clear();
            str.ignore(1024,'\n');
        };
        str >> x;
    } while (!str);
    k.setId(x);

    do{
        if(!k.odczytzpliku)
        {
            system( "cls" );
            cout<<"podaj imie"<<endl;
        }
        if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setImie(s);

    do{
        if(!k.odczytzpliku)
        {
            system( "cls" );
            cout<<"podaj nazwisko"<<endl;
        }
        if (!str) {
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setNazwisko(s);
    if(!k.odczytzpliku)
    {
            system( "cls" );
    }
    return str;
}

class Stolik
{
    int id;
    ListaZyczen lista;
    bool zajenty;
    public:
    Stolik()
    {
        id=0;
        zajenty = false;
    }
    Stolik(int Id)
    {
        id=Id;
        zajenty = false;
    }
    void setListeZyczen(ListaZyczen Lista)
    {
        lista = Lista;
        zajenty = true;
    }
    void zwolnij(){zajenty = false;}
    bool czyzajety(){return zajenty;}
    void wyswietl()
    {
        cout<<"Stolik "<<id<<endl;
        if(zajenty)
        {
            lista.wyswietl();
        }
        else
        {
            cout<<"wolny"<<endl;
        }

    }

};

class Obsluga
{

    vector < Kelner > listaKelnerow;
    vector < Kucharz > listaKurzarzow;
    vector < Stolik > listaStolikow;
    Menu menu;

//    Stolik * listaStolikow;
//    KolejkaPriorytetowaZamowien kolejkaZamowien;
 //   KolejkaPriorytetowaPzycji kolejkaPozycjiDoWykonania;
  //  KolejkaPriorytetowaPzycji kolejkaPozycjiDoZaniesienia;
  //  KolejkaPriorytetowaZadan kolejkaZamowienDoWykonania;

public:
    Obsluga()
    {

    }
    void initStoliki()
    {
        for(int i=0;i<IloscStolikow;i++)
       {
           Stolik s(i);
           listaStolikow.push_back(s);
       }
       ListaZyczen l;
       listaStolikow[3].setListeZyczen(l);
    }

    void wyswietlStoliki()
    {
        for( int i = 0; i < listaStolikow.size(); i++ )
        {

         listaStolikow[ i ].wyswietl() ;
        }
    }


    bool zapiszKelnerow()
    {
        ofstream plik(PKelnerzy);
        plik<<listaKelnerow.size()<<endl;

         for( int i = 0; i < listaKelnerow.size(); i++ )
        {
        plik << listaKelnerow[ i ] ;
        }
        plik.close();

    }
     bool wczytajKelnerow()
    {
        ifstream plik(PKelnerzy);
        int x=0;

        do{
            system( "cls" );

         if (!plik) {
                // wazna kolejnosc!
                plik.clear();
                plik.ignore(1024,'\n');
            };
            plik >> x;
        } while (!plik||x<1);

       for(int i=0;i<x;i++)
       {
           Kelner k;
           k.setOdczytzpliku(true);
           plik>>k;
           listaKelnerow.push_back(k);
       }
        plik.close();

    }
     void wpiszKelnerow()
    {
        int x=0;

        do{
            system( "cls" );
            cout<<"ilu kelnerow chcesz wpisac"<<endl;
         if (!cin) {
                // wazna kolejnosc!
                cin.clear();
                cin.ignore(1024,'\n');
            };
            cin >> x;
        } while (!cin||x<1);

       for(int i=0;i<x;i++)
       {
           Kelner k;
           k.setOdczytzpliku(false);
           cin>>k;
           listaKelnerow.push_back(k);
       }
            system( "cls" );
    }

    void wyswietlListeKelnerow()
    {
        cout<<"lista Kelnerow"<<endl;
        for( int i = 0; i < listaKelnerow.size(); i++ )
        {
        cout << listaKelnerow[ i ] ;
        }
    }

     bool zapiszKucharzow()
    {
        ofstream plik(PKucharze);
        plik<<listaKurzarzow.size()<<endl;

         for( int i = 0; i < listaKurzarzow.size(); i++ )
        {
        plik << listaKurzarzow[ i ] ;
        }
        plik.close();

    }
     bool wczytajKucharzow()
    {
        ifstream plik(PKucharze);
        int x=0;

        do{


         if (!plik) {
                // wazna kolejnosc!
                plik.clear();
                plik.ignore(1024,'\n');
            };
            plik >> x;
        } while (!plik||x<1);

       for(int i=0;i<x;i++)
       {
           Kucharz k;
           k.setOdczytzpliku(true);
           plik>>k;
           listaKurzarzow.push_back(k);
       }
        plik.close();

    }
     void wpiszkucharzow()
    {
        int x=0;

        do{
            system( "cls" );
            cout<<"ilu Kucharzow chcesz wpisac"<<endl;
         if (!cin) {
                // wazna kolejnosc!
                cin.clear();
                cin.ignore(1024,'\n');
            };
            cin >> x;
        } while (!cin||x<1);

       for(int i=0;i<x;i++)
       {
           Kucharz k;
           k.setOdczytzpliku(false);
           cin>>k;
           listaKurzarzow.push_back(k);
       }

            system( "cls" );
    }

    void wyswietlListekucharzow()
    {
        cout << "lista Kucharzow"<<endl;
        for( int i = 0; i < listaKurzarzow.size(); i++ )
        {
        cout << listaKurzarzow[ i ] ;
        }
    }

};
int menu()
{

    int x;

    do {
    system( "cls" );
    cout<< ("_____________MENU_______________")<<endl;
    cout<< ("1 - wczytaj dane dnia")<<endl;
    cout<< ("2 - zapisz dane dnia")<<endl;
    cout<< ("3 - edytuj dane dnia")<<endl;
    cout<< ("4 - przesun czas o 1")<<endl;
    cout<< ("5 - przesun czas o -1")<<endl;
    cout<< ("6 - przesun czas o ")<<endl;
    cout<< ("0 - koniec")<<endl;


        if (!cin) {
            // wazna kolejnosc!
            cin.clear();
            cin.ignore(1024,'\n');
        };
        cout << "Podaj liczbe: ";
        cin >> x;
    } while (!cin);

    return x;
}


int main() {

int x;
    Obsluga o;
    Pozycja p;
    Menu m;
    m.wyswietl();
    while(p.czyMoznaWykonac())
    {
        p.wykonaj();
        p.wyswietl();
    }
    p.wyswietl();
    o.initStoliki();
    o.wyswietlStoliki();

     cin>>x;
    o.wczytajKelnerow();
    o.wyswietlListeKelnerow();


    o.wczytajKucharzow();
    o.wyswietlListekucharzow();
    cin>>x;

    //kelnerzy
    o.wpiszKelnerow();
    o.wyswietlListeKelnerow();
    o.zapiszKelnerow();
    o.wczytajKelnerow();
    o.wyswietlListeKelnerow();
    //kucharze

    o.wpiszkucharzow();
    o.wyswietlListekucharzow();
    o.zapiszKucharzow();
    o.wczytajKucharzow();
    o.wyswietlListekucharzow();


   /* Kelner k(1,"Adam", "Slodowy");
    //cin>>k;
    cout<<k;

    ifstream plik("plik.txt");
    plik>>k;
    plik.close();
     cout<<k;

TKolejkaPriorytetowaOsob kolejkaPriorytetowa;
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Nazwisko", 1, "Pierwszy" );
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Nazwisko", 3, "Drugi" );
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Nazwisko", 2, "Trzeci" );
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Ziomek", 4, "Czwarty" );

    while( kolejkaPriorytetowa.size() > 0 )
    {
        SOsoba odczytana = kolejkaPriorytetowa.top();
        kolejkaPriorytetowa.pop();
        std::cout << odczytana.imie << "; " << odczytana.nazwisko << "; " << odczytana.kolejnosc << "; " << odczytana.inneDane << "; " << std::endl;
    }

    getch();


    int decyzja = 0;
    do{
        decyzja = menu();
    }while(decyzja!=0);
//    wczytaj();

   /* int b=0;
    Pozycja t[] = {  Pozycja("Pizza",1,100,19.33), Pozycja("Pizza",1,100,19.33),
    Pozycja("Pizza",1,100,19.33), Pozycja("Pizza",1,100,19.33),  };
        //cin>>t[1];
        ofstream plik("plik.txt");
      //  cin>>b;


    for (int i = 0; i < 4; i++)
    {

        cout << t[i] << endl;
        plik << t[i] << endl;
    }
        plik.close();

    int tab[] = { 97, 105, 115, 255, 111 },k;

    int size = sizeof(tab)/sizeof(tab[0]);

    cout << "Tablica o  wymiarze: " << size << endl;
    for (int i = 0; i < size; ++i)
        cout << tab[i] << " ";
    cout << endl;

    ofstream file_out("file.dat",ios::out|ios::binary);
    if (! file_out ) {
        cout << "Nie mozna otworzyc file_out" << endl;
        return -1;
    }

    file_out.write((char*)tab, sizeof(tab));
    file_out.close();

    fstream file("file.dat",ios::in|ios::out|ios::binary);
    if (! file ) {
        cout << "Nie mozna otworzyc file" << endl;
        return -1;
    }

    file.seekg(0,ios::end);
    streamsize len = file.tellg();
    cout << "Plik ma dlugosc " << len << " bajtow\n";
    file.seekg(0);

    cout << "Kolejne bajty zawieraja:" << endl;
    while ( (k = file.get()) != EOF )
        cout << k << " ";
    cout << endl;

    file.clear(); // <-- KONIECZNE !!!

    file.seekg(4);
    file.read((char*)&k,4);
    cout << "Integer od pozycji 4: " << k << endl;

    file.seekp(12);
    file.write((char*)&k,4);

    file.seekg(0);
    cout << "Kolejne bajty pliku teraz zawieraja:" << endl;
    while ( (k = file.get()) != EOF )
        cout << k << " ";
    cout << endl;

    file.close();

    const int DIM = 80;
    char      name[DIM];
    ifstream  inplik;
    double    x;

    do {
        cout << "Plik wejsciowy: ";
        cin.getline(name, DIM);

        inplik.clear();
        inplik.open(name);
    } while (!inplik);

    cout << "Plik = " << name << endl;
    inplik.close();


    do {
        if (!cin) {
            // wazna kolejnosc!
            cin.clear();
            cin.ignore(1024,'\n');
        };
        cout << "Podaj liczbe: ";
        cin >> x;
    } while (!cin);

    cout << "Liczba = " << x << endl;*/
}
