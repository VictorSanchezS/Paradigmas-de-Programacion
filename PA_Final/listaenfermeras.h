#ifndef LISTAENFERMERAS_H
#define LISTAENFERMERAS_H
#include "nodoenfermeraclass.h"

class ListaEnfermeras
{
    NodoEnfermeraClass *cab;
    int numeroEnfermeras;
public:
    ListaEnfermeras();
    ~ListaEnfermeras();
    void insertarEnfermera(EnfermeraClass *enfermera);
    NodoEnfermeraClass *getCab() const;
    void setCab(NodoEnfermeraClass *value);
    int getNumeroEnfermeras() const;
    void setNumeroEnfermeras(int value);
};

#endif // LISTAENFERMERAS_H
