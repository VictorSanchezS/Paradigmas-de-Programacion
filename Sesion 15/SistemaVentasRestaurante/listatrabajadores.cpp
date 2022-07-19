#include "listatrabajadores.h"

#define inc 3

Trabajador *ListaTrabajadores::getCab() const
{
    return cab;
}

void ListaTrabajadores::setCab(Trabajador *value)
{
    cab = value;
}

unsigned short ListaTrabajadores::getMax() const
{
    return max;
}

void ListaTrabajadores::setMax(unsigned short value)
{
    max = value;
}

unsigned short ListaTrabajadores::getNTra() const
{
    return nTra;
}

void ListaTrabajadores::setNTra(unsigned short value)
{
    nTra = value;
}
ListaTrabajadores::ListaTrabajadores()
{
    this->nTra = 0;
    this->cab = NULL;
}

ListaTrabajadores::~ListaTrabajadores()
{

}

void ListaTrabajadores::crecer(){
    Trabajador  *aux = new Trabajador [this->nTra + inc];
    for (int i = 0; i <this->nTra ; i++){
        *(aux + i) = *(this->cab +i);
    }
    if(this->cab != NULL)
        this->setCab(NULL);
        //delete this->cab;
    this->cab = aux;
    this->max += inc;
}

void ListaTrabajadores::insertarTrabajador(Trabajador *c){
    if(this->nTra == this->max){
        this->crecer();
    }
    *(this->cab + this->nTra) = *c;
    this->nTra++;
}
