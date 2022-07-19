#ifndef ENFERMERACLASS_H
#define ENFERMERACLASS_H
#include "personaclass.h"

class EnfermeraClass : public PersonaClass
{
private:
    double sueldo;
    int horasTrabajo;
public:
    EnfermeraClass();
    ~EnfermeraClass();
    double getSueldo() const;
    void setSueldo(double value);
    int getHorasTrabajo() const;
    void setHorasTrabajo(int value);
    EnfermeraClass(QString nombre, QString apellidos, QString dni, QString direccion, QString telefono, bool genero, QString fechaNacimiento, double sueldo, int horasTrabajo);
};

#endif // ENFERMERACLASS_H
