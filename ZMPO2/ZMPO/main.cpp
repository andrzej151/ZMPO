#include <iostream>
#include <string>
#include <queue>
#include "Produkt.h"

using namespace std;
/*
class Osoba {
    string nazw;
    int    wiek;
public:
    Osoba(string nazw, int wiek)
        : nazw(nazw), wiek(wiek)
    { }

     // ... inne skladowe

    friend ostream& operator<<(ostream&, const Osoba&);
};

ostream& operator<<(ostream& str, const Osoba& k) {
    return str << k.nazw << " (" << k.wiek << " lat)";
}*/

int main() {
    Produkt t[] = {  Produkt("Pizza",11, 1, 60), Produkt("Pizza",13, 2, 60),
                    Produkt("Chleb",11, 3, 60),Produkt("Pizza",15, 4, 60)};

    for (int i = 0; i < 4; i++)
        cout << t[i] << endl;
}
