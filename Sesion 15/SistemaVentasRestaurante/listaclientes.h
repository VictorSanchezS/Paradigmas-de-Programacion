#include "iostream"
#include "cliente.h"

#define inc 3

using namespace std;

#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H


class ListaClientes
{
private:
    int max;
    int nCli;
    Cliente *cab;

public:
    ListaClientes();
    ~ListaClientes();
    int getMax() const;
    void setMax(int value);
    int getNCli() const;
    void setNCli(int value);
    Cliente *getCab() const;
    void setCab(Cliente *value);
    void crecer();
    void insertarCliente(Cliente *c);
    void cargarPrevia();
};

#endif // LISTACLIENTES_H
