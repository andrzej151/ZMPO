#ifndef KOLEJKA_H
#define KOLEJKA_H

template <typename T>
class Kolejka
{
 class Node{
    protected:
        T value;
        Node & next;

        Node();
        Node(T value);
        ~Node();
    };

    public:
        Kolejka();
        ~Kolejka();
        void push(T dana);
        T get();
        void clear();
        bool isEmpty();
        int size();
    protected:
    private:
        Node & head;
        int siz;

};

#endif // KOLEJKA_H
