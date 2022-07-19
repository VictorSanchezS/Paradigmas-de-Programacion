#include "producto.h"


QString Producto::getCodigo() const
{
    return codigo;
}

void Producto::setCodigo(const QString &value)
{
    codigo = value;
}

QString Producto::getNombre() const
{
    return nombre;
}

void Producto::setNombre(const QString &value)
{
    nombre = value;
}

double Producto::getPrecio() const
{
    return precio;
}

void Producto::setPrecio(double value)
{
    precio = value;
}

int Producto::getStock() const
{
    return stock;
}

void Producto::setStock(int value)
{
    stock = value;
}

QString Producto::getFechaVenc() const
{
    return fechaVenc;
}

void Producto::setFechaVenc(const QString &value)
{
    fechaVenc = value;
}

QString Producto::getDescripcion() const
{
    return descripcion;
}

void Producto::setDescripcion(const QString &value)
{
    descripcion = value;
}
Producto::Producto()
{

}

Producto::Producto( QString codigo, QString nombre, QString descripcion, double precio, int stock, QString fecha ){
    this->codigo = codigo;
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->precio = precio;
    this->stock = stock;
    this->fechaVenc = fecha;
}

Producto::~Producto()
{

}

