#ifndef CHIP_H
#define CHIP_H
#include <iostream>

using namespace std;


class Chip
{
private:
    string number;
    string company;
    double price;
public:
    Chip();
    ~Chip();
    string getNumber() const;
    void setNumber(const string &value);
    string getCompany() const;
    void setCompany(const string &value);
    double getPrice() const;
    void setPrice(double value);
    Chip(string number, string company, double price);
    void mostrar();
};

#endif // CHIP_H
