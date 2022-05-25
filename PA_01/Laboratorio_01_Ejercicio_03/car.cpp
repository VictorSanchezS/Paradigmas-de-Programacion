#include "car.h"

int Car::counter = 1;

Car::Car(){}
Car::~Car(){}

Car::Car( string brand, string model, float price, string plate, string colour, string status){

    this->code = "car - " + to_string(Car::counter);
    Car::counter++;

    this->brand = brand;
    this->model = model;
    this->price = price;
    this->plate = plate;
    this->colour = colour;
    this->status = status;
}

string Car::getCode() const{return code;}
void Car::setCode(const string &value){code = value;}

string Car::getBrand() const{return brand;}
void Car::setBrand(const string &value){brand = value;}

string Car::getModel() const{return model;}
void Car::setModel(const string &value){model = value;}

float Car::getPrice() const{return price;}
void Car::setPrice(float value){price = value;}

string Car::getPlate() const{return plate;}
void Car::setPlate(const string &value){plate = value;}

string Car::getColour() const{return colour;}
void Car::setColour(const string &value){colour = value;}

string Car::getStatus() const{return status;}
void Car::setStatus(const string &value){status = value;}

void Car::show(int rowNumber,int itemNumber){
    Basics::position(0, rowNumber);
    cout << itemNumber;
    Basics::position(5, rowNumber);
    cout << this->getCode();
    Basics::position(15, rowNumber);
    cout << this->getBrand();
    Basics::position(30, rowNumber);
    cout << this->getModel();
    Basics::position(45, rowNumber);
    cout << this->getPrice();
    Basics::position(60, rowNumber);
    cout << this->getPlate();
    Basics::position(70, rowNumber);
    cout << this->getColour();
    Basics::position(80, rowNumber);
    cout << this->getStatus();
}
