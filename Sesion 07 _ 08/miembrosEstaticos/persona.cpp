#include "persona.h"


string Persona::getCode() const
{
    return code;
}

void Persona::setCode(const string &value)
{
    code = value;
}

string Persona::getFirstName() const
{
    return firstName;
}

void Persona::setFirstName(const string &value)
{
    firstName = value;
}

string Persona::getLastName() const
{
    return lastName;
}

void Persona::setLastName(const string &value)
{
    lastName = value;
}

double Persona::getSalary() const
{
    return salary;
}

void Persona::setSalary(double value)
{
    salary = value;
}

bool Persona::getType() const
{
    return type;
}

void Persona::setType(bool value)
{
    type = value;
}

string Persona::getId() const
{
    return id;
}

void Persona::setId(const string &value)
{
    id = value;
}
Persona::Persona(bool type)
{
    if(type == true){
        code = "C";
    }
    else
        code = "T";

    this->code = code + to_string(Persona::counter++);
}

Persona::Persona(string code, string lastName, string firstName,
                 string id,bool type,double salary)
{
    this->code = "Persona - " + to_string(Persona::counter++);
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = id;
    this->salary = salary;
    this->type = type;
}


Persona::~Persona()
{

}

int Persona::counter = 1; // inicializar
