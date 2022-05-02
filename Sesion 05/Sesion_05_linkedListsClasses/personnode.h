#ifndef PERSONNODE_H
#define PERSONNODE_H
#include <person.h>

class PersonNode
{
private:
    PersonNode *next;
    Person *persona;
public:
    PersonNode();
    ~PersonNode();
    PersonNode *getNext() const;
    void setNext(PersonNode *value);
    Person *getPersona() const;
    void setPersona(Person *value);
};

#endif // PERSONNODE_H
