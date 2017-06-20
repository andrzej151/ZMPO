#include "main.h"

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

//typedef priority_queue < SOsoba, vector < SOsoba >, PorownajOsoby > TKolejkaPriorytetowaOsob;

main::main() {

    TKolejkaPriorytetowaOsob kolejkaPriorytetowa;
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Nazwisko", 1, "Pierwszy" );
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Nazwisko", 3, "Drugi" );
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Nazwisko", 2, "Trzeci" );
    WstawOsobe( kolejkaPriorytetowa, "Imie", "Ziomek", 4, "Czwarty" );

    while( kolejkaPriorytetowa.size() > 0 )
    {
        SOsoba odczytana = kolejkaPriorytetowa.top();
        kolejkaPriorytetowa.pop();
        cout << odczytana.imie << "; " << odczytana.nazwisko << "; " << odczytana.kolejnosc << "; " << odczytana.inneDane << "; " << endl;
    }

    getch();


    int decyzja = 0;
    do{
        decyzja = TUI();
    }while(decyzja!=0);
    wczytaj();

    int b=0;
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

    cout << "Liczba = " << x << endl;
}

main::WstawOsobe(TKolejkaPriorytetowaOsob & kp, const char * imie, const char * nazwisko, int kolejnosc, const char * inneDane)
{
    SOsoba nowaOsoba;
    nowaOsoba.imie = imie;
    nowaOsoba.nazwisko = nazwisko;
    nowaOsoba.kolejnosc = kolejnosc;
    nowaOsoba.inneDane = inneDane;
    kp.push( nowaOsoba );
}

main::TUI() //Text User Interface
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

/****************************************************/
main::~main()
{
    //dtor
}

main::dodajKucharza(Kucharz kucharz)
{
    kucharze.push_back(kucharz);
}

main::pokazKucharza(int id)
{
    kucharze.at(id);
}

main::edytujKucharza(int id)
{
    kucharze.at(id).edytuj();
}

main::usunKucharza(int id)
{
    kucharze.erase(id)
}

main::dodajKelnera(Kelner kelner)
{
    kelnerzy.push_back(kelner);
}

main::pokazKelnera(int id)
{
    kelnerzy.at(id);
}

main::edytujKelnera(int id)
{
    kelnerzy.at(id).edytuj();
}

main::usunKelnera(int id)
{
    kelnerzy.erase(id);
}

main::dodajStolik(Stolik stolik)
{
    stoliki.push_back(stolik);
}

main::pokazStolik(int id)
{
    stoliki.at(id);
}

main::edytujStolik(int id)
{
    stoliki.at(id).edytuj();
}

main::usunStolik(int id)
{
    stoliki.erase(id);
}
