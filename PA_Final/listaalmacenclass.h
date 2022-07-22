#ifndef LISTAALMACENCLASS_H
#define LISTAALMACENCLASS_H
#include "nodoalmacenclass.h"

class ListaAlmacenClass
{
    NodoAlmacenClass *cab;
    int numeroAlmacenes;
public:
    ListaAlmacenClass();
    ~ListaAlmacenClass();
    void insertarAlmacen(AlmacenClass *almacen);
    NodoAlmacenClass *getCab() const;
    void setCab(NodoAlmacenClass *value);
    int getNumeroAlmacenes() const;
    void setNumeroAlmacenes(int value);
    void cambiarValorAlmacen(AlmacenClass *almacen);
};

#endif // LISTAALMACENCLASS_H

