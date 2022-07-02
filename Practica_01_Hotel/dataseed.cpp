#include "dataseed.h"

void DataSeed::seed(Hotel *hotel){
    Room *room_1,*room_2;
    Client *client_1,*client_2;

    hotel->setName("SIN COMENTARIOS");
    hotel->setAddress("Calle Lora y Cordero 867, Chiclayo");
    hotel->setRuc("20167834567");

    room_1 = new Room(403,100,4,"clasica","ocupada");
    room_2 = new Room(507,150,5,"matrimonial","ocupada");

    client_1 = new Client("Maria","Chavez","69523698","Av. Balta 539",
                          "902367415",35,false,"05/04/2022","07/04/2022",2);
    client_2 = new Client("Felipe","Torres","74652185","La Victoria 534",
                          "958848347",19,true,"07/05/2022","10/05/2022",3);
    //camelCase--lo de siempre
    //PascalCase--Crear Clases
    //snake_case--CargaDatos

    room_1->getClients()->insert(client_1);
    room_2->getClients()->insert(client_2);

    hotel->getRooms()->insert(room_1);
    hotel->getRooms()->insert(room_2);
}
