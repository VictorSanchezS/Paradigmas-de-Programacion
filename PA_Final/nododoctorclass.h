#ifndef NODODOCTORCLASS_H
#define NODODOCTORCLASS_H
#include "doctorclass.h"

class nodoDoctorClass
{
private:
    doctorclass *doctor;
    nodoDoctorClass *sgte;
public:
    nodoDoctorClass();
    ~nodoDoctorClass();
    doctorclass *getDoctor() const;
    void setDoctor(doctorclass *value);
    nodoDoctorClass *getSgte() const;
    void setSgte(nodoDoctorClass *value);
};

#endif // NODODOCTORCLASS_H
