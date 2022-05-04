#include "car.h"


string Car::getCode() const
{
    return code;
}

void Car::setCode(const string &value)
{
    code = value;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &value)
{
    brand = value;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &value)
{
    model = value;
}

float Car::getPrice() const
{
    return price;
}

void Car::setPrice(float value)
{
    price = value;
}

string Car::getPlate() const
{
    return plate;
}

void Car::setPlate(const string &value)
{
    plate = value;
}

string Car::getColour() const
{
    return colour;
}

void Car::setColour(const string &value)
{
    colour = value;
}

string Car::getStatus() const
{
    return status;
}

void Car::setStatus(const string &value)
{
    status = value;
}
Car::Car()
{
    this->price = 0.0;
}

Car::~Car()
{

}

Car::Car(string code, string brand, string model, float price, string plate, string colour, string status){
    this->code = code;
    this->brand = brand;
    this->model = model;
    this->price = price;
    this->plate = plate;
    this->colour = colour;
    this->status = status;
}

