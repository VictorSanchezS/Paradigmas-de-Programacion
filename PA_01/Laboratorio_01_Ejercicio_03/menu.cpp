#include "menu.h"

Menu::Menu(Automotive *automotive){
    this->automotive = automotive;

}

Menu::~Menu(){}

void Menu::displayAppTitle() {
  Basics::position(17,0);Basics::colour(10);cout << "-----------------------------------------------------------";
  Basics::position(18,1);Basics::colour(10);cout << " Sistema virtual de la empresa de venta de vehiculos";
  cout << " ";
  Basics::colour(10);cout << this->automotive->getName();
  Basics::position(17,2);Basics::colour(10);cout << "-----------------------------------------------------------";
}

int Menu::displayMenuOption(){
    int option;

    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(20,4); Basics::colour(10);
    cout << "Escoja entre las siguientes opciones:";

    Basics::position(20,6); Basics::colour(10);
    cout << "[1] Registrar cliente" << endl;
    Basics::position(20,7); Basics::colour(10);
    cout << "[2] Registrar auto";
    Basics::position(20,8); Basics::colour(10);
    cout << "[3] Listar los clientes";
    Basics::position(20,9); Basics::colour(10);
    cout << "[4] Listar los autos";
    Basics::position(20,10); Basics::colour(10);
    cout << "[5] Buscar cliente por dni";
    Basics::position(20,11);Basics::colour(10);
    cout << "[6] Buscar auto por placa";
    ;
    Basics::position(20,12);Basics::colour(10);
    cout << "[0] Cerrar";

    Basics::position(20,15);Basics::colour(33);
    cout << "Por favor ingrese una de las opciones:";
    cin >> option;system("color 7");

    while (!(0 <= option && option <= 6)) {
    Basics::position(20,17); Basics::colour(33);
    cout << "Seleccione una opcion válida:";
    cin >> option;
    }
    return option;
}

void Menu::displayClientsTableHeader(int rowNumber){
    Basics::position(0,rowNumber);
    cout << "#";
    Basics::position(5, rowNumber);
    cout << "Codigo";
    Basics::position(20, rowNumber);
    cout << "Nombres";
    Basics::position(40, rowNumber);
    cout << "Apellidos";
    Basics::position(60, rowNumber);
    cout << "DNI";
    Basics::position(70, rowNumber);
    cout << "Edad";
    Basics::position(76, rowNumber);
    cout << "Genero";
}

void Menu::displayCarsTableHeader(int rowNumber) {
    Basics::position(0, rowNumber);
    cout << "#";
    Basics::position(5, rowNumber);
    cout << "Codigo";
    Basics::position(15, rowNumber);
    cout << "Marca";
    Basics::position(30, rowNumber);
    cout << "Modelo";
    Basics::position(45, rowNumber);
    cout << "Precio (S/)";
    Basics::position(60, rowNumber);
    cout << "Placa";
    Basics::position(70, rowNumber);
    cout << "Color";
    Basics::position(80, rowNumber);
    cout << "categoria";
}



//Registrar Cliente

void Menu::registerClient(){
    string answer;
    do{
        Client *client = NULL;
        ClientList *auxClientsList = NULL;
        /*string names;
        string surnames;
        string id;
        unsigned short age;
        bool gender;*/

        Basics::clearScreen();
        this->displayAppTitle();

        Basics::position(16,4);
        cout << "Registrar nuevo cliente de la empresa";

        Basics::position(16,6);
        string names = Basics::readText("Nombres: ");
        Basics::position(16,7);
        string surnames = Basics::readText("Apellidos: ");
        Basics::position(16,8);
        string id = Basics::readText("DNI: ");
        Basics::position(16,9);
        unsigned short age = Basics::readAge("Edad: ");
        Basics::position(16,10);
        bool gender = Basics::readGender("Genero: ");

        client = new Client(names,surnames,id,age,gender);

        auxClientsList = this->automotive->getClients();
        auxClientsList->insert(client);
        this->automotive->setClients(auxClientsList);

        Basics::position(16,12);cout << "Cliente registrado correctamente" << endl;
        cout << endl;
        do{
           Basics::position(16,14);cout << "Desea insertar otro Cliente?: ";
           fflush(stdin);
           getline(cin,answer);;
       }while(!(answer == "N" || answer == "n" || answer == "S" || answer == "s" ||
                answer == "No" || answer == "no" || answer == "Si" || answer == "si"));
    }while(!(answer == "N" || answer == "n" || answer == "No" || answer == "no"));
}


//Registar Carro

