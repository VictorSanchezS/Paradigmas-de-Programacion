#include "nodoestante.h"


Estante *NodoEstante::getEstante() const
{
    return estante;
}

void NodoEstante::setEstante(Estante *value)
{
    estante = value;
}

NodoEstante *NodoEstante::getSgte() const
{
    return sgte;
}

void NodoEstante::setSgte(NodoEstante *value)
{
    sgte = value;
}

NodoEstante *NodoEstante::getAnt() const
{
    return ant;
}

void NodoEstante::setAnt(NodoEstante *value)
{
    ant = value;
}
NodoEstante::NodoEstante()
{
    this->estante = new Estante();
    this->sgte = NULL;
    this->sgte = NULL;
}

NodoEstante::~NodoEstante()
{

}

