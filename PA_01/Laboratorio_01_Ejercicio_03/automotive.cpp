#include "automotive.h"

Automotive::~Automotive(){}
Automotive::Automotive(){
    this->clients = new ClientList();
}

string Automotive::getName() const{return name;}
void Automotive::setName(const string &value){name = value;}

ClientList *Automotive::getClients() const{return clients;}
void Automotive::setClients(ClientList *value){clients = value;}



