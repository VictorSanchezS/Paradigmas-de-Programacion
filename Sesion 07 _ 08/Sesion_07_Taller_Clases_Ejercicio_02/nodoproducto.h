#ifndef NODOPRODUCTO_H
#define NODOPRODUCTO_H
#include <producto.h>

class NodoProducto
{
private:
    Producto *producto;
    NodoProducto *sgte;
    NodoProducto *ant;
public:
    NodoProducto();
    ~NodoProducto();
    Producto *getProducto() const;
    void setProducto(Producto *value);
    NodoProducto *getSgte() const;
    void setSgte(NodoProducto *value);
    NodoProducto *getAnt() const;
    void setAnt(NodoProducto *value);
};

#endif // NODOPRODUCTO_H
