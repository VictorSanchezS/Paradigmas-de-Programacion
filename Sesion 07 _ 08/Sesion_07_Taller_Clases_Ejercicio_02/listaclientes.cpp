#include "listaclientes.h"


Cliente *ListaClientes::getCab() const
{
    return cab;
}

void ListaClientes::setCab(Cliente *value)
{
    cab = value;
}

int ListaClientes::getNumeroClientes() const
{
    return numeroClientes;
}

void ListaClientes::setNumeroClientes(int value)
{
    numeroClientes = value;
}

int ListaClientes::getMax() const
{
    return max;
}

void ListaClientes::setMax(int value)
{
    max = value;
}
ListaClientes::ListaClientes()
{
    this->cab = new Cliente();
    this->max = 0;
    this->numeroClientes = 0;
}

ListaClientes::~ListaClientes()
{
    
}

