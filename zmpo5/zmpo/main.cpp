#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Pozycja {
    string nazwa;
public:    int    id, czas;
    float cena;
public:
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


    friend ostream& operator<<(ostream&, const Pozycja&);
    friend istream& operator>>(istream&, const Pozycja&);
};

ostream& operator<<(ostream& str, const Pozycja& k) {
    return str << k.id<<" "<<k.nazwa << " " << k.cena << "PLN (" << k.czas << ")";
}

istream& operator>>(istream& str,  Pozycja& k) {

    char  w[10] ;
    int a=0;
    cout<<"podaj ";
    str>>a;
    k.setId(a);
    cout<<k.id<<endl;
    return str;
}

int main() {
    int b=0;
    Pozycja t[] = {  Pozycja("Pizza",1,100,19.33), Pozycja("Pizza",1,100,19.33),
    Pozycja("Pizza",1,100,19.33), Pozycja("Pizza",1,100,19.33),  };
        cin>>t[1];
        ofstream plik("plik.txt");
        cin>>b;





    for (int i = 0; i < 4; i++)
        plik << t[i] << endl;

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
