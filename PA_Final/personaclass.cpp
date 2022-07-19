#include "personaclass.h"


QString PersonaClass::getNombre() const
{
    return nombre;
}

void PersonaClass::setNombre(const QString &value)
{
    nombre = value;
}

QString PersonaClass::getApellidos() const
{
    return apellidos;
}

void PersonaClass::setApellidos(const QString &value)
{
    apellidos = value;
}

QString PersonaClass::getDni() const
{
    return dni;
}

void PersonaClass::setDni(const QString &value)
{
    dni = value;
}

QString PersonaClass::getDireccion() const
{
    return direccion;
}

void PersonaClass::setDireccion(const QString &value)
{
    direccion = value;
}

QString PersonaClass::getTelefono() const
{
    return telefono;
}

void PersonaClass::setTelefono(const QString &value)
{
    telefono = value;
}

bool PersonaClass::getGenero() const
{
    return genero;
}

void PersonaClass::setGenero(bool value)
{
    genero = value;
}

QString PersonaClass::getFechaNacimiento() const
{
    return fechaNacimiento;
}

void PersonaClass::setFechaNacimiento(const QString &value)
{
    fechaNacimiento = value;
}
PersonaClass::PersonaClass()
{

}

PersonaClass::PersonaClass(QString nombre,QString apellidos,QString dni,QString direccion,QString telefono,bool genero,QString fechaNacimiento)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->dni = dni;
    this->direccion = direccion;
    this->telefono = telefono;
    this->genero = genero;
    this->fechaNacimiento = fechaNacimiento;
}

PersonaClass::~PersonaClass()
{

}

