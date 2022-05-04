#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;


class Person
{
private:
    int static counter;
    string code;
    string surnames;
    string names;
    string dateBirth;
    string id;
    string address;
    double salary;
    unsigned short numberChildren;
public:
    Person();
    ~Person();
    string getCode() const;
    void setCode(const string &value);
    string getSurnames() const;
    void setSurnames(const string &value);
    string getNames() const;
    void setNames(const string &value);
    string getDateBirth() const;
    void setDateBirth(const string &value);
    string getId() const;
    void setId(const string &value);
    string getAddress() const;
    void setAddress(const string &value);
    double getSalary() const;
    void setSalary(double value);
    unsigned short getNumberChildren() const;
    void setNumberChildren(unsigned short value);
    //basicas
    int readInteger( string message );
    unsigned short readUnsignedShort( string message );
    unsigned short readAge( string message );
    string readText(string message);
    string readId(string message);
    double readReal (string message);
    bool readGender(string message);
    void position(int x, int y);
    void colour(int x);
    //leer Persona
    void readPerson();
    // mostrar Persona
    void showPerson(int x);
};

#endif // PERSON_H
