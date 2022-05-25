#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;


class Persona
{
private:
    static int counter; // contador
    string code; // C1 y E2
    string firstName;
    string lastName;
    string id;
    double salary;
    bool type;  // true = clientes y false = trabajadores
public:
    Persona(bool type);
    Persona(string code, string lastName, string firstName, string id, bool type, double salary);
    ~Persona();
    string getCode() const;
    void setCode(const string &value);
    string getFirstName() const;
    void setFirstName(const string &value);
    string getLastName() const;
    void setLastName(const string &value);
    double getSalary() const;
    void setSalary(double value);
    bool getType() const;
    void setType(bool value);
    string getId() const;
    void setId(const string &value);
};

#endif // PERSONA_H
