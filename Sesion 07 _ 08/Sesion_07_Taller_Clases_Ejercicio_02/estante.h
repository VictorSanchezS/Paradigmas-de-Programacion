#ifndef ESTANTE_H
#define ESTANTE_H
#include <listaproductos.h>

class Estante
{
private:
    static int contador;
    string codigo;
    string fila;
    string columna;
    ListaProductos *productos;
public:
    Estante();
    Estante(string fila, string columna);
    ~Estante();
    static int getContador();
    static void setContador(int value);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getFila() const;
    void setFila(const string &value);
    string getColumna() const;
    void setColumna(const string &value);
    ListaProductos *getProductos() const;
    void setProductos(ListaProductos *value);
};

#endif // ESTANTE_H
