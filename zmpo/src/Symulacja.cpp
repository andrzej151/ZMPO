#include "Symulacja.h"

Symulacja::Symulacja()
{
    //ctor
}

Symulacja::~Symulacja()
{
    //dtor
}

void Symulacja::clear_screen()
{
#ifdef __linux__
std::system ("clear");
#elif _WIN32
std::system("cls");
#endif
}


void Symulacja::init(vector<Kelner>&, vector<Kucharz>&, vector<Stolik>&, queue<ListaZyczen>&)
{


}

int Symulacja::menu()
{
    int x;
    do{
        clear_screen();
        cout<<"1 - nastepny klient"<<endl;
        cout<<"2 - nastepny krok"<<endl;
        cout<<"0 - koniec"<<endl;


         if (!cin) {
            // wazna kolejnosc!
            cin.clear();
            cin.ignore(1024,'\n');
        };
        cin>>x;
       }while(!cin|x<0|x>2);
    return x;
}

string Symulacja::nowyKlient()
{
    return "dodano ";
}

string Symulacja::nowyStan()
{
    return "wykonano ";
}

void Symulacja::wykonaj(int x)
{
    int c;
    string komunikat;
    switch(x)
    {
        case 1 :
            {
                komunikat = nowyKlient();
                clear_screen();
                cout<<komunikat;
                getch();
                clear_screen();
            }break;
         case 2 :
            {
                komunikat = nowyStan();
                clear_screen();
                cout<<komunikat;
                getch();
                clear_screen();
            }break;

    }

}
