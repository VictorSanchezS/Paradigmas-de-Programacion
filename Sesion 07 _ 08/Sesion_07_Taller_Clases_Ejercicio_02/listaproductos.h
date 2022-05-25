#ifndef LISTAPRODUCTOS_H
#define LISTAPRODUCTOS_H
#include <nodoproducto.h>

class ListaProductos
{
private:
    NodoProducto *cab;
    int cantidadProductos;
public:
    ListaProductos();
    ~ListaProductos();
    NodoProducto *getCab() const;
    void setCab(NodoProducto *value);
    int getCantidadProductos() const;
    void setCantidadProductos(int value);
};

#endif // LISTAPRODUCTOS_H
