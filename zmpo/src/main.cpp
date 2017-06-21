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
//    wyswietlListeKelnerow();
//    cin>>x;

    wczytajKucharzy();
//    wyswietlListekucharzow();
//    cin>>x;

    //kelnerzy
//    wpiszKelnerow();
//    wyswietlListeKelnerow();
//    zapiszKelnerow();
//    wczytajKelnerow();
//    wyswietlListeKelnerow();
    //kucharze

//    wpiszkucharzow();
//    wyswietlListekucharzow();
//    zapiszKucharzy();
//    wczytajKucharzy();
//    wyswietlListekucharzow();

    TUI();
}

void Main::clear_screen()
{
#ifdef __linux__
    std::system ("clear");
#elif _WIN32
    std::system("cls");
#else cout << endl;
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
        printf("%3d - %-20s\n",1,"dodaj");
        printf("%3d - %-20s\n",2,"pokaz");
        printf("%3d - %-20s\n",3,"edytuj");
        printf("%3d - %-20s\n",4,"usun");

        printf("\n\n * KELNERZY\n");
        printf("%3d - %-20s\n",5,"dodaj");
        printf("%3d - %-20s\n",6,"pokaz");
        printf("%3d - %-20s\n",7,"edytuj");
        printf("%3d - %-20s\n",8,"usun");

        printf("\n\n * STOLIKI\n");
        printf("%3d - %-20s\n",9,"dodaj");
        printf("%3d - %-20s\n",10,"pokaz");
        printf("%3d - %-20s\n",11,"edytuj");
        printf("%3d - %-20s\n",12,"usun");

        cin >> x;

        switch(x)
        {
            /** Kucharze **/
            case  1 : /** dodaj **/
                clear_screen();
                do
                {
                    printf("\n * * Podaj imie :\n");
                    cin >> y;
                } while (y != "");

                do
                {
                    printf("\n * * Podaj nazwisko :\n");
                    cin >> z;
                } while (z != "");

                dodajKucharza(Kucharz(kucharze.at(kucharze.size()-1).getId()+1,y,z));
                x = -1; break;

            case  2 : /** pokaz **/
                clear_screen();
                do
                {
                    printf("\n * * Ktorego kucharza chcesz zobaczyc?\n");
                    cin >> x;
                    if (x > 0 && x <= kucharze.size())
                    {
                        pokazKucharza(x - 1);
                        printf("\n Kucharz pokazany pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas pokazywania.\n");
                } while (x != 0);
                x = -1; break;

            case  3 : /** edytuj **/
                clear_screen();
                do
                {
                    printf("\n * * Ktorego kucharza chcesz edytowac?\n");
                    cin >> x;
                    if (x > 0 && x <= kucharze.size())
                    {
                        edytujKucharza(x - 1);
                        printf("\n Kucharz edytowany pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas edytowania.\n");
                } while (x != 0);
                x = -1; break;

            case  4 : /** usun **/
                clear_screen();
                do
                {
                    printf("\n * * Ktorego kucharza chcesz usunac?\n");
                    cin >> x;
                    if (x > 0 && x <= kucharze.size())
                    {
                        usunKucharza(x - 1);
                        printf("\n Kucharz usuniety pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas usuwania.\n");
                } while (x != 0);
                x = -1; break;

            /** Kelnerzy **/
            case  5 : /** dodaj **/
                clear_screen();
                do
                {
                    printf("\n * * Podaj imie :\n");
                    cin >> y;
                } while (y != "");

                do
                {
                    printf("\n * * Podaj nazwisko :\n");
                    cin >> z;
                } while (z != "");

                dodajKelnera(Kelner(kelnerzy.at(kelnerzy.size()-1).getId()+1,y,z));
                x = -1; break;

            case  6 : /** pokaz **/
                clear_screen();
                do
                {
                    printf("\n * * Ktorego kelnera chcesz zobaczyc?\n");
                    cin >> x;
                    if (x > 0 && x <= kelnerzy.size())
                    {
                        pokazKelnera(x - 1);
                        printf("\n Kelner pokazany pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas pokazywania.\n");
                } while (x != 0);
                x = -1; break;

            case  7 : /** edytuj **/
                clear_screen();
                do
                {
                    printf("\n * * Ktorego kelnera chcesz edytowac?\n");
                    cin >> x;
                    if (x > 0 && x <= kelnerzy.size())
                    {
                        edytujKelnera(x - 1);
                        printf("\n Kelner edytowany pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas edytowania\n");
                } while (x != 0);
                x = -1; break;

            case  8 : /** usun **/
                clear_screen();
                do
                {
                    printf("\n * * Ktorego kelnera chcesz usunac?\n");
                    cin >> x;
                    if (x > 0 && x <= kelnerzy.size())
                    {
                        usunKelnera(x - 1);
                        printf("\n Kelner usuniety pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas usuwania.\n");
                } while (x != 0);
                x = -1; break;

            /** Stoliki **/
            case  9 : /** dodaj **/
                clear_screen();
                dodajStolik();
                x = -1; break;

            case 10 : /** pokaz **/
                clear_screen();
                do
                {
                    printf("\n * * Ktory stolik chcesz zobaczyc?\n");
                    cin >> x;
                    if (x > 0 && x <= stoliki.size())
                    {
                        pokazStolik(x - 1);
                        printf("\n Stolik pokazany pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas pokazywania.\n");
                } while (x != 0);
                x = -1; break;

            case 11 : /** edytuj **/
                clear_screen();
                do
                {
                    printf("\n * * Ktory stolik chcesz edytowac?\n");
                    cin >> x;
                    if (x > 0 && x <= stoliki.size())
                    {
                        edytujStolik(x - 1);
                        printf("\n Stolik edytowany pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas edytowania.\n");
                } while (x != 0);
                x = -1; break;

            case 12 : /** usun **/
                clear_screen();
                do
                {
                    printf("\n * * Ktory stolik chcesz usunac?\n");
                    cin >> x;
                    if (x > 0 && x <= stoliki.size())
                    {
                        usunStolik(x - 1);
                        printf("\n Stolik usuniety pomyslnie.\n");
                    }
                    else
                        printf("\n Blad podczas usuwania.\n");
                } while (x != 0);
                x = -1; break;
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
    cout << kucharze.at(id).toString();
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
    cout << kelnerzy.at(id).toString();
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
    cout << stoliki.at(id).toString();
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

bool Main::zapiszKucharzy()
{
    ofstream plik("kucharze.txt");
    plik<<kucharze.size()<<endl;

    for( int i = 0; i < kucharze.size(); i++ )
    {
        plik << kucharze[ i ] ;
    }
    plik.close();
}

bool Main::wczytajKucharzy()
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
        cout<<"ilu Kucharzy chcesz wpisac"<<endl;
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
    cout << "lista Kucharzy"<<endl;
    for( int i = 0; i < kucharze.size(); i++ )
    {
    cout << kucharze[ i ] ;
    }
}
