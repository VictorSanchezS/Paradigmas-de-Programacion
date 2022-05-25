#include "clientlist.h"
#define increase 3

ClientList::ClientList()
{
    this->header = NULL;
    this->max = 0;
    this->numberClients = 0;
}

ClientList::~ClientList(){}

int ClientList::getMax() const{return max;}
void ClientList::setMax(int value){max = value;}

int ClientList::getNumberClients() const{return numberClients;}
void ClientList::setNumberClients(int value){numberClients = value;}

Client *ClientList::getHeader() const{return header;}
void ClientList::setHeader(Client *value){header = value;}

// Insertar Cliente

void ClientList::grow(){
    Client *aux = new Client[this->numberClients + increase];

    for(int i = 0; i < this->numberClients;i++){
        *(aux + i) = *(this->header + i);
    }
    this->header = aux;
    this->max += increase;
}

void ClientList::insert(Client *client){
    if(this->numberClients == this->max){
        this->grow();
    }

    *(this->header + this->numberClients) = *client;
    this->numberClients++;
}

// Escojer cliente

Client *ClientList::pickClient(string message) {

    Client *aux = NULL;
    int option;
    int y = 0;

    if (this->numberClients == 0) {
        return NULL;
    }

    cout << message;
    Basics::position(17,8);cout << "Escoja entre los " << this->getNumberClients() << " clientes siguientes:";

    for (int x = 0; x < this->getNumberClients(); x++ && y++) {
        aux = this->getHeader() + x;


        Basics::position(17,10 + x);cout << "[" << x + 1 << "]";
        cout << " - Cliente: ";
        //cout << aux->getCode();
        //cout << " - ";
        cout << aux->getNames();
        cout << " ";
        cout << aux->getSurnames();
    }


    Basics::position(17,12 + y ); cout << "Introduzca la opcion deseada: ";
    cin >> option;

    while (!(1 <= option && option <= this->getNumberClients())) {
    cout << "Por favor, introduzca un valor entre 1 y " << this->getNumberClients()
         << "." << endl;
    fflush(stdin);
    cin >> option;
    }

    return (this->getHeader() + option - 1);
}

// mostrar clientes

void ClientList::show(int rowNumber) {
    
  for (int x = 0; x < this->numberClients; x++) {
      (*(this->header + x)).show(rowNumber + x + 1, x + 1);
  }
}

// Encontrar cliente por dni

Client *ClientList::findClientById(string id){
    Client *client = NULL;

    if(this->numberClients == 0){
        return NULL;
    }

    for(int x = 0; x < this->numberClients; x++){
        client = this->header + x;

        if(client->getId() == id)
        return client;

    }
    return NULL;
}

// Buscar Carro por placa

Car *ClientList::findCarByPlate(string plate){
    Client *client = NULL;
    CarNode *carNode = NULL;

    if(this->numberClients == 0){
        return NULL;
    }

    for ( int x = 0; x < this->numberClients; x++){
        client = this->header + x;

        carNode = client->getCars()->getHeader();
        while(carNode != NULL){
            if(carNode->getCar()->getPlate() == plate)
                return carNode->getCar();

            carNode = carNode->getNext();
        }
    }
    return NULL;
}
