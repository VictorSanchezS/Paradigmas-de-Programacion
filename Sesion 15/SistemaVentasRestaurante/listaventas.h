#include "iostream"
#include "ventas.h"

using namespace std;

#ifndef LISTAVENTAS_H
#define LISTAVENTAS_H


class ListaVentas
{
private:
    int nVentas;
    int max;
    Ventas *cab;
public:
    ListaVentas();
    ~ListaVentas();
    int getNVentas() const;
    void setNVentas(int value);
    int getMax() const;
    void setMax(int value);
    Ventas *getCab() const;
    void setCab(Ventas *value);
    void crecer();
    void insertarVenta(Ventas *c);
};

#endif // LISTAVENTAS_H
