#include "listalocalesclass.h"

NodoLocalClass *ListaLocalesClass::getCab() const
{
    return cab;
}

void ListaLocalesClass::setCab(NodoLocalClass *value)
{
    cab = value;
}

int ListaLocalesClass::getNumeroLocales() const
{
    return numeroLocales;
}

void ListaLocalesClass::setNumeroLocales(int value)
{
    numeroLocales = value;
}
ListaLocalesClass::ListaLocalesClass()
{
    this->cab = NULL;
    this->numeroLocales = 0;
}

ListaLocalesClass::~ListaLocalesClass()
{

}

void ListaLocalesClass::insertarLocal(LocalClass *local){
    NodoLocalClass *aux = new NodoLocalClass();
    NodoLocalClass *temp = new NodoLocalClass();
        temp->setLocal(local);
        temp->setSgte(NULL);
        if(this->cab == NULL){
           this->setCab( temp );
        }
        else{
            aux = this->getCab();
            while(aux->getSgte() != NULL){
                aux = aux->getSgte();
            }
            aux->setSgte( temp );
        }
        this->numeroLocales++;
}

void ListaLocalesClass::cambiarValores(LocalClass *local){
    NodoLocalClass *aux = new NodoLocalClass();
    aux = this->getCab();
    while( aux != NULL){
        if(aux->getLocal()->getCodigo() == local->getCodigo()){
            aux->setLocal(local);
            break;
        }
        aux = aux->getSgte();
    }
}

