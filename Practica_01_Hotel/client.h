#ifndef CLIENT_H
#define CLIENT_H
#include <basics.h>

class Client
{
private:
    static int counter;
    string code;
    string names;
    string surnames;
    string id;
    string address;
    string phone;
    unsigned short age;
    bool gender;
    string arrivalDate;
    string departureDate;
    int accommodationDays;
public:
    ~Client();
    Client();
    Client(string names, string surnames, string id,
           string address, string phone,
           unsigned short age, bool gender, string arrivalDate,
           string departureDate,int accommodationDays);

    string getCode() const;

    string getNames() const;
    void setNames(const string &value);

    string getSurnames() const;
    void setSurnames(const string &value);

    string getId() const;
    void setId(const string &value);

    string getAddress() const;
    void setAddress(const string &value);

    string getPhone() const;
    void setPhone(const string &value);

    unsigned short getAge() const;
    void setAge(unsigned short value);

    bool getGender() const;
    void setGender(bool value);
    string getGenderAsString();

    string getArrivalDate() const;
    void setArrivalDate(const string &value);

    string getDepartureDate() const;
    void setDepartureDate(const string &value);

    int getAccommodationDays() const;
    void setAccommodationDays(int value);

    //Metodo para mostrar cliente
    void show(int rowNumber, int itemNumber);

};

#endif // CLIENT_H
