#ifndef NODO_H
#define NODO_H

#include<iostream>
using namespace std;

class Nodo
{
    public:
        int valor;
        Nodo* siguiente;
        Nodo(int valor);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H