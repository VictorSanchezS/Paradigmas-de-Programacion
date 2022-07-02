#include "clientnode.h"

ClientNode::ClientNode()
{
    //this->client = new Client();
    this->client = NULL;
    this->next = NULL;
    this->previous = NULL;
}

ClientNode::~ClientNode(){}

Client *ClientNode::getClient() const{return client;}
void ClientNode::setClient(Client *value){client = value;}

ClientNode *ClientNode::getNext() const{return next;}
void ClientNode::setNext(ClientNode *value){next = value;}

ClientNode *ClientNode::getPrevious() const{return previous;}
void ClientNode::setPrevious(ClientNode *value){previous = value;}

