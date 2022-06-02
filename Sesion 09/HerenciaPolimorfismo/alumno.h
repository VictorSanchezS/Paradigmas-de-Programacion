#ifndef ALUMNO_H
#define ALUMNO_H
#include <persona.h>

class Alumno : public Persona
{
private:
    string especialidad;
    string codigoUniversitario;
    string nacionalidad;
    string anioIngreso;
public:
    Alumno();
    ~Alumno();
    string getEspecialidad() const;
    void setEspecialidad(const string &value);
    string getCodigoUniversitario() const;
    void setCodigoUniversitario(const string &value);
    string getNacionalidad() const;
    void setNacionalidad(const string &value);
    string getAnioIngreso() const;
    void setAnioIngreso(const string &value);
    Alumno(string codigoUniversitario, string especialidad, string nacionalidad, string anioIngreso);
    virtual void mostrar();
};

#endif // ALUMNO_H
