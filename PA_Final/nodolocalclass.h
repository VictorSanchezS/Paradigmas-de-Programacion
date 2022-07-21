#ifndef NODOLOCALCLASS_H
#define NODOLOCALCLASS_H

#include "localclass.h"

class NodoLocalClass
{
private:
    LocalClass *local;
    NodoLocalClass *sgte;
public:
    NodoLocalClass();
    ~NodoLocalClass();
    LocalClass *getLocal() const;
    void setLocal(LocalClass *value);
    NodoLocalClass *getSgte() const;
    void setSgte(NodoLocalClass *value);
};

#endif // NODOLOCALCLASS_H
