#include "listaproductos.h"


NodoProducto *ListaProductos::getCab() const
{
    return cab;
}

void ListaProductos::setCab(NodoProducto *value)
{
    cab = value;
}

int ListaProductos::getNProd() const
{
    return nProd;
}

void ListaProductos::setNProd(int value)
{
    nProd = value;
}
ListaProductos::ListaProductos()
{
    this->cab = NULL;
    this->nProd = 0;
}

ListaProductos::~ListaProductos()
{

}

void ListaProductos::insertarProducto( Producto *pro ){
    NodoProducto *aux = new NodoProducto();
    NodoProducto *temp = new NodoProducto();
        temp->setInfo( pro );
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
        this->nProd++;
}


void ListaProductos::cambiarValores( Producto *pro ){
    NodoProducto *aux = new NodoProducto();
    aux = this->getCab();
    while ( aux != NULL ){
        if ( aux->getInfo()->getCodigo() == pro->getCodigo() ){
            aux->setInfo(pro);
            break;
        }
        aux = aux->getSgte();
    }
}


void ListaProductos::cargarPrevia(){
    Producto *cli = new Producto ("P001", "Pan", "Ciabatta", 0.25, 300, "10/10/1999");
    Producto *cli1 = new Producto ("P002", "Aceite", "Primor", 12.5, 100, "10/10/1999");
    this->insertarProducto(cli);
    this->insertarProducto(cli1);    
}




