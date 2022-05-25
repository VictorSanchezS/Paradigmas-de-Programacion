#include "client.h"

int Client::counter = 1;

Client::~Client(){}
Client::Client(){}
Client::Client(string names, string surnames, string id, unsigned short age,
               bool gender){
    this->code = "Cliente - " + to_string(Client::counter);
    Client::counter++;

    this->names = names;
    this->surnames = surnames;
    this->id = id;
    this->age = age;
    this->gender = gender;

    this->cars = new CarList();
}

string Client::getCode() const{return code;}

string Client::getNames() const{return names;}
void Client::setNames(const string &value){names = value;}

string Client::getSurnames() const{return surnames;}
void Client::setSurnames(const string &value){surnames = value;}

string Client::getId() const{return id;}
void Client::setId(const string &value){id = value;}

unsigned short Client::getAge() const{return age;}
void Client::setAge(unsigned short value){age = value;}

bool Client::getGender() const{return gender;}
void Client::setGender(bool value){gender = value;}
string Client::getGenderAsString(){
    if(this->gender)
        return "Masculino";
    else
        return "Femenino";
}

CarList *Client::getCars() const{return cars;}
void Client::setCars(CarList *value){cars = value;}

// Mostrar Cliente

void Client::show(int rowNumber, int itemNumber){
    Basics::position(0, rowNumber);
    cout << itemNumber;
    Basics::position(5, rowNumber);
    cout << this->getCode();
    Basics::position(20, rowNumber);
    cout << this->getNames();
    Basics::position(40, rowNumber);
    cout << this->getSurnames();
    Basics::position(60, rowNumber);
    cout << this->getId();
    Basics::position(70, rowNumber);
    cout << this->getAge();
    Basics::position(76, rowNumber);
    cout << this->getGenderAsString();
    
}
