#include "clientslist.h"

ClientsList::ClientsList()
{
    //this->header = new ClientNode();
    this->header = NULL;
    this->numberClients = 0;
}

ClientsList::~ClientsList(){}

ClientNode *ClientsList::getHeader() const{return header;}
void ClientsList::setHeader(ClientNode *value){header = value;}

int ClientsList::getNumberClients() const{return numberClients;}
void ClientsList::setNumberClients(int value){numberClients = value;}

// insertar Cliente

void ClientsList::insert(Client *client){
    ClientNode *aux = new ClientNode();

    ClientNode *temp = this->getHeader();

    aux->setClient(client);
    aux->setNext(NULL);

    if (this->getHeader() == NULL) {
        aux->setPrevious(NULL);
        this->setHeader(aux);
    } else {
    while (temp->getNext() != NULL) {
          temp = temp->getNext();
        }

        temp->setNext(aux);
        aux->setPrevious(temp);
    }

    this->setNumberClients(this->getNumberClients() + 1);
}
