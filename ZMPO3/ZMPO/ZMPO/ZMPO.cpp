// ZMPO.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
using namespace std;

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
}

int main() {
	Osoba t[] = { Osoba("Ola",18), Osoba("Ula",26),
		Osoba("Ala",35), Osoba("Ela",11) };

	for (int i = 0; i < 4; i++)
		cout << t[i] << endl;
}