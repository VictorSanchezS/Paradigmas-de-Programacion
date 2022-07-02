#ifndef ROOMSLIST_H
#define ROOMSLIST_H
#include <room.h>

class RoomsList
{
private:
    Room *header;
    int numberRooms;
    int max;
    void grow();
public:
    RoomsList();
    ~RoomsList();

    Room *getHeader() const;
    void setHeader(Room *value);

    int getNumberRooms() const;
    void setNumberRooms(int value);

    int getMax() const;
    void setMax(int value);

    //Metodo para insertar Habitacion
    void insert(Room *room);
    //Metodo para escojer una Habitacion
    Room *pickRoom(string message);
    //Metodo para mostrar Habitaciones Libres y/o ocupadas
    void show(int rowNumber);
    //Metodo para mostrar Lista de clientes en cierta fecha
    void showClients(int rowNumber, string dateToSearch);
    //Metodo para buscar cliente, en este caso se hizo por DNI
    Client *findClientById(string idToSearch);
};

#endif // ROOMSLIST_H
