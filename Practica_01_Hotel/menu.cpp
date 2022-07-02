#include "menu.h"

Menu::Menu(Hotel *hotel){this->hotel = hotel;}//
Menu::~Menu(){}

void Menu::displayAppTitle(){
    Basics::position(17,0);Basics::colour(10);cout << "-----------------------------------------------------------";
    Basics::position(18,1);Basics::colour(10);cout << " Sistema virtual del Hotel ";
    cout << " ";
    Basics::colour(10);cout << this->hotel->getName();
    Basics::position(17,2);Basics::colour(10);cout << "-----------------------------------------------------------";
}


int Menu::displayMenuOption(){
    int option;

    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(20,3); Basics::colour(10);
    cout << "Escoja entre las siguientes opciones:";

    Basics::position(20,5); Basics::colour(10);
    cout << "[1] Registrar Habitacion" << endl;
    Basics::position(20,6); Basics::colour(10);
    cout << "[2] Registrar Cliente";
    Basics::position(20,7); Basics::colour(10);
    cout << "[3] Listar Habitaciones libres y ocupadas";
    Basics::position(20,8); Basics::colour(10);
    cout << "[4] Listar Clientes por fecha";
    Basics::position(20,9); Basics::colour(10);
    cout << "[5] Buscar cliente por DNI";
    Basics::position(20,10);Basics::colour(10);
    cout << "[6] Monto total recaudado";
    Basics::position(20,11);Basics::colour(10);
    cout << "[0] Cerrar";

    Basics::position(20,13);Basics::colour(33);
    cout << "Por favor ingrese una de las opciones:";
    cin >> option;system("color 7");

    while (!(0 <= option && option <= 6)) {
    Basics::position(20,15); Basics::colour(33);
    cout << "Seleccione una opcion válida:";
    cin >> option;
    }

    return option;
}


void Menu::displayRoomTableHeader(int rowNumber){
    Basics::position(0, rowNumber);
    cout << "#";
    Basics::position(5, rowNumber);
    cout << "Codigo";
    Basics::position(15, rowNumber);
    cout << "Habitación #";
    Basics::position(30, rowNumber);
    cout << "Precio";
    Basics::position(45, rowNumber);
    cout << "Piso";
    Basics::position(55, rowNumber);
    cout << "Tipo";
    Basics::position(75, rowNumber);
    cout << "Estado";
}


void Menu::displayClientsTableHeader(int rowNumber) {
    Basics::position(0, rowNumber);
    cout << "#";
    Basics::position(5, rowNumber);
    cout << "Codigo";
    Basics::position(15, rowNumber);
    cout << "Nombres";
    Basics::position(30, rowNumber);
    cout << "Apellidos";
    Basics::position(45, rowNumber);
    cout << "DNI";
    Basics::position(60, rowNumber);
    cout << "Telefono";
    Basics::position(75, rowNumber);
    cout << "Edad";
    Basics::position(85, rowNumber);
    cout << "Genero";
}

// Opc 1 Registrar Habitacion

void Menu::registerRoom(){
    string answer;
    do{
        Room *room = NULL;
        RoomsList *auxRoomsList = NULL;

        Basics::clearScreen();
        this->displayAppTitle();

        Basics::position(16,4);
        cout << "Registrar nueva Habitacion";

        Basics::position(16,6);
        unsigned short roomNumber = Basics::readUnsignedShort("Ingrese N. de Habitacion: ");
        Basics::position(16,7);
        float price = Basics::readFloat("Ingrese Precio de la habitacion: ");
        Basics::position(16,8);
        unsigned short floor = Basics::readUnsignedShort("Piso: ");
        Basics::position(16,9);
        string roomType = Basics::readText("Tipo de Habitacion(clasica,matrimonial,vip): ");
        Basics::position(16,10);
        string status = Basics::readText("Estado de la habitacion: ");

        room = new Room(roomNumber,price,floor,roomType,status);

        auxRoomsList = this->hotel->getRooms();
        auxRoomsList->insert(room);
        this->hotel->setRooms(auxRoomsList);

        Basics::position(16,12);cout << "Habitacion registrada correctamente" << endl;
        cout << endl;
        do{
           Basics::position(16,14);cout << "Desea insertar otra Habitacion?: ";
           fflush(stdin);
           getline(cin,answer);;
       }while(!(answer == "N" || answer == "n" || answer == "S" || answer == "s" ||
                answer == "No" || answer == "no" || answer == "Si" || answer == "si"));
    }while(!(answer == "N" || answer == "n" || answer == "No" || answer == "no"));
}

