#include "alumno.h"


string Alumno::getEspecialidad() const
{
    return especialidad;
}

void Alumno::setEspecialidad(const string &value)
{
    especialidad = value;
}

string Alumno::getCodigoUniversitario() const
{
    return codigoUniversitario;
}

void Alumno::setCodigoUniversitario(const string &value)
{
    codigoUniversitario = value;
}

string Alumno::getNacionalidad() const
{
    return nacionalidad;
}

void Alumno::setNacionalidad(const string &value)
{
    nacionalidad = value;
}

string Alumno::getAnioIngreso() const
{
    return anioIngreso;
}

void Alumno::setAnioIngreso(const string &value)
{
    anioIngreso = value;
}


Alumno::Alumno(string codigoUniversitario, string especialidad, string nacionalidad, string anioIngreso)
{
    this->codigoUniversitario = codigoUniversitario;
    this->especialidad = especialidad;
    this->nacionalidad = nacionalidad;
    this->anioIngreso = anioIngreso;
}

Alumno::Alumno()
{

}

Alumno::~Alumno()
{

}

void Alumno::mostrar()
{
    cout << "DATOS COMPLETOS DEL ALUMNO" << endl;
    cout << "==========================" << endl;
    Persona::mostrar();
    cout << "Especialidad: " << this->especialidad << endl;
    cout << "Codigo Uni.: " << this->codigoUniversitario << endl;
    cout << "Nacionalidad: " << this->nacionalidad << endl;
    cout << "Anio Ingreso: " << this->anioIngreso << endl;
}
