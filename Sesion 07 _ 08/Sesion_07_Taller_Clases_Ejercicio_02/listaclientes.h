#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H
#include <cliente.h>

class ListaClientes
{
private:
    Cliente *cab;
    int numeroClientes;
    int max;
public:
    ListaClientes();
    ~ListaClientes();
    Cliente *getCab() const;
    void setCab(Cliente *value);
    int getNumeroClientes() const;
    void setNumeroClientes(int value);
    int getMax() const;
    void setMax(int value);
};

#endif // LISTACLIENTES_H
