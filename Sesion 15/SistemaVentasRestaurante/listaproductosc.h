#include "iostream"
#include "QString"
#include "productosc.h"

#define inc 3

#ifndef LISTAPRODUCTOSC_H
#define LISTAPRODUCTOSC_H


class ListaProductosC
{
private:
    int max;
    int nPro;
    ProductosC *pro;
public:
    ListaProductosC();
    ~ListaProductosC();
    ProductosC *getPro() const;
    void setPro(ProductosC *value);
    int getNPro() const;
    void setNPro(int value);
    int getMax() const;
    void setMax(int value);
    void crecer();
    void insertarProductoC(ProductosC *c);
};

#endif // LISTAPRODUCTOSC_H
