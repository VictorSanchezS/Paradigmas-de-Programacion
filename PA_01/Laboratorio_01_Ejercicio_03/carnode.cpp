#include "carnode.h"

CarNode::~CarNode(){}

CarNode::CarNode()
{
    this->car = NULL;
    this->next = NULL;
    this->previous = NULL;
}

Car *CarNode::getCar() const{return car;}
void CarNode::setCar(Car *value){car = value;}

CarNode *CarNode::getNext() const{return next;}
void CarNode::setNext(CarNode *value){next = value;}

CarNode *CarNode::getPrevious() const{return previous;}
void CarNode::setPrevious(CarNode *value){previous = value;}

