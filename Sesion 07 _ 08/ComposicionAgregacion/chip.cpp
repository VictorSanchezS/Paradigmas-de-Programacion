#include "chip.h"


string Chip::getNumber() const
{
    return number;
}

void Chip::setNumber(const string &value)
{
    number = value;
}

string Chip::getCompany() const
{
    return company;
}

void Chip::setCompany(const string &value)
{
    company = value;
}

double Chip::getPrice() const
{
    return price;
}

void Chip::setPrice(double value)
{
    price = value;
}
Chip::Chip()
{

}

Chip::Chip(string number, string company,double price)
{
    this->number = number;
    this->company = company;
    this->price = price;
}

Chip::~Chip()
{

}

void Chip::mostrar(){
    cout << "Chip: " << this->number << " - " << this->company<< " - " << this->price << endl;
}
