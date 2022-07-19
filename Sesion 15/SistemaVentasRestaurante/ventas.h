#include "iostream"
#include "QString"
#include "trabajador.h"
#include "cliente.h"
#include "listaproductosc.h"

#ifndef VENTAS_H
#define VENTAS_H


class Ventas
{
private:
    int codigo;
    QString fecha;
    float montoTotal;
    Trabajador *tra;
    Cliente *cli;
    float descuento;
    float igv;
    QString tipoDoc;
    ListaProductosC *lP;
public:
    Ventas();
    ~Ventas();
    int getCodigo() const;
    void setCodigo(int value);
    QString getFecha() const;
    void setFecha(const QString &value);
    float getMontoTotal() const;
    void setMontoTotal(float value);
    Trabajador *getTra() const;
    void setTra(Trabajador *value);
    Cliente *getCli() const;
    void setCli(Cliente *value);
    float getDescuento() const;
    void setDescuento(float value);
    float getIgv() const;
    void setIgv(float value);
    QString getTipoDoc() const;
    void setTipoDoc(const QString &value);
    ListaProductosC *getLP() const;
    void setLP(ListaProductosC *value);
};

#endif // VENTAS_H
