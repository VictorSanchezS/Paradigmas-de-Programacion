#ifndef PATIENTSLIST_H
#define PATIENTSLIST_H
#include "patientnode.h"


class PatientsList
{
private:
    PatientNode *head;
    int numberPatients;
public:
    PatientsList();
    ~PatientsList();
    PatientNode *getHead() const;
    void setHead(PatientNode *value);
    int getNumberPatients() const;
    void setNumberPatients(int value);
    void insert(Patient *patient);
    void updateValues(Patient *patient);
};

#endif // PATIENTSLIST_H
