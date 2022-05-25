#include "estante.h"

int Estante::contador = 1;

int Estante::getContador()
{
    return contador;
}

void Estante::setContador(int value)
{
    contador = value;
}

string Estante::getCodigo() const
{
    return codigo;
}

void Estante::setCodigo(const string &value)
{
    codigo = value;
}

string Estante::getFila() const
{
    return fila;
}

void Estante::setFila(const string &value)
{
    fila = value;
}

string Estante::getColumna() const
{
    return columna;
}

void Estante::setColumna(const string &value)
{
    columna = value;
}

ListaProductos *Estante::getProductos() const
{
    return productos;
}

void Estante::setProductos(ListaProductos *value)
{
    productos = value;
}
Estante::Estante()
{
    this->codigo = "Estante - " + to_string(Estante::contador++);
    this->productos = new ListaProductos();
}

Estante::Estante(string fila, string columna)
{
    this->codigo = "Estante - " + to_string(Estante::contador++);
    this->fila = fila;
    this->columna = columna;
    this->productos = new ListaProductos();
}

Estante::~Estante()
{
    
}

