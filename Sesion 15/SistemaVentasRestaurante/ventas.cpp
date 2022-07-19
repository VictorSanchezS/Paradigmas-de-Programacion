#include "ventas.h"
#include "listaproductosc.h"


int Ventas::getCodigo() const
{
    return codigo;
}

void Ventas::setCodigo(int value)
{
    codigo = value;
}

QString Ventas::getFecha() const
{
    return fecha;
}

void Ventas::setFecha(const QString &value)
{
    fecha = value;
}

float Ventas::getMontoTotal() const
{
    return montoTotal;
}

void Ventas::setMontoTotal(float value)
{
    montoTotal = value;
}

Trabajador *Ventas::getTra() const
{
    return tra;
}

void Ventas::setTra(Trabajador *value)
{
    tra = value;
}

Cliente *Ventas::getCli() const
{
    return cli;
}

void Ventas::setCli(Cliente *value)
{
    cli = value;
}

float Ventas::getDescuento() const
{
    return descuento;
}

void Ventas::setDescuento(float value)
{
    descuento = value;
}

float Ventas::getIgv() const
{
    return igv;
}

void Ventas::setIgv(float value)
{
    igv = value;
}

QString Ventas::getTipoDoc() const
{
    return tipoDoc;
}

void Ventas::setTipoDoc(const QString &value)
{
    tipoDoc = value;
}

ListaProductosC *Ventas::getLP() const
{
    return lP;
}

void Ventas::setLP(ListaProductosC *value)
{
    lP = value;
}
Ventas::Ventas()
{
    this->montoTotal = 0;
    this->tra = NULL;
    this->cli = NULL;
    this->descuento = 0;
    this->igv = 0;
    this->lP = new ListaProductosC();
}

Ventas::~Ventas()
{

}

