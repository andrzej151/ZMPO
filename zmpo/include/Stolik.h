#ifndef STOLIK_H
#define STOLIK_H


class Stolik
{
    public:
        Stolik();
        virtual ~Stolik();
        void edytuj();

        void setStan(bool);
        bool getStan();

    protected:

    private:
        bool czyWolny;
};

#endif // STOLIK_H
