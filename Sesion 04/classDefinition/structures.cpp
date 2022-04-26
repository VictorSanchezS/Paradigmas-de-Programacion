#include <iostream>

using namespace std;

class pet{
private:
    string name;
    float weight;
    float size;
    string color;
    unsigned short age;
public:
    string getName() const;
    void setName(const string &value);

    float getWeight() const;
    void setWeight(float value);

    float getSize() const;
    void setSize(float value);

    string getColor() const;
    void setColor(const string &value);

    unsigned short getAge() const;
    void setAge(unsigned short value);

};



class house{
private:
    string address;
    string color;
    float area;
    string owner;
    pet mascota;
public:
    string getAddress() const;
    void setAddress(const string &value);

    string getColor() const;
    void setColor(const string &value);

    float getArea() const;
    void setArea(float value);

    string getOwner() const;
    void setOwner(const string &value);


};

string house::getAddress() const
{
return address;
}

void house::setAddress(const string &value)
{
address = value;
}
string house::getColor() const
{
return color;
}

void house::setColor(const string &value)
{
color = value;
}
float house::getArea() const
{
return area;
}

void house::setArea(float value)
{
area = value;
}
string house::getOwner() const
{
return owner;
}

void house::setOwner(const string &value)
{
owner = value;
}




string pet::getName() const
{
return name;
}

void pet::setName(const string &value)
{
name = value;
}
float pet::getWeight() const
{
return weight;
}

void pet::setWeight(float value)
{
weight = value;
}
float pet::getSize() const
{
return size;
}

void pet::setSize(float value)
{
size = value;
}
string pet::getColor() const
{
return color;
}

void pet::setColor(const string &value)
{
color = value;
}
unsigned short pet::getAge() const
{
return age;
}

void pet::setAge(unsigned short value)
{
age = value;
}




