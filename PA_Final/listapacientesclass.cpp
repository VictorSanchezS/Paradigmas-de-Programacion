#include "listapacientesclass.h"


ListaPacientesClass::ListaPacientesClass()
{
    this->cab = NULL;
    this->nPacientes = 0;
}


NodoPacienteClass *ListaPacientesClass::getCab() const
{
    return cab;
}

void ListaPacientesClass::setCab(NodoPacienteClass *value)
{
    cab = value;
}

int ListaPacientesClass::getNPacientes() const
{
    return nPacientes;
}

void ListaPacientesClass::setNPacientes(int value)
{
    nPacientes = value;
}
ListaPacientesClass::~ListaPacientesClass()
{

}

void ListaPacientesClass::insertarPaciente(Paciente *pac){
    NodoPacienteClass *aux = new NodoPacienteClass();
    NodoPacienteClass *temp = new NodoPacienteClass();
    temp->setPac(pac);
    temp->setSgte(NULL);
    if(this->cab == NULL){
       this->setCab( temp );
    }
    else{
        aux = this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte( temp );
    }
    this->nPacientes++;
}

void ListaPacientesClass::cambiarValoresPaciente(Paciente *pac){
    NodoPacienteClass *aux = new NodoPacienteClass();
    aux = this->getCab();
    while(aux != NULL){
        if(aux->getPac()->getCodigo() == pac->getCodigo()){

            aux->setPac(pac);
            break;
        }
        aux = aux->getSgte();
    }
}
