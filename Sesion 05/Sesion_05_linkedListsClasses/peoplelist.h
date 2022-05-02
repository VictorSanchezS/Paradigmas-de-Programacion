#ifndef PEOPLELIST_H
#define PEOPLELIST_H
#include <personnode.h>

class PeopleList
{
private:
    PersonNode *header;
    unsigned short numberPeople;
public:
    PeopleList();
    ~PeopleList();
    PersonNode *getHeader() const;
    void setHeader(PersonNode *value);
    unsigned short getNumberPeople() const;
    void setNumberPeople(unsigned short value);
    void position(int x, int y);
    void colour(int x);
    string readText(string message);
    unsigned short menu();
    //opc 1 Registar Persona
    void insertPerson(Person *persona);
    void registerPerson();
    //opc 2 Listar Personas
    void showPeople();
    //opc 3 Buscar Persona
    void searchPerson();
    //opc 4 Persona con sueldo Mayor
    PersonNode *higherPaidPerson();
};

#endif // PEOPLELIST_H
