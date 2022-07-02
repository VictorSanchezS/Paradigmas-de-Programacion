#include "roomslist.h"
#define increase 3

RoomsList::RoomsList()
{
    //this->header = new Room();
    this->header = NULL;
    this->numberRooms = 0;
    this->max = 0;
}

RoomsList::~RoomsList(){}

Room *RoomsList::getHeader() const{return header;}
void RoomsList::setHeader(Room *value){header = value;}

int RoomsList::getNumberRooms() const{return numberRooms;}
void RoomsList::setNumberRooms(int value){numberRooms = value;}

int RoomsList::getMax() const{return max;}
void RoomsList::setMax(int value){max = value;}


//crecer Lista Dinamica de Cuartos
void RoomsList::grow(){
    Room *aux = new Room[this->max+ increase];

    for(int i = 0; i < this->max; i++){
        *(aux + i) = *(this->header + i);
    }

    this->header = aux;
    this->max += increase;
}

// insert Habitacion
void RoomsList::insert(Room *room){
    if(this->numberRooms == this->max){
        this->grow();
    }
    *(this->header + this->numberRooms) = *room;
    this->numberRooms++;
}


// Escojer Cuarto

Room *RoomsList::pickRoom(string message) {

    Room *aux = NULL;
    int option;
    int y = 0;

    if (this->numberRooms == 0) {
        return NULL;
    }

    cout << message;
    Basics::position(17,8);cout << "Escoja entre las " << this->getNumberRooms() << " habitaciones siguientes:";

    for (int x = 0; x < this->getNumberRooms(); x++ && y++) {
        aux = this->getHeader() + x;


        Basics::position(17,10 + x);cout << "[" << x + 1 << "]";
        cout << " - Habitacion: ";
        cout << aux->getRoomNumber();
    }


    Basics::position(17,12 + y ); cout << "Introduzca la  dopcioneseada: ";
    cin >> option;

    while (!(1 <= option && option <= this->getNumberRooms())) {
    cout << "Por favor, introduzca un valor entre 1 y " << this->getNumberRooms()
         << "." << endl;
    fflush(stdin);
    cin >> option;
    }

    return (this->getHeader() + option - 1);
}

// listar Cuartos ocupados y/o libres

void RoomsList::show(int rowNumber){
    Room *auxRoom;
    for(int x = 0;x < this->numberRooms; x++){
        auxRoom = this->header + x;

        if(auxRoom->getStatus() == "libre" ){
            auxRoom->show(rowNumber + x + 1, x + 1);
        }
        if(auxRoom->getStatus() == "ocupada" ){
            auxRoom->show(rowNumber + x + 1, x + 1);
        }
    }
}


// Buscar Clientre por Dni

Client *RoomsList::findClientById(string idToSearch){
    Room *auxRoom;
    ClientNode *auxClientNode;



    for(int x = 0; x < this->getNumberRooms();x++){
        auxRoom = this->header + x;


        auxClientNode = auxRoom->getClients()->getHeader();
        while(auxClientNode != NULL){
            if(auxClientNode->getClient()->getId() == idToSearch){
                return auxClientNode->getClient();
            }
            auxClientNode = auxClientNode->getNext();
        }
    }
    return NULL;
}






























