#ifndef CLIENTNODE_H
#define CLIENTNODE_H
#include <client.h>

class ClientNode
{
private:
    Client *client;
    ClientNode *next;
    ClientNode *previous;
public:
    ClientNode();
    ~ClientNode();

    Client *getClient() const;
    void setClient(Client *value);

    ClientNode *getNext() const;
    void setNext(ClientNode *value);

    ClientNode *getPrevious() const;
    void setPrevious(ClientNode *value);
};

#endif // CLIENTNODE_H
