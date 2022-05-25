#ifndef ZONA_H
#define ZONA_H
#include <listaestantes.h>

class Zona
{
private:
    static int contador;
    string codigo;
    string nombre;
    ListaEstantes *estantes;
public:
    Zona();
    Zona(string nombre);
    ~Zona();
    static int getContador();
    static void setContador(int value);
    string getNombre() const;
    void setNombre(const string &value);
    string getCodigo() const;
    void setCodigo(const string &value);
    ListaEstantes *getEstantes() const;
    void setEstantes(ListaEstantes *value);
};

#endif // ZONA_H
