#include "nododoctorclass.h"


doctorclass *nodoDoctorClass::getDoctor() const
{
    return doctor;
}

void nodoDoctorClass::setDoctor(doctorclass *value)
{
    doctor = value;
}

nodoDoctorClass *nodoDoctorClass::getSgte() const
{
    return sgte;
}

void nodoDoctorClass::setSgte(nodoDoctorClass *value)
{
    sgte = value;
}
nodoDoctorClass::nodoDoctorClass()
{

}

nodoDoctorClass::~nodoDoctorClass()
{

}

