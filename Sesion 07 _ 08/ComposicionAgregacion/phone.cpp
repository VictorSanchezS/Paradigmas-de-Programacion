#include "phone.h"


string Phone::getBrand() const
{
    return brand;
}

void Phone::setBrand(const string &value)
{
    brand = value;
}

string Phone::getModel() const
{
    return model;
}

void Phone::setModel(const string &value)
{
    model = value;
}

double Phone::getPrice() const
{
    return price;
}

void Phone::setPrice(double value)
{
    price = value;
}

string Phone::getColour() const
{
    return colour;
}

void Phone::setColour(const string &value)
{
    colour = value;
}



Chip *Phone::getChip() const
{
    return chip;
}

void Phone::setChip(Chip *value)
{
    chip = value;
}

Battery *Phone::getBattery() const
{
    return battery;
}

void Phone::setBattery(Battery *value)
{
    battery = value;
}
Phone::Phone()
{

}

Phone::Phone(string model, string brand, string colour,string batteryModel,string amperage)
{
    this->model = model;
    this->brand = brand;
    this->price = price;
    this->colour = colour;
    // Composicion
    this->battery = new Battery(batteryModel, amperage);

    // Agregacion
    this->chip = NULL;

}

Phone::~Phone()
{

}

void Phone::agregarChip(Chip *nuevoChip){
    this->chip = nuevoChip;
}

void Phone::mostrar(){
    cout << "Telefono: " << endl;
    cout << "Modelo: " << this->model << endl;
    cout << "Marca: " << this->brand << endl;
    cout << "Precio: " << this->price << endl;
    cout << "Color: " << this->colour << endl;
}
