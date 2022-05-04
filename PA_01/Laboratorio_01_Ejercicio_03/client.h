#ifndef CLIENT_H
#define CLIENT_H
#include <carlist.h>

class Client
{
private:
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
    void setCode(const string &value);

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

    CarList *getCars() const;
    void setCars(CarList *value);
};

#endif // CLIENT_H