//Opc 2 Registrar Cliente

void Menu::registerClient(){
    string answer;
    do{
        Client *client = NULL;
        Room *auxRoom = NULL;
        ClientsList *auxClientsList = NULL;

        Basics::clearScreen();
        this->displayAppTitle();

        Basics::position(38,4);cout << "REGISTRAR CLIENTE " << endl << endl;

        Basics::position(17,6); auxRoom = this->hotel->getRooms()->pickRoom(
                    "Seleccione la habitacion en donde se va a hospedar el nuevo cliente");

        if (auxRoom == NULL) {
            cout << "Eligió una habitacion no valida o no hay habitaciones registradas";
            cout << endl << endl;
            return;
          }

        Basics::clearScreen();
        this->displayAppTitle();
        Basics::position(26,4);cout << "Resgistre cliente nuevo ";

        Basics::position(17,6);
        string names = Basics::readText("Ingrese Nombres: ");
        Basics::position(17,7);
        string surnames = Basics::readText("Ingrese Apellidos: ");
        Basics::position(17,8);
        string id = Basics::readText("Ingrese DNI: ");
        Basics::position(17,9);
        unsigned short age= Basics::readUnsignedShort("Ingrese Edad: ");
        Basics::position(17,10);
        bool gender = Basics::readGender("Ingrese Genero: ");
        Basics::position(17,11);
        string address = Basics::readText("Ingrese Direccion: ");
        Basics::position(17,12);
        string phone = Basics::readText("Ingrese Telefono: ");
        Basics::position(17,13);
        string arrivalDate = Basics::readText("Ingrese fecha de llegada del cliente(dd/mm/yy): ");
        Basics::position(17,14);
        string departureDate = Basics::readText("Ingrese fecha de salida del cliente(dd/mm/yy): ");
        Basics::position(17,15);
        int accommodationDays = Basics::readInteger("Ingrese dias de alojamiento: ");

        client = new Client(names,surnames,id,address,phone,age,gender,arrivalDate,departureDate,accommodationDays);

        auxClientsList = auxRoom->getClients();
        auxClientsList->insert(client);
        auxRoom->setClients(auxClientsList);
        auxRoom->setStatus("ocupada");

        Basics::position(17,17);cout << "Cliente registrado(a) correctamente" << endl;
        cout << endl;
        do{
           Basics::position(17,19);cout << "Desea insertar otro Cliente?: ";
           fflush(stdin);
           getline(cin,answer);;
       }while(!(answer == "N" || answer == "n" || answer == "S" || answer == "s" ||
                answer == "No" || answer == "no" || answer == "Si" || answer == "si"));
    }while(!(answer == "N" || answer == "n" || answer == "No" || answer == "no"));
}

//Opcion 3 Listar Habitaciones ocuapadas y libres

void Menu::displayFreeAndOccupiedRooms(){
    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(20,5);
    cout << "Lista de las Habitaciones Libres y/o Ocuapadas";

    if(this->hotel->getRooms()->getNumberRooms() == 0){
        cout << "No hay Habitaciones Registradas" << endl;
        return;
    }

    this->displayRoomTableHeader(7);

    this->hotel->getRooms()->show(9);

    cout << endl << endl;
}

//Opcion 4 Listar Personas en cierta Fecha

