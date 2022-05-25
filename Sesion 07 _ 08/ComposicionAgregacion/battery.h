#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>

using namespace std;


class Battery
{
private:
    string model;
    string amperage;
public:
    Battery();
    ~Battery();
    string getModel() const;
    void setModel(const string &value);
    string getAmperage() const;
    void setAmperage(const string &value);
    Battery(string model, string amperage);
    void mostrar();
};

#endif // BATTERY_H
