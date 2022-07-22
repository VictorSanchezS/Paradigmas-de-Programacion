#include "almacenclass.h"


QString AlmacenClass::getNumeroAl() const
{
    return numeroAl;
}

void AlmacenClass::setNumeroAl(const QString &value)
{
    numeroAl = value;
}

QString AlmacenClass::getDireccion() const
{
    return direccion;
}

void AlmacenClass::setDireccion(const QString &value)
{
    direccion = value;
}

bool AlmacenClass::getEstadoAl() const
{
    return estadoAl;
}

void AlmacenClass::setEstadoAl(bool value)
{
    estadoAl = value;
}

QString AlmacenClass::getCodigo() const
{
    return codigo;
}

void AlmacenClass::setCodigo(const QString &value)
{
    codigo = value;
}
AlmacenClass::AlmacenClass()
{
}
AlmacenClass::AlmacenClass(QString codigo,QString numeroAl, QString direccion,bool estadoAl){
    this->direccion;
    this->numeroAl;
    this->estadoAl;
    this->codigo;
}

AlmacenClass::~AlmacenClass()
{

}

