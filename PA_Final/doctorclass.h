#ifndef DOCTORCLASS_H
#define DOCTORCLASS_H
#include "personaclass.h"

class doctorclass : public PersonaClass
{
private:
    QString codigo;
    double sueldo;
    int horasTrabajadas;
    bool condicion;

public:
    doctorclass();
    doctorclass(QString codigo, QString nombre, QString apellidos, QString dni, QString direccion, QString telefono,
                bool genero, QString fechaNacimiento, double sueldo, int horasTrabajadas);

    ~doctorclass();

    QString getCodigo() const;
    void setCodigo(const QString &value);

    double getSueldo() const;
    void setSueldo(double value);

    int getHorasTrabajadas() const;
    void setHorasTrabajadas(int value);

    bool getCondicion() const;
    void setCondicion(bool value);
};

#endif // DOCTORCLASS_H
