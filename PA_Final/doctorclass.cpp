#include "doctorclass.h"



QString doctorclass::getCodigo() const
{
    return codigo;
}

void doctorclass::setCodigo(const QString &value)
{
    codigo = value;
}

double doctorclass::getSueldo() const
{
    return sueldo;
}

void doctorclass::setSueldo(double value)
{
    sueldo = value;
}

int doctorclass::getHorasTrabajadas() const
{
    return horasTrabajadas;
}

void doctorclass::setHorasTrabajadas(int value)
{
    horasTrabajadas = value;
}

bool doctorclass::getCondicion() const
{
    return condicion;
}

void doctorclass::setCondicion(bool value)
{
    condicion = value;
}
doctorclass::doctorclass()
{

}
doctorclass::doctorclass( QString codigo, QString nombre, QString apellidos, QString dni, QString direccion, QString telefono,
                          bool genero, QString fechaNacimiento, double sueldo, int horasTrabajadas) : PersonaClass(nombre, apellidos, dni, direccion, telefono, genero, fechaNacimiento)
{
    this->codigo= codigo;
    this->sueldo = sueldo;
    this->horasTrabajadas = horasTrabajadas;
    this->condicion = true;
}

doctorclass::~doctorclass()
{

}

