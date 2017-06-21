#include "Main.h"

struct SOsoba
{
    string imie;
    string nazwisko;
    int kolejnosc;
    string inneDane;
};

struct PorownajOsoby
{
    bool operator ()( const SOsoba & osoba1, const SOsoba & osoba2 )
    {
        //kolejnoœæ - rosnaco
        if( osoba1.kolejnosc > osoba2.kolejnosc ) return true;

        if( osoba1.kolejnosc < osoba2.kolejnosc ) return false;

        //nazwisko - rosnaco
        if( osoba1.nazwisko > osoba2.nazwisko ) return true;

        if( osoba1.nazwisko < osoba2.nazwisko ) return false;

        //imiê - malejaco
        if( osoba1.nazwisko < osoba2.nazwisko ) return true;

        if( osoba1.nazwisko > osoba2.nazwisko ) return false;

        return false;
    }
};

ostream& operator<<(ostream& str, const Kucharz& k) {
    return str << k.id<<" "<<k.imie<< " " << k.nazwisko <<endl;
}

ostream& operator<<(ostream& str, const Kelner& k) {
    return str << k.id<<" "<<k.imie<< " " << k.nazwisko <<endl;
}

istream& operator>>(istream& str,  Kucharz& k) {
int x=0;
string s="";

do{
        system( "cls" );
        cout<<"podaj id"<<endl;
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> x;
    } while (!str);
    k.setId(x);

do{
    system( "cls" );
        cout<<"podaj imie"<<endl;
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setImie(s);

    do{
        system( "cls" );
        cout<<"podaj nazwisko"<<endl;
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setNazwisko(s);
    system( "cls" );
    return str;
}

istream& operator>>(istream& str,  Kelner& k) {
int x=0;
string s="";

do{
        system( "cls" );
        cout<<"podaj id"<<endl;
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> x;
    } while (!str);
    k.setId(x);

do{
    system( "cls" );
        cout<<"podaj imie"<<endl;
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setImie(s);

    do{
        system( "cls" );
        cout<<"podaj nazwisko"<<endl;
     if (!str) {
            // wazna kolejnosc!
            str.clear();
            str.ignore(1024,'\n');
        };
        str >> s;
    } while (!str);
    k.setNazwisko(s);
    system( "cls" );
    return str;
}


Main::Main() {
    int x;
    wczytajKelnerow();
    wyswietlListeKelnerow();
    cin>>x;

    wczytajKucharzow();
    wyswietlListekucharzow();
    cin>>x;

    //kelnerzy
    wpiszKelnerow();
    wyswietlListeKelnerow();
    zapiszKelnerow();
    wczytajKelnerow();
    wyswietlListeKelnerow();
    //kucharze

    wpiszkucharzow();
    wyswietlListekucharzow();
    zapiszKucharzow();
    wczytajKucharzow();
    wyswietlListekucharzow();
}

void Main::clear_screen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}

void Main::WstawOsobe( TKolejkaPriorytetowaOsob & kp, const char * imie, const char * nazwisko, int kolejnosc, const char * inneDane )
{
    SOsoba nowaOsoba;
    nowaOsoba.imie = imie;
    nowaOsoba.nazwisko = nazwisko;
    nowaOsoba.kolejnosc = kolejnosc;
    nowaOsoba.inneDane = inneDane;
    kp.push( nowaOsoba );
}

void Main::TUI() //Text User Interface
{
    unsigned int x;
    string y;
    string z;

    do {
        clear_screen();

        printf("\n\n * KUCHARZE\n");
        printf("%3d - %50s",1,"dodaj");
        printf("%3d - %50s",2,"pokaż");
        printf("%3d - %50s",3,"edytuj");
        printf("%3d - %50s",4,"usuń");

        printf("\n\n * KELNERZY\n");
        printf("%3d - %50s",5,"dodaj");
        printf("%3d - %50s",6,"pokaż");
        printf("%3d - %50s",7,"edytuj");
        printf("%3d - %50s",8,"usuń");

        printf("\n\n * STOLIKI\n");
        printf("%3d - %50s",9,"dodaj");
        printf("%3d - %50s",10,"pokaż");
        printf("%3d - %50s",11,"edytuj");
        printf("%3d - %50s",12,"usuń");

        cin >> x;

        switch(x)
        {
            /** Kucharze **/
            case  1 :
                do
                {
                    printf("\n * * Podaj imię n");
                    cin >> y;
                } while (y != "");

                do
                {
                    printf("\n * * Podaj nazwisko n");
                    cin >> z;
                } while (z != "");

                dodajKucharza(Kucharz(kucharze.at(kucharze.size()-1).getId()+1,y,z));
                break;

            case  2 :
                do
                {
                    printf("\n * * Którego kucharza chcesz zobaczyć?");
                    cin >> x;
                    if (x > 0 && x <= kucharze.size())
                    {
                        pokazKucharza(x - 1);
                        printf("\n Kucharz pokazany pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas pokazywania");
                } while (x != 0);
                break;

            case  3 :
                do
                {
                    printf("\n * * Którego kucharza chcesz edytować?");
                    cin >> x;
                    if (x > 0 && x <= kucharze.size())
                    {
                        edytujKucharza(x - 1);
                        printf("\n Kucharz edytowany pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas edytowania");
                } while (x != 0);
                break;

            case  4 :
                do
                {
                    printf("\n * * Którego kucharza chcesz usunąć?");
                    cin >> x;
                    if (x > 0 && x <= kucharze.size())
                    {
                        usunKucharza(x - 1);
                        printf("\n Kucharz usunięty pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas usuwania");
                } while (x != 0);
                break;

            /** Kelnerzy **/
            case  5 :
                do
                {
                    printf("\n * * Podaj imię n");
                    cin >> y;
                } while (y != "");

                do
                {
                    printf("\n * * Podaj nazwisko n");
                    cin >> z;
                } while (z != "");

                dodajKelnera(Kelner(kelnerzy.at(kelnerzy.size()-1).getId()+1,y,z));
                break;

            case  6 :
                do
                {
                    printf("\n * * Którego kelnera chcesz zobaczyć?");
                    cin >> x;
                    if (x > 0 && x <= kelnerzy.size())
                    {
                        pokazKelnera(x - 1);
                        printf("\n Kelner pokazany pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas pokazywania");
                } while (x != 0);
                break;

            case  7 :
                do
                {
                    printf("\n * * Którego kelnera chcesz edytować?");
                    cin >> x;
                    if (x > 0 && x <= kelnerzy.size())
                    {
                        edytujKelnera(x - 1);
                        printf("\n Kelner edytowany pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas edytowania");
                } while (x != 0);
                break;

            case  8 :
                do
                {
                    printf("\n * * Którego kelnera chcesz usunąć?");
                    cin >> x;
                    if (x > 0 && x <= kelnerzy.size())
                    {
                        usunKelnera(x - 1);
                        printf("\n Kelner usunięty pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas usuwania");
                } while (x != 0);
                break;

            /** Stoliki **/
            case  9 :
                dodajStolik();
                break;

            case 10 :
                do
                {
                    printf("\n * * Który stolik chcesz zobaczyć?");
                    cin >> x;
                    if (x > 0 && x <= stoliki.size())
                    {
                        pokazStolik(x - 1);
                        printf("\n Stolik pokazany pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas pokazywania");
                } while (x != 0);
                break;

            case 11 :
                do
                {
                    printf("\n * * Który stolik chcesz edytować?");
                    cin >> x;
                    if (x > 0 && x <= stoliki.size())
                    {
                        edytujStolik(x - 1);
                        printf("\n Stolik edytowany pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas edytowania");
                } while (x != 0);
                break;

            case 12 :
                do
                {
                    printf("\n * * Który stolik chcesz usunąć?");
                    cin >> x;
                    if (x > 0 && x <= stoliki.size())
                    {
                        usunStolik(x - 1);
                        printf("\n Stolik usunięty pomyślnie");
                    }
                    else
                        printf("\n Błąd podczas usuwania");
                } while (x != 0);
                break;
        }
    } while (x != 0);
}

/****************************************************/
Main::~Main()
{
    //dtor
}

void Main::dodajKucharza(Kucharz kucharz)
{
    kucharze.push_back(kucharz);
}

void Main::pokazKucharza(int id)
{
    kucharze.at(id);
}

void Main::edytujKucharza(int id)
{
    kucharze.at(id).edytuj();
}

void Main::usunKucharza(int id)
{
    kucharze.erase(kucharze.begin()+id);
}

void Main::dodajKelnera(Kelner kelner)
{
    kelnerzy.push_back(kelner);
}

void Main::pokazKelnera(int id)
{
    kelnerzy.at(id);
}

void Main::edytujKelnera(int id)
{
    kelnerzy.at(id).edytuj();
}

void Main::usunKelnera(int id)
{
    kelnerzy.erase(kelnerzy.begin()+id);
}

void Main::dodajStolik()
{
    stoliki.push_back(Stolik());
}

void Main::pokazStolik(int id)
{
    stoliki.at(id);
}

void Main::edytujStolik(int id)
{
    stoliki.at(id).edytuj();
}

void Main::usunStolik(int id)
{
    stoliki.erase(stoliki.begin()+id);
}

/********************/

bool Main::zapiszKelnerow()
{
    ofstream plik("kelnerzy.txt");
    plik<<kelnerzy.size()<<endl;

    for( unsigned int i = 0; i < kelnerzy.size(); i++ )
    {
        plik << kelnerzy[ i ] ;
    }
    plik.close();
}

bool Main::wczytajKelnerow()
{
    ifstream plik("kelnerzy.txt");
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
        plik>>k;
        kelnerzy.push_back(k);
    }
    plik.close();
}

void Main::wpiszKelnerow()
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
        cin>>k;
        kelnerzy.push_back(k);
    }
}

void Main::wyswietlListeKelnerow()
{
    cout<<"lista Kelnerow"<<endl;
    for( int i = 0; i < kelnerzy.size(); i++ )
    {
        cout << kelnerzy[ i ] ;
    }
}

bool Main::zapiszKucharzow()
{
    ofstream plik("kucharze.txt");
    plik<<kucharze.size()<<endl;

    for( int i = 0; i < kucharze.size(); i++ )
    {
        plik << kucharze[ i ] ;
    }
    plik.close();
}

bool Main::wczytajKucharzow()
{
    ifstream plik("kucharze.txt");
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
        Kucharz k;
        plik>>k;
        kucharze.push_back(k);
    }
    plik.close();

}

void Main::wpiszkucharzow()
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
        cin>>k;
        kucharze.push_back(k);
    }
}

void Main::wyswietlListekucharzow()
{
    cout << "lista Kucharzow"<<endl;
    for( int i = 0; i < kucharze.size(); i++ )
    {
    cout << kucharze[ i ] ;
    }
}
