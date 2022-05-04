#include "clientlist.h"

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

//Menu

int ClientList::menu(){
    int opc;
    system("cls");
    position(40, 3); colour(10);cout<<"======================================";
    position(40, 4); colour(10);cout<<"||    Laboratorio 01 Ejercicio 03   ||";
    position(40, 5); colour(10);cout<<"======================================";
    colour(7);
    position(40, 6); colour(10);cout<<"======================================";
    position(40, 7); colour(10);cout<<"||         MENU DE OPCIONES         ||";
    position(40, 8); colour(10);cout<<"======================================";

    position(40, 10); colour(10);cout<<"[1] Registrar Persona";
    position(40, 11); colour(10);cout<<"[2] Listar Personas";
    position(40, 12); colour(10);cout<<"[3] Buscar Persona";
    position(40, 13); colour(10);cout<<"[4] Persona con sueldo Mayor";
    position(40, 14);colour(10);cout<<"[0] Salir";
    do{
        position(40, 16);colour(33);cout<<"[*] INGRESE OPCION: ";
        cin>>opc;
    }while(!( opc < 5 ));
    system("color 7");
    return opc;
}
