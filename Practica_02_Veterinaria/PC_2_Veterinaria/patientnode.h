#ifndef PATIENTNODE_H
#define PATIENTNODE_H
#include "patient.h"

class PatientNode
{
private:
    Patient *patient;
    PatientNode *next;
public:
    PatientNode();
    ~PatientNode();
    Patient *getPatient() const;
    void setPatient(Patient *value);
    PatientNode *getNext() const;
    void setNext(PatientNode *value);
};

#endif // PATIENTNODE_H
