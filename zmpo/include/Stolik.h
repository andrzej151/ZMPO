#ifndef STOLIK_H
#define STOLIK_H


class Stolik
{
    public:
        Stolik();
        virtual ~Stolik();

        void zmienStan();
        bool pokazStan();

    protected:

    private:
        bool czyWolny;
};

#endif // STOLIK_H
