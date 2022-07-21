#ifndef NODOENFERMERACLASS_H
#define NODOENFERMERACLASS_H
#include "enfermeraclass.h"

class NodoEnfermeraClass
{
private:
    EnfermeraClass *enfermera;
    NodoEnfermeraClass *sgte;
public:
    NodoEnfermeraClass();
    ~NodoEnfermeraClass();
    EnfermeraClass *getEnfermera() const;
    void setEnfermera(EnfermeraClass *value);
    NodoEnfermeraClass *getSgte() const;
    void setSgte(NodoEnfermeraClass *value);
};

#endif // NODOENFERMERACLASS_H
