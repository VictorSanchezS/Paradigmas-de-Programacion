#include "persona.h"


int Persona::getCodigo()
{
    return codigo;
}

void Persona::setCodigo(int value)
{
    codigo = value;
}

string Persona::getNombres() const
{
    return nombres;
}

void Persona::setNombres(const string &value)
{
    nombres = value;
}

string Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const string &value)
{
    apellidos = value;
}

double Persona::getSueldo() const
{
    return sueldo;
}

void Persona::setSueldo(double value)
{
    sueldo = value;
}
Persona::Persona()
{
    Persona::codigo++;
    int cod = Persona::codigo;
    this->codigoPersonal = cod;
    this->sueldo = Persona::sueldo + 50;
}

Persona::~Persona()
{

}

void Persona::mostrar(){
    cout << "Codigo" <<this->codigo;
    this->codigo = cod;
}
