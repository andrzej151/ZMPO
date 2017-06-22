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


void Symulacja::init(vector<Kelner>& ke, vector<Kucharz>& ku, vector<Stolik>& st, queue<ListaZyczen>& ko)
{
    kelnerzy = ke;
    kucharze = ku;
    stoliki = st;
    kolejka = ko;

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
////////////////wyswietlanie
/*
void Symulacja::wyswietlListeKucharzy()
{
    cout << "lista Kucharzy"<<endl;
    for( int i = 0; i < kucharze.size(); i++ )
    {
        cout << kucharze[ i ] ;
    }
}

void Symulacja::wyswietlListeKelnerow()
{
    cout<<"lista Kelnerow"<<endl;
    for( unsigned int i = 0; i < kelnerzy.size(); i++ )
    {
        cout << kelnerzy[ i ] ;
    }
}
*/




void Symulacja::wyswietl(int x)
{

}
/////////////////////////////////////
string Symulacja::nowyKlient()
{
    int i = 0;

    while(i<stoliki.size()&&!stoliki[i].getStan())
    {
        i++;
    }
    if(i<stoliki.size())
    {
        string komunikat= "dodano kilienta do stolika ";
<<<<<<< HEAD
        if( !kolejka.empty() )
        {
            stoliki.at(i).setListeZyczen(kolejka.front());
            kolejka.pop();
            //Dziala, ale stoliki zajmowane s¹ 0,1,3,4,5. Stolik 2 nie ma statusu?
=======
        if( kolejka.empty() == false )
        {

///////////////////////TTTTTTTTTTTUUUUUUUUUUUUUUUUUJJJJJJJest problem
///            stoliki[i].setListeZyczen(kolejka.pop());
>>>>>>> c049e6428f21ca71cf79ddb5098d1f6547fcd605

            ostringstream ss;
            ss << i;
            komunikat+= ss.str();
        }
        else
        {
            komunikat = "kolejka pusta ";
        }
        wyswietl(1);

     return komunikat;
    }
    else
    {
        return "nie ma wolnych stolikow";
    }
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
