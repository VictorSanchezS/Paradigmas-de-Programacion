#include "cliente.h"


QString Cliente::getCodigo() const
{
    return codigo;
}

void Cliente::setCodigo(const QString &value)
{
    codigo = value;
}

QString Cliente::getApellidos() const
{
    return apellidos;
}

void Cliente::setApellidos(const QString &value)
{
    apellidos = value;
}

QString Cliente::getNombres() const
{
    return nombres;
}

void Cliente::setNombres(const QString &value)
{
    nombres = value;
}

QString Cliente::getDireccion() const
{
    return direccion;
}

void Cliente::setDireccion(const QString &value)
{
    direccion = value;
}

QString Cliente::getRuc() const
{
    return ruc;
}

void Cliente::setRuc(const QString &value)
{
    ruc = value;
}



QString Cliente::getFechaNac() const
{
    return fechaNac;
}

void Cliente::setFechaNac(const QString &value)
{
    fechaNac = value;
}

Cliente *Cliente::getSgte() const
{
    return sgte;
}

void Cliente::setSgte(Cliente *value)
{
    sgte = value;
}
Cliente::Cliente()
{

}
Cliente::Cliente(QString codigo, QString apellidos, QString nombres, QString direccion, QString ruc, QString fechaNac)
{
    this->codigo = codigo;
    this->apellidos = apellidos;
    this->nombres = nombres;
    this->direccion = direccion;
    this->ruc = ruc;
    this->fechaNac = fechaNac;    
}



Cliente::~Cliente()
{

}

