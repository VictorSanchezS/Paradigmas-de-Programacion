#include "nodoalmacenclass.h"


AlmacenClass *NodoAlmacenClass::getAlmacen() const
{
    return almacen;
}

void NodoAlmacenClass::setAlmacen(AlmacenClass *value)
{
    almacen = value;
}

NodoAlmacenClass *NodoAlmacenClass::getSgte() const
{
    return sgte;
}

void NodoAlmacenClass::setSgte(NodoAlmacenClass *value)
{
    sgte = value;
}
NodoAlmacenClass::NodoAlmacenClass()
{
    
}

NodoAlmacenClass::~NodoAlmacenClass()
{
    
}

