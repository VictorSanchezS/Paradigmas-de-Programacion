#include "localclass.h"

int LocalClass::contador = 1;

QString LocalClass::getCodigo() const
{
    return codigo;
}

void LocalClass::setCodigo(const QString &value)
{
    codigo = value;
}

QString LocalClass::getNombre() const
{
    return nombre;
}

void LocalClass::setNombre(const QString &value)
{
    nombre = value;
}

QString LocalClass::getDireccion() const
{
    return direccion;
}

void LocalClass::setDireccion(const QString &value)
{
    direccion = value;
}

bool LocalClass::getEstado() const
{
    return estado;
}

void LocalClass::setEstado(bool value)
{
    estado = value;
}
LocalClass::LocalClass()
{

}

LocalClass::~LocalClass()
{

}

LocalClass::LocalClass(QString codigo,QString nombre,QString direccion,bool estado)
{
    this->codigo = codigo;

    this->nombre = nombre;
    this->direccion = direccion;
    this->estado = estado;
}


