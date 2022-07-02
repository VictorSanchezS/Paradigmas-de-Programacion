#include "room.h"

int Room::counter = 1;

Room::~Room(){}
Room::Room(){}

Room::Room(unsigned short roomNumber, float price, unsigned short floor,
           string roomType, string status){

    this->code = "Hab-" + to_string(Room::counter++);

    this->roomNumber = roomNumber;
    this->price = price;
    this->floor = floor;
    this->roomType = roomType;
    this->status = status;

    this->clients = new ClientsList();
}

string Room::getCode() const{return code;}

unsigned short Room::getRoomNumber() const{return roomNumber;}
void Room::setRoomNumber(unsigned short value){roomNumber = value;}

float Room::getPrice() const{return price;}
void Room::setPrice(float value){price = value;}

unsigned short Room::getFloor() const{return floor;}
void Room::setFloor(unsigned short value){floor = value;}

string Room::getRoomType() const{return roomType;}
void Room::setRoomType(const string &value){roomType = value;}

string Room::getStatus() const{return status;}
void Room::setStatus(const string &value){status = value;}

ClientsList *Room::getClients() const{return clients;}
void Room::setClients(ClientsList *value){clients = value;}

// Mostrar Cuarto

void Room::show(int rowNumber, int itemNumber) {
    Basics::position(0, rowNumber);
    cout << itemNumber;
    Basics::position(5, rowNumber);
    cout << this->getCode();
    Basics::position(15, rowNumber);
    cout << this->getRoomNumber();
    Basics::position(30, rowNumber);
    cout << this->getPrice();
    Basics::position(45, rowNumber);
    cout << this->getFloor();
    Basics::position(55, rowNumber);
    cout << this->getRoomType();
    Basics::position(75, rowNumber);
    cout << this->getStatus();
}
