#include "listaproductos.h"


NodoProducto *ListaProductos::getCab() const
{
    return cab;
}

void ListaProductos::setCab(NodoProducto *value)
{
    cab = value;
}

int ListaProductos::getCantidadProductos() const
{
    return cantidadProductos;
}

void ListaProductos::setCantidadProductos(int value)
{
    cantidadProductos = value;
}
ListaProductos::ListaProductos()
{
    this->cab = new NodoProducto();
    this->cantidadProductos = 0;
}

ListaProductos::~ListaProductos()
{
    
}

