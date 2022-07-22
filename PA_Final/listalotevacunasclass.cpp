#include "listalotevacunasclass.h"


NodoLoteClass *ListaLoteVacunasClass::getCab() const
{
    return cab;
}

void ListaLoteVacunasClass::setCab(NodoLoteClass *value)
{
    cab = value;
}

int ListaLoteVacunasClass::getNumeroLotes() const
{
    return numeroLotes;
}

void ListaLoteVacunasClass::setNumeroLotes(int value)
{
    numeroLotes = value;
}

ListaLoteVacunasClass::ListaLoteVacunasClass()
{
    this->cab = NULL;
    this->numeroLotes = 0;
}

ListaLoteVacunasClass::~ListaLoteVacunasClass()
{

}

void ListaLoteVacunasClass::insertarLote(LoteVacunasClass *lote)
{
    NodoLoteClass *aux = new NodoLoteClass();
    NodoLoteClass *temp =new NodoLoteClass();
    temp->setLoteV(lote);
    temp->setSgte(NULL);
    if(this->cab == NULL){
        this->setCab(temp);
    }
    else{
        aux = this->getCab();
        while(aux->getSgte()!= NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->numeroLotes++;
}

void ListaLoteVacunasClass::cambiarValor(LoteVacunasClass *lote)
{
    NodoLoteClass *aux = new NodoLoteClass();
    aux = this->getCab();
    while(aux != NULL){
        if(aux->getLoteV()->getCodigo() == lote->getCodigo()){
            aux->setLoteV((lote));
            break;
        }
        aux = aux->getSgte();
    }
}
