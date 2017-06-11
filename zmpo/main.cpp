#include<iostream>
#include<cstdlib>
using namespace std;

class kolejka{
  public:
    kolejka(){poczatek=koniec=0;f=1;}
    ~kolejka() //zwolnienie pamiêci dla elementów kolejki
    {
      while(koniec-poczatek>0){
        el = p;
        p = p->nastepny;
        delete el;
        ++poczatek;
      }
      if(!f)
        delete p;
    }
    unsigned int size(){return koniec-poczatek;}//liczba elementów w kolejce
    void push_back(int x)//dodanie elementu na koniec kolejki
    {
      if(f)//jesli pierwszy element wrzucamy do kolejki
      {
        k = new wezel;    //utworzenie elementu ostatniego
        k -> element = x; //przypisanie do niego wartosci
        p = new wezel;     //utworzenei elemntu pierwszego
        p -> nastepny = k;  //element pierwszy wskazuje na ostatni
        f = 0;
      }
      else
      {
        el = new wezel;    //utworzenie nowego elementu kolejki
        el -> element = x;  //przypisanie do niego wartosci
        k -> nastepny = el;  //ostatni dotychczas element wskazuje na utworzony
        k = el;        //element utworzony staje siê ostatnim
      }
      ++koniec;
    }
    int pop_back()// usuniêcie pierwszego elementu z kolejki i zwrócenie 1 gdy ok, 0 - gdy nie ma nic do usuniêcia
    {
      if(koniec-poczatek==0)return 0; //gdy nie ma nic w kolejce zwracamy 0
      el = p;
      p = p->nastepny; //przejscie na nastêpny element kolejki
      delete el;    //usuniêcie pierwszego elementu w kolejce
      ++poczatek;
      return 1;
    }
    int first() //zwrócenie pierwszego elementu w kolejce
    {
      return p->nastepny->element;
    }
    int last() //wyznaczenie ostatniego elementu w kolejce
    {
      return k->element;
    }
  private:
    bool f; //flaga okreslaj¹ca, czy w kolejce cos ju¿ siê pojawi³o
    struct wezel{
      int element;
      wezel *nastepny;
    };
    unsigned int poczatek, koniec; //pocz¹tek i koniec kolejki - index
    wezel *p,*k,*el; //poczatek, koniec,
};

int main()
{
  kolejka queue; //utworzenie kolejki

  queue.push_back(23); //dodaj do kolejki 23
  queue.push_back(43); //dodaj do kolejki 43
  queue.push_back(45); //dodaj do kolejki 45
  cout<<"Liczba elementów w kolejce: "<<queue.size()<<endl; //mamy 3 elementy
  cout<<"Pierwszy element kolejce: "<<queue.first()<<endl; //wypisanie 23
  cout<<"Ostatni element kolejce: "<<queue.last()<<endl;   //wypisanie 45
  queue.pop_back(); //usuniêcie 23
  queue.pop_back(); //usuniêcie 43
  cout<<"Liczba elementów w kolejce: "<<queue.size()<<endl; //mamy 1 element
  queue.pop_back(); //usuniêcie 45
  cout<<"Liczba elementów w kolejce: "<<queue.size()<<endl; //0 elementów w kolejce
  if(!queue.pop_back())
    cout<<"Kolejka jest pusta, nie ma nic do usuwania"<<endl;

  system("pause");
  return 0;
}
