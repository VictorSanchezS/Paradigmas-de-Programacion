#ifndef DOCENTE_H
#define DOCENTE_H
#include <persona.h>

class Docente : public Persona
{
private:

    string profesion;
    bool tipoContrato;
    double sueldo;
public:
    Docente();
    Docente(string profesion,bool tipoContrato, double sueldo);
    ~Docente();
    string getProfesion() const;
    void setProfesion(const string &value);
    bool getTipoContrato() const;
    void setTipoContrato(bool value);
    double getSueldo() const;
    void setSueldo(double value);
    virtual void mostrar();
};

#endif // DOCENTE_H
