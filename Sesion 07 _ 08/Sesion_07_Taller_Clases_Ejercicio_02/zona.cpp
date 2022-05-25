#include "zona.h"

int Zona::contador = 1;

int Zona::getContador()
{
    return contador;
}

void Zona::setContador(int value)
{
    contador = value;
}

string Zona::getNombre() const
{
    return nombre;
}

void Zona::setNombre(const string &value)
{
    nombre = value;
}

string Zona::getCodigo() const
{
    return codigo;
}

void Zona::setCodigo(const string &value)
{
    codigo = value;
}

ListaEstantes *Zona::getEstantes() const
{
    return estantes;
}

void Zona::setEstantes(ListaEstantes *value)
{
    estantes = value;
}
Zona::Zona()
{
    this->codigo = "Zona - " + to_string(Zona::contador++);
    this->estantes = new ListaEstantes();
}

Zona::Zona(string nombre)
{
    this->nombre = nombre;
    this->codigo = "Zona - " + to_string(Zona::contador++);
    this->estantes = new ListaEstantes();
}

Zona::~Zona()
{

}
