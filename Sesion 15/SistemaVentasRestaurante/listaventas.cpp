#include "listaventas.h"

#define inc 3

int ListaVentas::getNVentas() const
{
    return nVentas;
}

void ListaVentas::setNVentas(int value)
{
    nVentas = value;
}

int ListaVentas::getMax() const
{
    return max;
}

void ListaVentas::setMax(int value)
{
    max = value;
}

Ventas *ListaVentas::getCab() const
{
    return cab;
}

void ListaVentas::setCab(Ventas *value)
{
    cab = value;
}
ListaVentas::ListaVentas()
{
    this->max = 0;
    this->nVentas = 0;
    this->cab = NULL;
}

ListaVentas::~ListaVentas()
{

}

void ListaVentas::crecer(){
    Ventas *aux = new Ventas[this->nVentas + inc];
    for (int i = 0; i <this->nVentas; i++){
        *(aux + i) = *(this->cab +i);
    }
    if(this->cab != NULL)
        this->setCab(NULL);
        //delete this->cab;
    this->cab = aux;
    this->max += inc;
}

void ListaVentas::insertarVenta(Ventas *c){
    if(this->nVentas == this->max){
        this->crecer();
    }
    *(this->cab + this->nVentas ) = *c;
    this->nVentas++;
}

