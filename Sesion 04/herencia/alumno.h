#ifndef ALUMNO_H
#define ALUMNO_H
#include <persona.h>


class alumno : public persona
{
private:
    string carrera;
public:
    alumno();
    ~alumno();
    string getCarrera() const;
    void setCarrera(const string &value);
};

#endif // ALUMNO_H
