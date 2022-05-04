#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include <client.h>

class ClientList
{
private:
    int max;
    int numberClients;
    Client *header;
public:
    ClientList();
    ~ClientList();

    int getMax() const;
    void setMax(int value);

    int getNumberClients() const;
    void setNumberClients(int value);

    Client *getHeader() const;
    void setHeader(Client *value);
};

#endif // CLIENTLIST_H
