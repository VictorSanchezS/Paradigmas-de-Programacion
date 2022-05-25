#ifndef PHONE_H
#define PHONE_H
#include <iostream>
#include <chip.h>
#include <battery.h>

using namespace std;


class Phone
{
private:
    string brand;
    string model;
    double price;
    string colour;
    Chip *chip;             // agregacion
    Battery *battery;       // Composicion

public:
    Phone();
    ~Phone();
    string getBrand() const;
    void setBrand(const string &value);
    string getModel() const;
    void setModel(const string &value);
    double getPrice() const;
    void setPrice(double value);
    string getColour() const;
    void setColour(const string &value);

    Chip *getChip() const;
    void setChip(Chip *value);

    Battery *getBattery() const;
    void setBattery(const Battery *value);

    void agregarChip(Chip *nuevoChip);
    void mostrar();
    Phone(string model, string brand, string colour, string batteryModel, string amperage);

};

#endif // PHONE_H
