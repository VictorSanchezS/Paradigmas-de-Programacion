#include "nodoproducto.h"


NodoProducto *NodoProducto::getSgte() const
{
    return sgte;
}

void NodoProducto::setSgte(NodoProducto *value)
{
    sgte = value;
}

Producto *NodoProducto::getInfo() const
{
    return info;
}

void NodoProducto::setInfo(Producto *value)
{
    info = value;
}
NodoProducto::NodoProducto()
{

}

NodoProducto::~NodoProducto()
{

}

