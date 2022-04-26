#ifndef PET_H
#define PET_H
#include <iostream>

using namespace std;


class pet
{
private:
    string name;
    float weight;
    float size;
    string color;
    unsigned short age;
public:
    pet();
    ~pet();
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

    void changeName(const string &value);
};

#endif // PET_H
