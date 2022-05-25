#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <basicas.h>
#define descuento 0.1

class Producto
{
private:
    static int contador;
    string nombre;
    string codigo;
    double precioCompra;
    double precioVenta;
    int stock;
    int cantidadMinima;
    string categoria;
public:
    Producto();
    Producto(string nombre, double precioCompra, precioVenta, int stock, int cantidadMinima);
    ~Producto();
    static int getContador();
    string getNombre() const;
    void setNombre(const string &value);
    string getCodigo() const;
    void setCodigo(const string &value);
    double getPrecioCompra() const;
    void setPrecioCompra(double value);
    double getPrecioVenta() const;
    void setPrecioVenta(double value);
    int getStock() const;
    void setStock(int value);
    int getCantidadMinima() const;
    void setCantidadMinima(int value);
    string getCategoria() const;
    void setCategoria(const string &value);
};

#endif // PRODUCTO_H
