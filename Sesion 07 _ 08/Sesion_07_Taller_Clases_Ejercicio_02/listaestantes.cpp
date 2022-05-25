#include "listaestantes.h"


Estante *ListaEstantes::getCab() const
{
    return cab;
}

void ListaEstantes::setCab(Estante *value)
{
    cab = value;
}

int ListaEstantes::getCantidadEstantes() const
{
    return cantidadEstantes;
}

void ListaEstantes::setCantidadEstantes(int value)
{
    cantidadEstantes = value;
}
ListaEstantes::ListaEstantes()
{
    this->cab = new NodoEstante();
    this->cantidadEstantes = 0;
}

ListaEstantes::~ListaEstantes()
{

}

// insertar estante

void ListaEstantes::insertar(Estante *nuevoEstante){
    NodoEstante *nuevoNodo = new NodoEstante();

    NodoEstante *ultimoNodo = this->getCab();

    nuevoNodo->setEstante(nuevoEstante);
    nuevoNodo->setSgte(NULL);

    if (this->getCab() == NULL) {
        nuevoNodo->setAnt(NULL);
        this->setCab(nuevoNodo);
    } else {
    while (ultimoNodo->getSgte() != NULL) {
          ultimoNodo = ultimoNodo->getSgte();
        }

        ultimoNodo->setSgte(nuevoEstante);
        nuevoNodo->setAnt(ultimoNodo);
    }

    this->setCantidadEstantes(this->getCantidadEstantes() + 1);
}
