#include "producto.h"

int Producto::contador = 1;

string Producto::getNombre() const
{
    return nombre;
}

void Producto::setNombre(const string &value)
{
    nombre = value;
}

string Producto::getCodigo() const
{
    return codigo;
}

void Producto::setCodigo(const string &value)
{
    codigo = value;
}

double Producto::getPrecioCompra() const
{
    return precioCompra;
}

void Producto::setPrecioCompra(double value)
{
    precioCompra = value;
}

double Producto::getPrecioVenta() const
{
    return precioVenta;
}

void Producto::setPrecioVenta(double value)
{
    precioVenta = value;
}

int Producto::getStock() const
{
    return stock;
}

void Producto::setStock(int value)
{
    stock = value;
}

int Producto::getCantidadMinima() const
{
    return cantidadMinima;
}

void Producto::setCantidadMinima(int value)
{
    cantidadMinima = value;
}

int Producto::getContador()
{
    return contador;
}

void Producto::setContador(int value)
{
    contador = value;
}

string Producto::getCategoria() const
{
    return categoria;
}

void Producto::setCategoria(const string &value)
{
    categoria = value;
}
Producto::Producto()
{
    this->codigo = "Producto - " + to_string(Producto::contador++);
}

Producto::Producto(string nombre,double precioCompra,precioVenta,int stock,int cantidadMinima)
{
    this->codigo = "Producto - " + to_string(Producto::contador++);
    this->nombre = nombre;
    this->precioCompra = precioCompra;
    this->precioVenta = precioVenta;
    this->stock = stock;
    this->cantidadMinima = cantidadMinima;
}

Producto::~Producto()
{

}
