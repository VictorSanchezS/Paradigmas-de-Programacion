#include "restaurante.h"


string Restaurante::getNombres() const
{
    return nombres;
}

void Restaurante::setNombres(const string &value)
{
    nombres = value;
}

string Restaurante::getDireccion() const
{
    return direccion;
}

void Restaurante::setDireccion(const string &value)
{
    direccion = value;
}

string Restaurante::getRuc() const
{
    return ruc;
}

void Restaurante::setRuc(const string &value)
{
    ruc = value;
}

ListaTrabajadores *Restaurante::getLT() const
{
    return LT;
}

void Restaurante::setLT(ListaTrabajadores *value)
{
    LT = value;
}

ListaProductos *Restaurante::getLP() const
{
    return lP;
}

void Restaurante::setLP(ListaProductos *value)
{
    lP = value;
}

ListaClientes *Restaurante::getLC() const
{
    return lC;
}

void Restaurante::setLC(ListaClientes *value)
{
    lC = value;
}
Restaurante::Restaurante()
{
    this->nombres = "Restaurante Sistemas";
    this->ruc = "343434434343";
    this->lP = new ListaProductos();
    this->LT = new ListaTrabajadores();
    this->lC = new ListaClientes();
    this->lP->cargarPrevia();
    this->lC->cargarPrevia();
}

Restaurante::~Restaurante()
{
    
}

