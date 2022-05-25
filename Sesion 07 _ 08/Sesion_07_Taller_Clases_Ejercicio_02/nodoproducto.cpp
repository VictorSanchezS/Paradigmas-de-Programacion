#include "nodoproducto.h"


Producto *NodoProducto::getProducto() const
{
    return producto;
}

void NodoProducto::setProducto(Producto *value)
{
    producto = value;
}

NodoProducto *NodoProducto::getSgte() const
{
    return sgte;
}

void NodoProducto::setSgte(NodoProducto *value)
{
    sgte = value;
}

NodoProducto *NodoProducto::getAnt() const
{
    return ant;
}

void NodoProducto::setAnt(NodoProducto *value)
{
    ant = value;
}
NodoProducto::NodoProducto()
{
    this->producto = new Producto();
    this->sgte = NULL;
    this->ant = NULL;
}

NodoProducto::~NodoProducto()
{
    
}

