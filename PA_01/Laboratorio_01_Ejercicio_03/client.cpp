#include "client.h"

Client::~Client(){}

Client::Client()
{
    //this->cars = NULL;
    //this->age = 0;
    //this->gender = false;
}

Client::Client(string names, string surnames, string id, unsigned short age,
               bool gender){
    this->names = names;
    this->surnames = surnames;
    this->id = id;
    this->age = age;
    this->gender = gender;
}

string Client::getCode() const{return code;}
void Client::setCode(const string &value){code = value;}

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

CarList *Client::getCars() const{return cars;}
void Client::setCars(CarList *value){cars = value;}



