#ifndef HOUSE_H
#define HOUSE_H

#include <pet.h>

class house
{
private:
    string address;
    string color;
    float area;
    string owner;
    pet mascota;
    bool condition;
public:
    house();//constructor
    ~house();//destructor
    house(string address,float area);//sobrecarga de un constructor
    house(string address,string color,float area,string owner,bool condition);
    string getAddress() const;
    void setAddress(const string &value);

    string getColor() const;
    void setColor(const string &value);

    float getArea() const;
    void setArea(float value);

    string getOwner() const;
    void setOwner(const string &value);
    bool getCondition() const;
    void setCondition(bool value);
    void changeCondition(bool condition);
    void changeOwner(string owner);
    pet getMascota() const;
    void setMascota(const pet &value);
};

#endif // HOUSE_H
