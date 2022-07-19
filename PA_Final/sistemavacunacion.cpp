#include "sistemavacunacion.h"


QString SistemaVacunacion::getRuc() const
{
    return ruc;
}

void SistemaVacunacion::setRuc(const QString &value)
{
    ruc = value;
}

QString SistemaVacunacion::getLider() const
{
    return lider;
}

void SistemaVacunacion::setLider(const QString &value)
{
    lider = value;
}

QString SistemaVacunacion::getTelefono() const
{
    return telefono;
}

void SistemaVacunacion::setTelefono(const QString &value)
{
    telefono = value;
}

ListaLocalesClass *SistemaVacunacion::getListaLocales() const
{
    return listaLocales;
}

void SistemaVacunacion::setListaLocales(ListaLocalesClass *value)
{
    listaLocales = value;
}

ListaEnfermeras *SistemaVacunacion::getListaEnfermeras() const
{
    return listaEnfermeras;
}

void SistemaVacunacion::setListaEnfermeras(ListaEnfermeras *value)
{
    listaEnfermeras = value;
}
SistemaVacunacion::SistemaVacunacion()
{
    this->lider = "Jaime Bravo";
    this->ruc = "343434434343";
    this->telefono = "123456789";
    this->listaLocales = new ListaLocalesClass();
    this->listaEnfermeras = new ListaEnfermeras();
}

SistemaVacunacion::~SistemaVacunacion()
{

}

