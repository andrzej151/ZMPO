#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
main()
{
long kwota[] = { 120, 1650000, 5200, 1490000123 };
for( int i = 0; i < 4; i++ )
{
    cout << "Rachunek nr ";
    cout.width( 2 );
    cout.fill( '*' );
    cout << i << " opiewa na sume :";
    cout.width( 10 );
    cout.fill( ' ' );
    cout << kwota[ i ] << " DM\n";
}

int i = 31;
cout << i << endl; //31
cout.setf( ios::hex, ios::basefield );
cout << i << endl; //1F
cout << hex << i << endl; //1F - drugi sposób (16)
cout << oct << i << endl; //37 - drugi sposób (8)
cout.setf( ios::dec, ios::basefield );
}
