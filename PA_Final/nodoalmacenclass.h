#ifndef NODOALMACENCLASS_H
#define NODOALMACENCLASS_H
#include "almacenclass.h"

class NodoAlmacenClass
{
private:
    AlmacenClass *almacen;
    NodoAlmacenClass *sgte;
public:
    NodoAlmacenClass();
    ~NodoAlmacenClass();
    AlmacenClass *getAlmacen() const;
    void setAlmacen(AlmacenClass *value);
    NodoAlmacenClass *getSgte() const;
    void setSgte(NodoAlmacenClass *value);
};

#endif // NODOALMACENCLASS_H
