// main.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"


#include <iostream>

using namespace std;

int main()
{
	int tab[10];
	for (int i = 0; i<10; i++)
	{
		tab[i] = i;
		cout << tab[i] << '\t';
	}
	cout << "Good bye world!" << endl;
	getchar();
	return 0;
}


