#ifndef AUTOMOTIVE_H
#define AUTOMOTIVE_H
#include <clientlist.h>

class Automotive
{
private:
    string name;
    ClientList *clients;
public:
    Automotive();
    ~Automotive();

    string getName() const;
    void setName(const string &value);

    ClientList *getClients() const;
    void setClients(ClientList *value);
};

#endif // AUTOMOTIVE_H
