#ifndef LISTALOCALESCLASS_H
#define LISTALOCALESCLASS_H

#include "nodolocalclass.h"

class ListaLocalesClass
{
private:
    NodoLocalClass *cab;
    int numeroLocales;
public:
    ListaLocalesClass();
    ~ListaLocalesClass();

    NodoLocalClass *getCab() const;
    void setCab(NodoLocalClass *value);
    int getNumeroLocales() const;
    void setNumeroLocales(int value);
    void insertarLocal(LocalClass *local);
    void cambiarValores(LocalClass *local);
};

#endif // LISTALOCALESCLASS_H
