#include "listaalmacenclass.h"


NodoAlmacenClass *ListaAlmacenClass::getCab() const
{
    return cab;
}

void ListaAlmacenClass::setCab(NodoAlmacenClass *value)
{
    cab = value;
}

int ListaAlmacenClass::getNumeroAlmacenes() const
{
    return numeroAlmacenes;
}

void ListaAlmacenClass::setNumeroAlmacenes(int value)
{
    numeroAlmacenes = value;
}


ListaAlmacenClass::ListaAlmacenClass()
{

}

ListaAlmacenClass::~ListaAlmacenClass()
{

}

void ListaAlmacenClass::insertarAlmacen(AlmacenClass *almacen)
{
    NodoAlmacenClass *aux =new NodoAlmacenClass();
    NodoAlmacenClass *temp = new NodoAlmacenClass();
    temp->setAlmacen(almacen);
    temp->setSgte(NULL);
    if(this->cab == NULL){
        this->setCab(temp);
    }
    else{
        aux = this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->numeroAlmacenes++;
}
void ListaAlmacenClass::cambiarValorAlmacen(AlmacenClass *almacen)
{
    NodoAlmacenClass *aux = new NodoAlmacenClass();
    aux = this->getCab();
    while(aux != NULL){
        if(aux->getAlmacen()->getCodigo() ==almacen->getCodigo()){
            aux->setAlmacen(almacen);
            break;
        }
        aux=aux->getSgte();
    }
}

