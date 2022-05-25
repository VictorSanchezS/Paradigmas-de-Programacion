#ifndef CAR_H
#define CAR_H
#include <basics.h>


class Car
{
private:
    static int counter;
    string code;
    string brand;
    string model;
    float price;
    string plate;
    string colour;
    string status;
public:
    Car();
    ~Car();
    Car(string brand, string model, float price, string plate,
        string colour, string status);

    //Metodos Get y Set

    string getCode() const;
    void setCode(const string &value);

    string getBrand() const;
    void setBrand(const string &value);

    string getModel() const;
    void setModel(const string &value);

    float getPrice() const;
    void setPrice(float value);

    string getPlate() const;
    void setPlate(const string &value);

    string getColour() const;
    void setColour(const string &value);

    string getStatus() const;
    void setStatus(const string &value);


    void show(int rowNumber, int itemNumber);
};

#endif // CAR_H
