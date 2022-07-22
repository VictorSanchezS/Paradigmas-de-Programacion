#include "nodoloteclass.h"


LoteVacunasClass *NodoLoteClass::getLoteV() const
{
    return loteV;
}

void NodoLoteClass::setLoteV(LoteVacunasClass *value)
{
    loteV = value;
}

NodoLoteClass *NodoLoteClass::getSgte() const
{
    return sgte;
}

void NodoLoteClass::setSgte(NodoLoteClass *value)
{
    sgte = value;
}
NodoLoteClass::NodoLoteClass()
{

}

NodoLoteClass::~NodoLoteClass()
{

}

