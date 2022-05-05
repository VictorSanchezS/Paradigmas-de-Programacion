#include "peoplelist.h"
#include <windows.h>


PersonNode *PeopleList::getHeader() const
{
    return header;
}

void PeopleList::setHeader(PersonNode *value)
{
    header = value;
}

unsigned short PeopleList::getNumberPeople() const
{
    return numberPeople;
}

void PeopleList::setNumberPeople(unsigned short value)
{
    numberPeople = value;
}
PeopleList::PeopleList()
{
    this->header = NULL;
    this->numberPeople = 0;
}


PeopleList::~PeopleList()
{

}

void PeopleList::position(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;dwPos.X = x;dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void PeopleList::colour(int x){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,x);
}


string PeopleList::readText(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin,text);
    }while(!( text.length() > 0));
    return text;
}


unsigned short PeopleList::menu(){
    unsigned short opc;
    system("cls");
    position(40, 3); colour(10);cout<<"======================================";
    position(40, 4); colour(10);cout<<"||   TALLER LES - SESION 05 - POO   ||";
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

// opc 1 Registrar Persona

void PeopleList::insertPerson(Person *persona){
    PersonNode *aux = new PersonNode();
    PersonNode *temp = new PersonNode();
    temp->setPersona(persona);
    temp->setNext(NULL);
    if(this->header == NULL){
        this->header = temp;
    }
    else{
        aux = this->header;
        while( aux->getNext() != NULL ){
            //aux->setNext(aux->getNext());
            aux = aux->getNext();
        }
        aux->setNext(temp);
    }
    this->numberPeople++;
}

void PeopleList::registerPerson(){
    char answer;
        do{
            Person *person = new Person();
            person->readPerson();
            this->insertPerson(person);
            position(30,14);cout << "Persona Registrada con Exito";
            do{
                position(30,16);cout << "Desea insertar otra Persona?: ";
                fflush(stdin);
                cin.get(answer);
            }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
        }while(!(answer == 'N' || answer == 'n'));
}

// opc 2 Listar Personas


void PeopleList::showPeople(){
    system("cls");
    if(this->numberPeople == 0){
        position(35,5); cout << "Registre Personas";
        system("pause");
        return;
    }

    PersonNode *aux = new PersonNode();
    aux = this->header;
    int x = 0;
    while(aux != NULL){
        aux->getPersona()->showPerson(x);
        x++;
        aux = aux->getNext();
    }
    cout << endl;
    system("pause");
}

//opc 3 Buscar Persona

void PeopleList::searchPerson(){
    system("cls");
    if(this->numberPeople == 0){
        position(35,5); cout << "Registre Personas";
        system("pause");
        return;
    }

    PersonNode *aux = new PersonNode();
    string personToSearch;

    bool sw = false;

    while(aux != NULL){
        personToSearch = this->readText("INGRESE NOMBRE DE PERSONA A BUSCAR: ");
        if(aux->getPersona()->getNames() == personToSearch){
            aux->getPersona()->showPerson(0);
            sw = true;
            break;
        }
        aux = aux->getNext();
    }

    if(sw == false){
         position(45,5);cout << "PERSONA NO ENCONTRADA";
    }
    cout << endl;
    system("pause");
}

// Persona con sueldo Mayor

PersonNode *PeopleList::higherPaidPerson(){
    system("cls");
    if(this->numberPeople == 0){
        position(35,5); cout << "Por Favor, registre personas primero";
        cout << endl;
        system("pause");
        return NULL;
    }
    PersonNode *aux = new PersonNode();
    PersonNode *temp = new PersonNode();
    aux = this->header->getNext();
    temp = this->header;
    while( aux != NULL){
        if(aux->getPersona()->getSalary() > temp->getPersona()->getSalary()){
            temp->getPersona()->setSalary(aux->getPersona()->getSalary());
        }
        aux = aux->getNext();
    }
    temp->getPersona()->showPerson(0);
    cout << endl;
    system("pause");
    return temp;
}

