#ifndef NODOPACIENTECLASS_H
#define NODOPACIENTECLASS_H

#include "paciente.h"

class NodoPacienteClass
{
 private:
    Paciente *pac;
    NodoPacienteClass *sgte;

public:
    NodoPacienteClass();
    ~NodoPacienteClass();
    Paciente *getPac() const;
    void setPac(Paciente *value);
    NodoPacienteClass *getSgte() const;
    void setSgte(NodoPacienteClass *value);


};

#endif // NODOPACIENTECLASS_H
