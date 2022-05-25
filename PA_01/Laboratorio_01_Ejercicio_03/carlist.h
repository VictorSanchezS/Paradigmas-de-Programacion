#ifndef CARLIST_H
#define CARLIST_H
#include <carnode.h>

class CarList
{
private:
    CarNode *header;
    int numberCars;
public:
    CarList();
    ~CarList();

    CarNode *getHeader() const;
    void setHeader(CarNode *value);

    int getNumberCars() const;
    void setNumberCars(int value);
    void insert(Car *car);
    //car *pickCar
};

#endif // CARLIST_H
