#ifndef CARNODE_H
#define CARNODE_H
#include <car.h>


class CarNode
{
private:
    Car *car;
    CarNode *next;
    CarNode *previous;
public:
    CarNode();
    ~CarNode();

    Car *getCar() const;
    void setCar(Car *value);

    CarNode *getNext() const;
    void setNext(CarNode *value);

    CarNode *getPrevious() const;
    void setPrevious(CarNode *value);
};

#endif // CARNODE_H
