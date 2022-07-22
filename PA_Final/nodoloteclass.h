#ifndef NODOLOTECLASS_H
#define NODOLOTECLASS_H
#include "lotevacunasclass.h"

class NodoLoteClass
{
private:
    LoteVacunasClass *loteV;
    NodoLoteClass *sgte;
public:
    NodoLoteClass();
    ~NodoLoteClass();
    LoteVacunasClass *getLoteV() const;
    void setLoteV(LoteVacunasClass *value);
    NodoLoteClass *getSgte() const;
    void setSgte(NodoLoteClass *value);
};

#endif // NODOLOTECLASS_H
