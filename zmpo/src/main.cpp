#include "main.h"

main::main()
{
    int x, y;
    x = 10;
    y = 10;
    gotoxy(x, y);
    printf("C program to change cursor position.");
    getch();
    return 0;
}

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
