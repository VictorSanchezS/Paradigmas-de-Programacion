#include <iostream>
#include <QString>

using namespace  std;
#ifndef PRODUCTO_H
#define PRODUCTO_H


class Producto
{
private:
    QString codigo;
    QString nombre;
    QString descripcion;
    double precio;
    int stock;
    QString fechaVenc;
public:
    Producto();
    Producto( QString codigo,
              QString nombre,
              QString descripcion,
              double precio,
              int stock,
              QString fecha );
    ~Producto();
    QString getCodigo() const;
    void setCodigo(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);
    double getPrecio() const;
    void setPrecio(double value);
    int getStock() const;
    void setStock(int value);
    QString getFechaVenc() const;
    void setFechaVenc(const QString &value);
    QString getDescripcion() const;
    void setDescripcion(const QString &value);
};

#endif // PRODUCTO_H