void Menu::displayClientsByArrivalDate(){
    Room *auxRoom;
    ClientNode *auxClientNode;

    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(20,3);
    string dateToSearch = Basics::readText("Ingrese Fecha de llegada a buscar(dd/mm/yyyy): ");

    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(15,5);
    cout << "Lista de las Personas alojadas en la fecha " << dateToSearch;

    if(this->hotel->getRooms()->getNumberRooms() == 0){
        cout << "No hay Habitaciones Registradas" << endl;
        return;
    }

    int y = 1;
    bool status = false;
    for(int x = 0;x < this->hotel->getRooms()->getNumberRooms();x++){

        auxRoom = this->hotel->getRooms()->getHeader() + x;

        auxClientNode = auxRoom->getClients()->getHeader();

        while(auxClientNode != NULL){

            if(auxClientNode->getClient()->getArrivalDate() == dateToSearch){
                this->displayClientsTableHeader(7);
                auxClientNode->getClient()->show(9 + y,y);
                y++;
                 status = true;
            }
            auxClientNode = auxClientNode->getNext();
        }
    }
    if(status == false){
        cout << endl << endl;
        cout << "No se encontraron clientes registrados en esta fecha";
    }
    cout << endl << endl;
}

// Opcion 5 Buscar Persona por Dni

void Menu::findClientById(){
    Client *auxClient;

    Basics::clearScreen();
    this->displayAppTitle();

    if(this->hotel->getRooms()->getNumberRooms() == 0){
        cout << endl;
        cout << "No existen habitaciones registradas";
        cout << endl << endl;
        Basics::addDelay(2);
        return;
    }

    Basics::position(20,3);
    string idToFind = Basics::readText("Ingrese Dni de Cliente a buscar: ");

    Basics::clearScreen();
    this->displayAppTitle();

    auxClient = this->hotel->getRooms()->findClientById(idToFind);

    if(auxClient == NULL){
        cout << endl << endl;
        cout << "No se encontro cliente con el DNI ingresado";
        return;
    }

    Basics::position(20,5);
    cout << "Cliente con DNI:" << idToFind << endl;

    this->displayClientsTableHeader(7);

    auxClient->show(9,1);

    cout << endl << endl;
}

//Opcion 6 Mostrar Monto Total por alojamientos

void Menu::calculateTotalAmountForAccommodation(){
    Room *auxRoom;
    ClientNode *auxClientNode;

    float profitPerRoom = 0.0;
    int daysForAccommodation = 0;
    float totalAmount = 0;

    Basics::clearScreen();
    this->displayAppTitle();

    if(this->hotel->getRooms()->getNumberRooms() == 0){
        cout << "No hay Habitaciones registradas";
        return;
    }

    Basics::position(10,5);
    cout << "Ganancia Total: ";

    for(int x = 0; x < this->hotel->getRooms()->getNumberRooms();x++){
        auxRoom = this->hotel->getRooms()->getHeader() + x;
        profitPerRoom = 0.0;
        profitPerRoom = auxRoom->getPrice();

        auxClientNode = auxRoom->getClients()->getHeader();

        while(auxClientNode != NULL){
            daysForAccommodation = 0;
            daysForAccommodation = auxClientNode->getClient()->getAccommodationDays();
            totalAmount += daysForAccommodation * profitPerRoom;
            auxClientNode = auxClientNode->getNext();
        }
    }

    Basics::position(41,5);
    cout << totalAmount;
    cout << endl << endl;
}

void Menu::displayMenu(){
    int option;

    do{
        option = this->displayMenuOption();
        switch(option){
            case 1:
                this->registerRoom();
                Basics::addDelay(2);
                break;
            case 2:
                this->registerClient();
                Basics::addDelay(2);
                break;
            case 3:
                this->displayFreeAndOccupiedRooms();
                Basics::pause();
                break;
            case 4:
                this->displayClientsByArrivalDate();
                Basics::pause();
                break;
            case 5:this->findClientById();
                Basics::addDelay(2);
                break;
            case 6:
                this->calculateTotalAmountForAccommodation();
                Basics::pause();
        }
    }while(!(option == 0));
}
