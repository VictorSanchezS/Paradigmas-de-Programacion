#include "carlist.h"

CarList::CarList(){
    this->header = NULL;
    this->max = 0;
    this->numberCars = 0;
}

CarList::~CarList(){}

CarNode *CarList::getHeader() const{return header;}
void CarList::setHeader(CarNode *value){header = value;}

int CarList::getNumberCars() const{return numberCars;}
void CarList::setNumberCars(int value){numberCars = value;}

int CarList::getMax() const{return max;}
void CarList::setMax(int value){max = value;}


