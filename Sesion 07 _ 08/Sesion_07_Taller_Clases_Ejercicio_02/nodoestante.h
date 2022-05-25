#ifndef NODOESTANTE_H
#define NODOESTANTE_H
#include <estante.h>

class NodoEstante
{
private:
    Estante *estante;
    NodoEstante *sgte;
    NodoEstante *ant;
public:
    NodoEstante();
    ~NodoEstante();
    Estante *getEstante() const;
    void setEstante(Estante *value);
    NodoEstante *getSgte() const;
    void setSgte(NodoEstante *value);
    NodoEstante *getAnt() const;
    void setAnt(NodoEstante *value);
};

#endif // NODOESTANTE_H
