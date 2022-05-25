#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H
#include <listazonas.h>
#include <listaclientes.h>

class Supermercado
{
private:
    string nombre;
    string direccion;
    string ruc;
    ListaZonas *zonas;
    ListaClientes *clientes;
public:
    Supermercado();
    Supermercado(string nombre, string direccion, string ruc);
    ~Supermercado();
    string getNombre() const;
    void setNombre(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    string getRuc() const;
    void setRuc(const string &value);
    ListaZonas *getZonas() const;
    void setZonas(ListaZonas *value);
    ListaClientes *getClientes() const;
    void setClientes(ListaClientes *value);
};

#endif // SUPERMERCADO_H
