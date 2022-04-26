#include "house.h"


bool house::getCondition() const
{
    return condition;
}

void house::setCondition(bool value)
{
    condition = value;
}

pet house::getMascota() const
{
    return mascota;
}

void house::setMascota(const pet &value)
{
    mascota = value;
}
house::house()
{
    condition = false;
    color = "blanco";
    area = 120.00;
    owner = "Victor Sanchez";
}

house::house(string address, float area)
{
    this->address = address;
    this->area = area;
}

house::house(string address,string color,float area,string owner,bool condition){
    this->address = address;
    this->color = color;
    this->area = area;
    this->owner = owner;
    this->condition = condition;
}

house::~house()
{

}

string house::getAddress() const
{
    return address;
}

void house::setAddress(const string &value)
{
address = value;
}
string house::getColor() const
{
return color;
}

void house::setColor(const string &value)
{
color = value;
}
float house::getArea() const
{
return area;
}

void house::setArea(float value)
{
area = value;
}
string house::getOwner() const
{
return owner;
}

void house::setOwner(const string &value)
{
owner = value;
}

void house::changeCondition(bool condition){
    this->condition = condition;
}

void house::changeOwner(string owner){
    this->owner = owner;
}
