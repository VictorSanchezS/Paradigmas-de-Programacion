#include <nodoproducto.h>
#include <producto.h>

#ifndef LISTAPRODUCTOS_H
#define LISTAPRODUCTOS_H


class ListaProductos
{
private:
    NodoProducto *cab;
    int nProd;
public:
    ListaProductos();
    ~ListaProductos();
    NodoProducto *getCab() const;
    void setCab(NodoProducto *value);
    int getNProd() const;
    void setNProd(int value);
    void insertarProducto( Producto *pro );
    void cambiarValores( Producto *pro );
    void cargarPrevia();
};

#endif // LISTAPRODUCTOS_H
