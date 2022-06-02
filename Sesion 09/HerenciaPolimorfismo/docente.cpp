#include "docente.h"


string Docente::getProfesion() const
{
    return profesion;
}

void Docente::setProfesion(const string &value)
{
    profesion = value;
}

bool Docente::getTipoContrato() const
{
    return tipoContrato;
}

void Docente::setTipoContrato(bool value)
{
    tipoContrato = value;
}

double Docente::getSueldo() const
{
    return sueldo;
}

void Docente::setSueldo(double value)
{
    sueldo = value;
}
Docente::Docente()
{

}

Docente::Docente(string profesion, bool tipoContrato, double sueldo)
{
    this->profesion = profesion;
    this->tipoContrato = tipoContrato;
    this->sueldo = sueldo;
}

Docente::~Docente()
{

}

void Docente::mostrar()
{
    cout << "DATOS COMPLETOS DEL DOCENTE" << endl;
    cout << "===========================" << endl;
    Persona::mostrar();
    cout << "Profesion: " << this->profesion << endl;
    cout << "TipoContrato: ";
    if(this->tipoContrato){
        cout << "NOMBRADO" << endl;
    }
    else{
        cout << "CONTRATADO" << endl;
    }
    cout << "Sueldo: " << this->sueldo << endl;
}
