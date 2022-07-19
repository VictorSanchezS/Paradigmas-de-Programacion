#include "listaclientes.h"

#define inc 3

int ListaClientes::getMax() const
{
    return max;
}

void ListaClientes::setMax(int value)
{
    max = value;
}

int ListaClientes::getNCli() const
{
    return nCli;
}

void ListaClientes::setNCli(int value)
{
    nCli = value;
}

Cliente *ListaClientes::getCab() const
{
    return cab;
}

void ListaClientes::setCab(Cliente *value)
{
    cab = value;
}
ListaClientes::ListaClientes()
{
    this->cab = NULL;
    this->max = 0;
    this->nCli = 0;
}

ListaClientes::~ListaClientes()
{

}

void ListaClientes::crecer(){
    Cliente *aux = new Cliente[this->nCli + inc];
    for (int i = 0; i <this->nCli; i++){
        *(aux + i) = *(this->cab +i);
    }
    if(this->cab != NULL)
        this->setCab(NULL);
        //delete this->cab;
    this->cab = aux;
    this->max += inc;
}

void ListaClientes::insertarCliente(Cliente *c){
    if(this->nCli == this->max){
        this->crecer();
    }
    *(this->cab + this->nCli) = *c;
    this->nCli++;
}


void ListaClientes::cargarPrevia(){
    Cliente *cli = new Cliente("C001", "Sanchez Torres", "Adrian", "Bolognesi 345", "10023342323", "10/10/1999");
    Cliente *cli1 = new Cliente("C002", "Perez Gomez", "Alvaro", "Bolognesi 135", "90566565655", "05/05/2000");
    this->insertarCliente(cli);
    this->insertarCliente(cli1);
    delete cli;
    delete cli1;
}
