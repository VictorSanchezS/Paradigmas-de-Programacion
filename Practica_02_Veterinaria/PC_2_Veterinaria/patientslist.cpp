#include "patientslist.h"


PatientNode *PatientsList::getHead() const
{
    return head;
}

void PatientsList::setHead(PatientNode *value)
{
    head = value;
}

int PatientsList::getNumberPatients() const
{
    return numberPatients;
}

void PatientsList::setNumberPatients(int value)
{
    numberPatients = value;
}
PatientsList::PatientsList()
{
    this->head = NULL;
    this->numberPatients = 0;
}

PatientsList::~PatientsList()
{

}

void PatientsList::insert( Patient *patient ){
    PatientNode *aux = new PatientNode();
    PatientNode *temp = new PatientNode();
    temp->setPatient(patient);
    temp->setNext(NULL);
    if(this->head == NULL){
       this->setHead( temp );
    }
    else{
        aux = this->getHead();
        while(aux->getNext() != NULL){
            aux = aux->getNext();
        }
        aux->setNext( temp );
    }
    this->numberPatients++;
}

void PatientsList::updateValues( Patient *patient ){
    PatientNode *aux = new PatientNode();
    aux = this->getHead();

    while (aux != NULL){
        if(aux->getPatient()->getCode() == patient->getCode()){
            aux->setPatient(patient);
            break;
        }
        aux = aux->getNext();
    }
}
