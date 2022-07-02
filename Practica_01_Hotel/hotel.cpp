#include "hotel.h"

Hotel::Hotel(){this->rooms = new RoomsList();}
Hotel::~Hotel(){}

string Hotel::getName() const{return name;}
void Hotel::setName(const string &value){name = value;}

string Hotel::getAddress() const{return address;}
void Hotel::setAddress(const string &value){address = value;}

string Hotel::getRuc() const{return ruc;}
void Hotel::setRuc(const string &value){ruc = value;}

RoomsList *Hotel::getRooms() const{return rooms;}
void Hotel::setRooms(RoomsList *value){rooms = value;}