void Menu::registerCar(){
    string answer;
    do{
        Car *car= NULL;
        CarList *auxCarsList = NULL;
        Client *client = NULL;
        /*string brand;
        string model;
        float price;
        string plate;
        string colour;
        string status;*/

        Basics::clearScreen();
        this->displayAppTitle();

        Basics::position(38,4);cout << "REGISTRAR CARRO " << endl << endl;

        Basics::position(17,6);client = this->automotive->getClients()->pickClient
                ("Seleccione al cliente que se le va vender el carro");
        cout << endl;

        /*if (client == NULL) {
            cout << "Eligió un cliente no valido o no hay clientes registrados";
            cout << endl << endl;
            return;
          }*/

        Basics::clearScreen();
        this->displayAppTitle();
        Basics::position(26,4);cout << "Resgistre carro del cliente "<< client->getNames() << " " << client->getSurnames();

        Basics::position(17,6);
        string brand = Basics::readText("Ingrese marca: ");
        Basics::position(17,7);
        string model = Basics::readText("Ingrese modelo: ");
        Basics::position(17,8);
        float price = Basics::readFloat("Ingrese precio: ");
        Basics::position(17,9);
        string plate = Basics::readText("Ingrese Placa: ");
        Basics::position(17,10);
        string colour = Basics::readText("Ingrese Color: ");
        Basics::position(17,11);
        string status = Basics::readText("Ingrese Categoria: ");

        car = new Car(brand,model,price,plate,colour,status);

        auxCarsList = client->getCars();
        auxCarsList->insert(car);
        client->setCars(auxCarsList);

        Basics::position(17,13);cout << "Auto registrado correctamente" << endl;
        cout << endl;
        do{
           Basics::position(17,15);cout << "Desea insertar otro Carro?: ";
           fflush(stdin);
           getline(cin,answer);;
       }while(!(answer == "N" || answer == "n" || answer == "S" || answer == "s" ||
                answer == "No" || answer == "no" || answer == "Si" || answer == "si"));
    }while(!(answer == "N" || answer == "n" || answer == "No" || answer == "no"));

}

// Mostrar Clientes

void Menu::showClients(){
    Basics::clearScreen();
    this->displayAppTitle();
    
    Basics::position(20,4);
    cout << "Lista de todos los clientes de la empresa";

      if (this->automotive->getClients()->getNumberClients() == 0) {
          cout << "No hay ningún cliente registrado";
          cout << "Primero registre al menos un cliente";
          return;
        }
      
      this->displayClientsTableHeader(6);
      this->automotive->getClients()->show(7);
      
      cout << endl << endl;
}


// Mostrar Carros

void Menu::showCars(){
    Client *auxClient = NULL;
    CarNode *auxCarNode = NULL;

    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(20, 4);
    cout << "Lista de todos los autos en la empresa" << endl << endl;

     if (this->automotive->getClients()->getNumberClients() == 0) {
       Basics::position(20, 6);cout << "No hay ningún cliente registrado";
       Basics::position(20, 7);cout << "Primero registre al menos un cliente";
       return;
     }

     this->displayCarsTableHeader(6);

     int i = 0;
     for(int x = 0; x < this->automotive->getClients()->getNumberClients(); x++){
         auxClient = this->automotive->getClients()->getHeader() + x;

         auxCarNode = auxClient->getCars()->getHeader();
         while(auxCarNode != NULL){
             auxCarNode->getCar()->show(8 + i, i);
             i++;
             auxCarNode = auxCarNode->getNext();
         }
     }
     cout << endl << endl;
}


//Encontrar Cliente por dni

void Menu::findClientById(){
    Client *client;
    string idToFind;

    Basics::position(20,17);idToFind = Basics::readText("Ingrese el DNI del cliente a buscar: ");

    Basics::clearScreen();
    this->displayAppTitle();

    client = this->automotive->getClients()->findClientById(idToFind);

    if(client == NULL){
        Basics::position(23,4);cout << "No se encontro un cliente con el DNI ingresado";

        Basics::position(23,6);cout <<"";
        return;
    }

    Basics::position(20,5);
    cout << "Cliente con el DNI: " << idToFind << endl;

    this->displayClientsTableHeader(7);

    client->show(9,1);

    cout << endl << endl;
}

// Encontrar Carro por Placa

void Menu::findCarByPlate(){
    Car *car = NULL;
    string plateToFind;

    plateToFind = Basics::readText("Ingrese placa de carro a buscar: ");

    Basics::clearScreen();
    this->displayAppTitle();

    car = this->automotive->getClients()->findCarByPlate(plateToFind);

    if(car == NULL){
        cout << "No se encontró un autor con la placa ingresada";
        cout << endl << endl;
        return;
    }

    Basics::position(20, 5);cout << "Auto con la placa: " << plateToFind << endl;

    this->displayCarsTableHeader(7);

    car->show(9,1);

    cout << endl << endl;
}

void Menu::displayMenu() {
  int option;

  do {
    option = this->displayMenuOption();

      switch (option) {
        case 1:
          this->registerClient();
          Basics::addDelay(1.5);
          break;
        case 2:
          this->registerCar();
          Basics::addDelay(1.5);
          break;
        case 3:
          this->showClients();
          Basics::pause();
          break;
        case 4:
          this->showCars();
          Basics::pause();
          break;
        case 5:
          this->findClientById();
          Basics::pause();
          break;
        case 6:
          this->findCarByPlate();
          Basics::pause();
          break;
      }

  } while (!(option == 0));

  cout << "\t\t    Gracias por usar la app, tenga un buen dia!" <<
          endl<<"\t\t    ";
}
