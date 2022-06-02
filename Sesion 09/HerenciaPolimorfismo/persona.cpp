#include "persona.h"

int Persona::contador = 1;

int Persona::getContador()
{
    return contador;
}

void Persona::setContador(int value)
{
    contador = value;
}

string Persona::getCodigo() const
{
    return codigo;
}

void Persona::setCodigo(const string &value)
{
    codigo = value;
}

string Persona::getNombres() const
{
    return nombres;
}

void Persona::setNombres(const string &value)
{
    nombres = value;
}

string Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const string &value)
{
    apellidos = value;
}

string Persona::getDni() const
{
    return dni;
}

void Persona::setDni(const string &value)
{
    dni = value;
}

string Persona::getFechaNacimiento() const
{
    return fechaNacimiento;
}

void Persona::setFechaNacimiento(const string &value)
{
    fechaNacimiento = value;
}
Persona::Persona()
{
    this->codigo = "P-" + to_string(Persona::contador++);
}


Persona::Persona(string nombres, string apellidos, string dni, string fechaNacimiento)
{
    this->codigo = "P-" + to_string(Persona::contador++);
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->dni = dni;
    this->fechaNacimiento = fechaNacimiento;
}

Persona::~Persona()
{

}

void Persona::mostrar(){
    cout << "Codigo: " << this->codigo << endl;
    cout << "Nombres: " << this->nombres << endl;
    cout << "Apellidos: " << this->apellidos << endl;
    cout << "Dni: " << this->dni << endl;
    cout << "Fech Nac.: " << this->fechaNacimiento << endl;
}

