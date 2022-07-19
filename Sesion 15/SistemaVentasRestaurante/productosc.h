#include "iostream"
#include "QString"
#include "producto.h"



#ifndef PRODUCTOSC_H
#define PRODUCTOSC_H


class ProductosC
{
private:
    Producto *pro;
    int cantidad;
    ProductosC *sgte;
public:
    ProductosC();
    ~ProductosC();
    int getCantidad() const;
    void setCantidad(int value);
    Producto *getPro() const;
    void setPro(Producto *value);
    ProductosC *getSgte() const;
    void setSgte(ProductosC *value);
};

#endif // PRODUCTOSC_H
