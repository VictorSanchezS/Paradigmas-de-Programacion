#include "enfermeraclass.h"


double EnfermeraClass::getSueldo() const
{
    return sueldo;
}

void EnfermeraClass::setSueldo(double value)
{
    sueldo = value;
}

int EnfermeraClass::getHorasTrabajo() const
{
    return horasTrabajo;
}

void EnfermeraClass::setHorasTrabajo(int value)
{
    horasTrabajo = value;
}

QString EnfermeraClass::getCodigo() const
{
    return codigo;
}

void EnfermeraClass::setCodigo(const QString &value)
{
    codigo = value;
}
EnfermeraClass::EnfermeraClass()
{
    
}

EnfermeraClass::EnfermeraClass(QString codigo,QString nombre,QString apellidos,QString dni,QString direccion,QString telefono,
                               bool genero,QString fechaNacimiento,double sueldo,int horasTrabajo) :
    PersonaClass(nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento)
{
    this->codigo = codigo;
    this->sueldo = sueldo;
    this->horasTrabajo = horasTrabajo;
}

EnfermeraClass::~EnfermeraClass()
{

}

