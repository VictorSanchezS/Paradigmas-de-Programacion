#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;


class persona
{
private:
    string codigo;
    string nombres;
    string apellidos;
    unsigned short edad;
    bool estado;
public:
    persona();
    ~persona();
};

#endif // PERSONA_H
