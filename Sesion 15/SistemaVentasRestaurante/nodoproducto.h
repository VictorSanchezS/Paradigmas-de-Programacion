#include <producto.h>
#ifndef NODOPRODUCTO_H
#define NODOPRODUCTO_H


class NodoProducto
{
private:
    NodoProducto *sgte;
    Producto *info;
public:
    NodoProducto();
    ~NodoProducto();
    NodoProducto *getSgte() const;
    void setSgte(NodoProducto *value);
    Producto *getInfo() const;
    void setInfo(Producto *value);
    void asignarValor( NodoProducto *cab  );
};

#endif // NODOPRODUCTO_H
