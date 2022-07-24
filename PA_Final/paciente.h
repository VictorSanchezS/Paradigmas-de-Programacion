#ifndef PACIENTE_H
#define PACIENTE_H

#include "personaclass.h"

class Paciente : public PersonaClass
{
private:
    QString codigo;
    int dosis;
    bool estado;
public:
    Paciente();
    Paciente(QString codigo, QString nombre, QString apellidos, QString dni,QString direccion, QString telefono, bool genero, QString fechaNacimiento,int dosis);
    ~Paciente();
    QString getCodigo() const;
    void setCodigo(const QString &value);
    int getDosis() const;
    void setDosis(int value);
    bool getEstado() const;
    void setEstado(bool value);
};

#endif // PACIENTE_H
