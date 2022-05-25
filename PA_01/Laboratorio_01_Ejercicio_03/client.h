#ifndef CLIENT_H
#define CLIENT_H
#include <carlist.h>

class Client
{
private:
    static int counter;
    string code;
    string names;
    string surnames;
    string id;
    unsigned short age;
    bool gender;
    CarList *cars;
public:
    ~Client();
    Client();
    Client(string names,string surnames, string id, unsigned short age,
           bool gender);

    string getCode() const;

    string getNames() const;
    void setNames(const string &value);

    string getSurnames() const;
    void setSurnames(const string &value);

    string getId() const;
    void setId(const string &value);

    unsigned short getAge() const;
    void setAge(unsigned short value);

    bool getGender() const;
    void setGender(bool value);
    string getGenderAsString();

    CarList *getCars() const;
    void setCars(CarList *value);
    void show(int rowNumber, int itemNumber);
};

#endif // CLIENT_H
