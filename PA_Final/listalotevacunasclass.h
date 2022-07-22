#ifndef LISTALOTEVACUNASCLASS_H
#define LISTALOTEVACUNASCLASS_H
#include "nodoloteclass.h"

class ListaLoteVacunasClass
{
    NodoLoteClass *cab;
    int numeroLotes;
public:
    ListaLoteVacunasClass();
    ~ListaLoteVacunasClass();
    NodoLoteClass *getCab() const;
    void setCab(NodoLoteClass *value);
    int getNumeroLotes() const;
    void setNumeroLotes(int value);
    void insertarLote(LoteVacunasClass *lote);
    void cambiarValor(LoteVacunasClass *lote);
};

#endif // LISTALOTEVACUNASCLASS_H
