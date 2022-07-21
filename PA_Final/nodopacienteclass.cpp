#include "nodopacienteclass.h"



Paciente *NodoPacienteClass::getPac() const
{
    return pac;
}

void NodoPacienteClass::setPac(Paciente *value)
{
    pac = value;
}

NodoPacienteClass *NodoPacienteClass::getSgte() const
{
    return sgte;
}

void NodoPacienteClass::setSgte(NodoPacienteClass *value)
{
    sgte = value;
}
NodoPacienteClass::NodoPacienteClass()
{

}

NodoPacienteClass::~NodoPacienteClass()
{

}
