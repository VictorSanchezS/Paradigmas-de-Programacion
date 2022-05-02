#include "personnode.h"


PersonNode *PersonNode::getNext() const
{
    return next;
}

void PersonNode::setNext(PersonNode *value)
{
    next = value;
}

Person *PersonNode::getPersona() const
{
    return persona;
}

void PersonNode::setPersona(Person *value)
{
    persona = value;
}
PersonNode::PersonNode()
{

}

PersonNode::~PersonNode()
{

}

