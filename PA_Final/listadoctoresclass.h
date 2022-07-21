#ifndef LISTADOCTORESCLASS_H
#define LISTADOCTORESCLASS_H
#include "nododoctorclass.h"

class listaDoctoresClass
{
private:
    nodoDoctorClass *cab;
    int nDoctor;
public:
    listaDoctoresClass();
    ~listaDoctoresClass();
    nodoDoctorClass *getCab() const;
    void setCab(nodoDoctorClass *value);
    int getNDoctor() const;
    void setNDoctor(int value);
    void insertarDoctor(doctorclass *doctor);
    void modificarDoctor(doctorclass *doctor);


};

#endif // LISTADOCTORESCLASS_H
