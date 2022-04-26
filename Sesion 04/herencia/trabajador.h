#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <persona.h>

class trabajador : public persona
{
private:
    float sueldo;
public:
    trabajador();
    ~trabajador();
};

#endif // TRABAJADOR_H
