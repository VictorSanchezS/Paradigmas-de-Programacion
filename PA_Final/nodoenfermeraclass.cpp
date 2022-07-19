#include "nodoenfermeraclass.h"


EnfermeraClass *NodoEnfermeraClass::getEnfermera() const
{
    return enfermera;
}

void NodoEnfermeraClass::setEnfermera(EnfermeraClass *value)
{
    enfermera = value;
}

NodoEnfermeraClass *NodoEnfermeraClass::getSgte() const
{
    return sgte;
}

void NodoEnfermeraClass::setSgte(NodoEnfermeraClass *value)
{
    sgte = value;
}
NodoEnfermeraClass::NodoEnfermeraClass()
{

}

NodoEnfermeraClass::~NodoEnfermeraClass()
{

}

