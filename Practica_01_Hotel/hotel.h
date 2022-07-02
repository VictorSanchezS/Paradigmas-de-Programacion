#ifndef HOTEL_H
#define HOTEL_H
#include <roomslist.h>

class Hotel
{
private:
    string name;
    string address;
    string ruc;
    RoomsList *rooms;

public:
    Hotel();
    ~Hotel();

    string getName() const;
    void setName(const string &value);

    string getAddress() const;
    void setAddress(const string &value);

    string getRuc() const;
    void setRuc(const string &value);

    RoomsList *getRooms() const;
    void setRooms(RoomsList *value);
};

#endif // HOTEL_H
