#include "nodolocalclass.h"


LocalClass *NodoLocalClass::getLocal() const
{
    return local;
}

void NodoLocalClass::setLocal(LocalClass *value)
{
    local = value;
}

NodoLocalClass *NodoLocalClass::getSgte() const
{
    return sgte;
}

void NodoLocalClass::setSgte(NodoLocalClass *value)
{
    sgte = value;
}
NodoLocalClass::NodoLocalClass()
{

}

NodoLocalClass::~NodoLocalClass()
{

}

