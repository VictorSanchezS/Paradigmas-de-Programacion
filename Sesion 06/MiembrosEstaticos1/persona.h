#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
private:
    static int codigo;
    int codigoPersonal;
    string nombres;
    string apellidos;
    static double sueldo;
public:
    Persona();
    ~Persona();
    static int getCodigo();
    static void setCodigo(int value);
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    double getSueldo() const;
    void setSueldo(double value);
    void mostrar();
};

#endif // PERSONA_H
