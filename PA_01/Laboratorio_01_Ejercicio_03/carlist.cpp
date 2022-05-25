#include "carlist.h"

CarNode *CarList::getHeader() const{return header;}
void CarList::setHeader(CarNode *value){header = value;}

int CarList::getNumberCars() const{return numberCars;}
void CarList::setNumberCars(int value){numberCars = value;}

CarList::CarList(){
    this->header = NULL;
    this->numberCars = 0;
}

CarList::~CarList(){}


// insertar carro

void CarList::insert(Car *car){
    CarNode *aux = new CarNode();

    CarNode *temp = this->getHeader();

    aux->setCar(car);
    aux->setNext(NULL);

    if (this->getHeader() == NULL) {
        aux->setPrevious(NULL);
        this->setHeader(aux);
    } else {
    while (temp->getNext() != NULL) {
          temp = temp->getNext();
        }

        temp->setNext(aux);
        aux->setPrevious(temp);
    }

    this->setNumberCars(this->getNumberCars() + 1);
}
