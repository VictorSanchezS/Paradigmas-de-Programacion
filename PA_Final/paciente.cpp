#include "paciente.h"


QString Paciente::getCodigo() const
{
    return codigo;
}

void Paciente::setCodigo(const QString &value)
{
    codigo = value;
}

int Paciente::getDosis() const
{
    return dosis;
}

void Paciente::setDosis(int value)
{
    dosis = value;
}

bool Paciente::getEstado() const
{
    return estado;
}

void Paciente::setEstado(bool value)
{
    estado = value;
}
Paciente::Paciente()
{

}

Paciente::Paciente(QString codigo,QString nombre,QString apellidos,QString dni,QString direccion,QString telefono, bool genero,QString fechaNacimiento,int dosis):
PersonaClass(nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento)
{
    this->codigo = codigo;
    this->dosis = dosis;
    this->estado = true;
}


Paciente::~Paciente()
{

}
