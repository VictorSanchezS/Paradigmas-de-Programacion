#include "battery.h"


string Battery::getModel() const
{
    return model;
}

void Battery::setModel(const string &value)
{
    model = value;
}

string Battery::getAmperage() const
{
    return amperage;
}

void Battery::setAmperage(const string &value)
{
    amperage = value;
}
Battery::Battery(string model, string amperage)
{
    this->model = model;
    this->amperage = amperage;
}

Battery::~Battery()
{

}

void Battery::mostrar(){
    cout << "Bateria: " << this->model << " - " << this->amperage << endl;

}

