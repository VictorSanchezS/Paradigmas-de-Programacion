#include "cliente.h"

int Cliente::contador = 1;

int Cliente::getContador()
{
    return contador;
}

void Cliente::setContador(int value)
{
    contador = value;
}

string Cliente::getCodigo() const
{
    return codigo;
}

void Cliente::setCodigo(const string &value)
{
    codigo = value;
}

string Cliente::getNombres() const
{
    return nombres;
}

void Cliente::setNombres(const string &value)
{
    nombres = value;
}

string Cliente::getApellidos() const
{
    return apellidos;
}

void Cliente::setApellidos(const string &value)
{
    apellidos = value;
}
Cliente::Cliente()
{
    this->codigo = "Cliente - " + to_string(Cliente::contador++);
}

Cliente::Cliente(string dni, string nombres, string apellidos)
{
    this->dni = dni;
    this->nombres= nombres;
    this->apellidos = apellidos;
    this->codigo = "Cliente - " + to_string(Cliente::contador++);

}


Cliente::~Cliente()
{
    
}

