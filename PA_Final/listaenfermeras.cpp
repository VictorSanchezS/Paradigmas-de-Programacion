#include "listaenfermeras.h"


NodoEnfermeraClass *ListaEnfermeras::getCab() const
{
    return cab;
}

void ListaEnfermeras::setCab(NodoEnfermeraClass *value)
{
    cab = value;
}

int ListaEnfermeras::getNumeroEnfermeras() const
{
    return numeroEnfermeras;
}

void ListaEnfermeras::setNumeroEnfermeras(int value)
{
    numeroEnfermeras = value;
}
ListaEnfermeras::ListaEnfermeras()
{
    this->cab = NULL;
    this->numeroEnfermeras = 0;
}

ListaEnfermeras::~ListaEnfermeras()
{
    
}

void ListaEnfermeras::insertarEnfermera(EnfermeraClass *enfermera){
    NodoEnfermeraClass *aux = new NodoEnfermeraClass();
    NodoEnfermeraClass *temp = new NodoEnfermeraClass();
    temp->setEnfermera(enfermera);
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
    this->numeroEnfermeras++;
}
