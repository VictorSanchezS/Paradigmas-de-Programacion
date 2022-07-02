#include "client.h"

int Client::counter = 1;

Client::Client(){}

Client::Client(string names,string surnames, string id,
               string address, string phone, unsigned short age,
               bool gender, string arrivalDate, string departureDate,int accommodationDays)
{
    this->code = "Cli-" + to_string(Client::counter++);
    this->names = names;
    this->surnames = surnames;
    this->id = id;
    this->address = address;
    this->phone = phone;
    this->age = age;
    this->gender = gender;
    this->arrivalDate = arrivalDate;
    this->departureDate = departureDate;
    this->accommodationDays = accommodationDays;
}

Client::~Client(){}

string Client::getCode() const{return code;}

string Client::getNames() const{return names;}
void Client::setNames(const string &value){names = value;}

string Client::getSurnames() const{return surnames;}
void Client::setSurnames(const string &value){surnames = value;}

string Client::getId() const{return id;}
void Client::setId(const string &value){id = value;}

string Client::getAddress() const{return address;}
void Client::setAddress(const string &value){address = value;}

string Client::getPhone() const{return phone;}
void Client::setPhone(const string &value){phone = value;}

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

int Client::getAccommodationDays() const{return accommodationDays;}
void Client::setAccommodationDays(int value){accommodationDays = value;}

string Client::getArrivalDate() const{return arrivalDate;}
void Client::setArrivalDate(const string &value){arrivalDate = value;}

string Client::getDepartureDate() const{return departureDate;}
void Client::setDepartureDate(const string &value){departureDate = value;}

// Mostrar Cliente o Persona

void Client::show(int rowNumber, int itemNumber) {
  Basics::position(0, rowNumber);
  cout << itemNumber;
  Basics::position(5, rowNumber);
  cout << this->getCode();
  Basics::position(15, rowNumber);
  cout << this->getNames();
  Basics::position(30, rowNumber);
  cout << this->getSurnames();
  Basics::position(45, rowNumber);
  cout << this->getId();
  Basics::position(60, rowNumber);
  cout << this->getPhone();
  Basics::position(75, rowNumber);
  cout << this->getAge();
  Basics::position(85, rowNumber);
  cout << this->getGenderAsString();
}
