#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>

class main
{
    public:
        main();
        virtual ~main();

    protected:

    private:
        void dodajKucharza();
        void edytujKucharza();
        void usunKucharza();

        void dodajKelnera();
        void edytujKelnera();
        void usunKelnera();

        void dodajStolik();
        void usunStolik(int id);
};

#endif // MAIN_H
