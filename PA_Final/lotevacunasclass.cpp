#include "lotevacunasclass.h"


QString LoteVacunasClass::getCodigo() const
{
    return codigo;
}

void LoteVacunasClass::setCodigo(const QString &value)
{
    codigo = value;
}

QString LoteVacunasClass::getNombre() const
{
    return nombre;
}

void LoteVacunasClass::setNombre(const QString &value)
{
    nombre = value;
}

QString LoteVacunasClass::getCantidad() const
{
    return Cantidad;
}

void LoteVacunasClass::setCantidad(const QString &value)
{
    Cantidad = value;
}


QString LoteVacunasClass::getFecha() const
{
    return fecha;
}

void LoteVacunasClass::setFecha(const QString &value)
{
    fecha = value;
}

bool LoteVacunasClass::getEstado() const
{
    return estado;
}

void LoteVacunasClass::setEstado(bool value)
{
    estado = value;
}
LoteVacunasClass::LoteVacunasClass()
{

}
LoteVacunasClass::LoteVacunasClass(QString codigo, QString nombre, QString Cantidad, QString fecha, bool estado){
    this->codigo=codigo;
    this->nombre=nombre;
    this->Cantidad=Cantidad;
    this->fecha=fecha;
    this->estado=estado;

}

LoteVacunasClass::~LoteVacunasClass()
{

}

