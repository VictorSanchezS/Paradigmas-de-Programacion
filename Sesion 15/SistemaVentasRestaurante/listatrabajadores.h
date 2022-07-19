#include<iostream>
#include <trabajador.h>

#ifndef LISTATRABAJADORES_H
#define LISTATRABAJADORES_H


class ListaTrabajadores
{
private:
    Trabajador *cab;
    unsigned short max, nTra;
public:
    ListaTrabajadores();
    ~ListaTrabajadores();
    Trabajador *getCab() const;
    void setCab(Trabajador *value);
    unsigned short getMax() const;
    void setMax(unsigned short value);
    unsigned short getNTra() const;
    void setNTra(unsigned short value);
    void crecer();
    void insertarTrabajador(Trabajador *c);
};

#endif // LISTATRABAJADORES_H
