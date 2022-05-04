#ifndef CARLIST_H
#define CARLIST_H
#include <carnode.h>

class CarList
{
private:
    CarNode *header;
    int numberCars;
    int max;
public:
    CarList();
    ~CarList();

    CarNode *getHeader() const;
    void setHeader(CarNode *value);

    int getNumberCars() const;
    void setNumberCars(int value);

    int getMax() const;
    void setMax(int value);
};

#endif // CARLIST_H
