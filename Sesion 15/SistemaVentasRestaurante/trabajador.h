#include <iostream>

using namespace  std;

#ifndef TRABAJADOR_H
#define TRABAJADOR_H


class Trabajador
{
private:
    string codigo;
    string nombres;
    string apellidos;
    string fechaNac;
    double sueldo;
public:
    Trabajador();
    ~Trabajador();
};

#endif // TRABAJADOR_H
