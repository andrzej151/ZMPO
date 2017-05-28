#include <iostream>

using namespace std;

int main()
{
    int[] tab = new int[10];
    for (int i=0;i<10;i++)
    {
        tab[i]=i;
        cout<<tab[i]<<'/t';
    }
    cout << "Good bye world!" << endl;
    return 0;
}
