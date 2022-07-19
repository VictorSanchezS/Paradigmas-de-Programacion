#include "productosc.h"


int ProductosC::getCantidad() const
{
    return cantidad;
}

void ProductosC::setCantidad(int value)
{
    cantidad = value;
}

Producto *ProductosC::getPro() const
{
    return pro;
}

void ProductosC::setPro(Producto *value)
{
    pro = value;
}

ProductosC *ProductosC::getSgte() const
{
    return sgte;
}

void ProductosC::setSgte(ProductosC *value)
{
    sgte = value;
}
ProductosC::ProductosC()
{
    
}

ProductosC::~ProductosC()
{
    
}

