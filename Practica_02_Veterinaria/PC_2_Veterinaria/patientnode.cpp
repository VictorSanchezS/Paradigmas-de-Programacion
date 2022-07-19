#include "patientnode.h"


Patient *PatientNode::getPatient() const
{
    return patient;
}

void PatientNode::setPatient(Patient *value)
{
    patient = value;
}

PatientNode *PatientNode::getNext() const
{
    return next;
}

void PatientNode::setNext(PatientNode *value)
{
    next = value;
}
PatientNode::PatientNode()
{
    this->patient = NULL;
    this->next = NULL;
}

PatientNode::~PatientNode()
{

}

