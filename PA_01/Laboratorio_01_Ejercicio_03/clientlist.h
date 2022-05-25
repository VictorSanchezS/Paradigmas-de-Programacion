#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include <client.h>

class ClientList
{
private:
    int max;
    int numberClients;
    Client *header;

    void grow();

public:
    ClientList();
    ~ClientList();

    int getMax() const;
    void setMax(int value);

    int getNumberClients() const;
    void setNumberClients(int value);

    Client *getHeader() const;
    void setHeader(Client *value);

    void insert(Client *client);
    Client *pickClient(string message);
    Client *findClientById(string id);
    void show(int rowNumber);
    Car *findCarByPlate(string plate);
};

#endif // CLIENTLIST_H
