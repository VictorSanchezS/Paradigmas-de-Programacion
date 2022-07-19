#include "patient.h"

int Patient::counter = 1;

QString Patient::getName() const
{
    return name;
}

void Patient::setName(const QString &value)
{
    name = value;
}


QString Patient::getIdOwner() const
{
    return idOwner;
}

void Patient::setIdOwner(const QString &value)
{
    idOwner = value;
}

QString Patient::getDateOfBirth() const
{
    return dateOfBirth;
}

void Patient::setDateOfBirth(const QString &value)
{
    dateOfBirth = value;
}


bool Patient::getGender() const
{
    return gender;
}

void Patient::setGender(bool value)
{
    gender = value;
}

int Patient::getNumberSiblings() const
{
    return numberSiblings;
}

void Patient::setNumberSiblings(int value)
{
    numberSiblings = value;
}

QString Patient::getCode() const
{
    return code;
}

void Patient::setCode(const QString &value)
{
    code = value;
}

QString Patient::getOwner() const
{
    return owner;
}

void Patient::setOwner(const QString &value)
{
    owner = value;
}

QString Patient::getSymptom() const
{
    return symptom;
}

void Patient::setSymptom(const QString &value)
{
    symptom = value;
}
Patient::Patient()
{
    this->code = "Pet-" + QString::number(Patient::counter);
    Patient::counter++;
}

Patient::Patient(QString name,bool gender,QString owner,QString idOwner,
                 QString dateOfBirth,QString symptom,int numberSiblings)
{
    this->code = "Pet-" + QString::number(Patient::counter);
    Patient::counter++;

    this->name = name;
    this->gender = gender;
    this->owner = owner;
    this->idOwner = idOwner;
    this->dateOfBirth = dateOfBirth;
    this->symptom = symptom;
    this->numberSiblings = numberSiblings;
}

Patient::~Patient()
{

}

