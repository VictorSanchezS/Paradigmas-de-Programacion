#ifndef ROOM_H
#define ROOM_H
#include <clientslist.h>

class Room
{
private:
    static int counter;
    string code;
    unsigned short roomNumber;
    float price;
    unsigned short floor;
    string roomType;
    string status;

    ClientsList *clients;
public:
    ~Room();
    Room();
    Room(unsigned short roomNumber, float price, unsigned short floor, string roomType, string status);

    string getCode() const;

    unsigned short getRoomNumber() const;
    void setRoomNumber(unsigned short value);

    float getPrice() const;
    void setPrice(float value);

    unsigned short getFloor() const;
    void setFloor(unsigned short value);

    string getRoomType() const;
    void setRoomType(const string &value);

    string getStatus() const;
    void setStatus(const string &value);

    ClientsList *getClients() const;
    void setClients(ClientsList *value);

    //Metodo para mostrar Habitacion
    void show(int rowNumber, int itemNumber);
};

#endif // ROOM_H
