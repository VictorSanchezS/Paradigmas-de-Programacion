#include "listaproductosc.h"


ProductosC *ListaProductosC::getPro() const
{
    return pro;
}

void ListaProductosC::setPro(ProductosC *value)
{
    pro = value;
}

int ListaProductosC::getNPro() const
{
    return nPro;
}

void ListaProductosC::setNPro(int value)
{
    nPro = value;
}

int ListaProductosC::getMax() const
{
    return max;
}

void ListaProductosC::setMax(int value)
{
    max = value;
}
ListaProductosC::ListaProductosC()
{
    this->max = 0;
    this->nPro = 0;
    this->pro = NULL;
}

ListaProductosC::~ListaProductosC()
{
    
}

void ListaProductosC::crecer(){
    ProductosC *aux = new ProductosC[this->nPro + inc];
    for (int i = 0; i <this->nPro; i++){
        *(aux + i) = *(this->pro +i);
    }
    if(this->pro != NULL)
        this->setPro(NULL);
        //delete this->cab;
    this->pro = aux;
    this->max += inc;
}

void ListaProductosC::insertarProductoC(ProductosC *c){
    if(this->nPro == this->max){
        this->crecer();
    }
    *(this->pro + this->nPro ) = *c;
    this->nPro++;
}

