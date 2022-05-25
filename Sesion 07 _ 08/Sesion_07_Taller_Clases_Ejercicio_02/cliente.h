#ifndef CLIENTE_H
#define CLIENTE_H
#include <basicas.h>

class Cliente
{
private:
    static int contador;
    string codigo;
    string dni;
    string nombres;
    string apellidos;
public:
    Cliente();
    Cliente(string dni, string nombres, string apellidos);
    ~Cliente();
    static int getContador();
    static void setContador(int value);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
};

#endif // CLIENTE_H
