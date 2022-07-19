#include <iostream>
#include <listatrabajadores.h>
#include <listaproductos.h>
#include <listaclientes.h>

using namespace  std;

#ifndef RESTAURANTE_H
#define RESTAURANTE_H


class Restaurante
{
private:
    string nombres;
    string direccion;
    string ruc;
    ListaTrabajadores *LT;      // lista dinamica
    ListaProductos *lP;         // lista enlazada
    ListaClientes *lC;
public:
    Restaurante();
    ~Restaurante();
    string getNombres() const;
    void setNombres(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    string getRuc() const;
    void setRuc(const string &value);
    ListaTrabajadores *getLT() const;
    void setLT(ListaTrabajadores *value);
    ListaProductos *getLP() const;
    void setLP(ListaProductos *value);
    ListaClientes *getLC() const;
    void setLC(ListaClientes *value);
};

#endif // RESTAURANTE_H
