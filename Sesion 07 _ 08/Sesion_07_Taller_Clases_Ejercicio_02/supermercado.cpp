#include "supermercado.h"


string Supermercado::getNombre() const
{
    return nombre;
}

void Supermercado::setNombre(const string &value)
{
    nombre = value;
}

string Supermercado::getDireccion() const
{
    return direccion;
}

void Supermercado::setDireccion(const string &value)
{
    direccion = value;
}

string Supermercado::getRuc() const
{
    return ruc;
}

void Supermercado::setRuc(const string &value)
{
    ruc = value;
}

ListaZonas *Supermercado::getZonas() const
{
    return zonas;
}

void Supermercado::setZonas(ListaZonas *value)
{
    zonas = value;
}

ListaClientes *Supermercado::getClientes() const
{
    return clientes;
}

void Supermercado::setClientes(ListaClientes *value)
{
    clientes = value;
}
Supermercado::Supermercado()
{
    this->zonas = new ListaZonas();
    this->clientes = NULL;
}

Supermercado::Supermercado(string nombre, string direccion,string ruc,)
{
    this->nombre = nombre;
    this->direccion = direccion;
    this->ruc = ruc;
    this->zonas = new ListaZonas();
    this->clientes = NULL;
}

Supermercado::~Supermercado()
{

}

