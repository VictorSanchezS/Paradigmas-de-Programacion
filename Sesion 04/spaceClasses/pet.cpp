#include "pet.h"

pet::pet()
{
    this->name = "Tobi";
    this->color = "Negro";
}

pet::~pet()
{

}

string pet::getName() const
{
return name;
}

void pet::setName(const string &value)
{
name = value;
}
float pet::getWeight() const
{
return weight;
}

void pet::setWeight(float value)
{
weight = value;
}
float pet::getSize() const
{
return size;
}

void pet::setSize(float value)
{
size = value;
}
string pet::getColor() const
{
return color;
}

void pet::setColor(const string &value)
{
color = value;
}
unsigned short pet::getAge() const
{
return age;
}

void pet::setAge(unsigned short value)
{
age = value;
}

void pet::changeName(const string &value){
    this->name = value;
}
