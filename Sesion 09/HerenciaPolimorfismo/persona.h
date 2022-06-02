#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;


class Persona
{
private:
    static int contador;
    string codigo;
    string nombres;
    string apellidos;
    string dni;
    string fechaNacimiento;
public:
    Persona();
    Persona(string nombres,string apellidos,string dni,string fechaNacimiento);
    ~Persona();
    static int getContador();
    static void setContador(int value);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    string getDni() const;
    void setDni(const string &value);
    string getFechaNacimiento() const;
    void setFechaNacimiento(const string &value);
    virtual void mostrar();
};

#endif // PERSONA_H
