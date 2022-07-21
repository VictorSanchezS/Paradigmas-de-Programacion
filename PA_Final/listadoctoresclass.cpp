#include "listadoctoresclass.h"


nodoDoctorClass *listaDoctoresClass::getCab() const
{
    return cab;
}

void listaDoctoresClass::setCab(nodoDoctorClass *value)
{
    cab = value;
}

int listaDoctoresClass::getNDoctor() const
{
    return nDoctor;
}

void listaDoctoresClass::setNDoctor(int value)
{
    nDoctor = value;
}
listaDoctoresClass::listaDoctoresClass()
{
    this->cab = NULL;
    this->nDoctor = 0;
}

listaDoctoresClass::~listaDoctoresClass()
{

}

void listaDoctoresClass::insertarDoctor(doctorclass *doctor){
    nodoDoctorClass *aux = new nodoDoctorClass();
    nodoDoctorClass *temp = new nodoDoctorClass();
    temp->setDoctor(doctor);
    temp->setSgte(NULL);
    if(this->cab == NULL){
       this->setCab(temp );
    }
    else{
        aux = this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte( temp );
    }
    this->nDoctor++;
}

void listaDoctoresClass::modificarDoctor(doctorclass *doctor){
    nodoDoctorClass *aux = new nodoDoctorClass();
    aux = this->getCab();
    while(aux != NULL){
        if(aux->getDoctor()->getCodigo() == doctor->getCodigo()){

            aux->setDoctor(doctor);
            break;
        }
        aux = aux->getSgte();
    }
}
