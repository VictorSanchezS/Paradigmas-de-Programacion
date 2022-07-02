#ifndef CLIENTSLIST_H
#define CLIENTSLIST_H
#include <clientnode.h>

class ClientsList
{
private:
    ClientNode *header;
    int numberClients;
public:
    ClientsList();
    ~ClientsList();

    ClientNode *getHeader() const;
    void setHeader(ClientNode *value);

    int getNumberClients() const;
    void setNumberClients(int value);
    void insert(Client *client);
};

#endif // CLIENTSLIST_H
