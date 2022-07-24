#ifndef LISTAPACIENTESCLASS_H
#define LISTAPACIENTESCLASS_H

#include "nodopacienteclass.h"

class ListaPacientesClass
{
private:
    NodoPacienteClass *cab;
    int nPacientes;

public:
    ListaPacientesClass();
    ~ListaPacientesClass();
    NodoPacienteClass *getCab() const;
    void setCab(NodoPacienteClass *value);
    int getNPacientes() const;
    void setNPacientes(int value);
    void insertarPaciente(Paciente *pac);
    void cambiarValoresPaciente(Paciente *pac);
};

#endif // LISTAPACIENTESCLASS_H
