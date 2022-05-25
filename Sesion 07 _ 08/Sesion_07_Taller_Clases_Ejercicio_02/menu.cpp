#include "menu.h"

Menu::Menu(Supermercado *supermercado)
{
    this->supermercado = supermercado;
}

Menu::~Menu()
{

}

void Menu::mostrarTituloAplicacion() {
  Basics::position(17,0);Basics::colour(10);cout << "-----------------------------------------------------------";
  Basics::position(18,1);Basics::colour(10);cout << "           Sistema virtual del Supermercado Mi Market      ";
  cout << " ";
  Basics::colour(10);cout << this->automotive->getName();
  Basics::position(17,2);Basics::colour(10);cout << "-----------------------------------------------------------";
}




int Menu::mostrarMenuOpciones(){
    int option;

    Basics::clearScreen();
    this->displayAppTitle();

    Basics::position(20,4); Basics::colour(10);
    cout << "Escoja entre las siguientes opciones:";

    Basics::position(20,6); Basics::colour(10);
    cout << "[1] Registrar Zona" << endl;
    Basics::position(20,7); Basics::colour(10);
    cout << "[2] Registrar Estante";
    Basics::position(20,8); Basics::colour(10);
    cout << "[3] Registrar Producto";
    Basics::position(20,9); Basics::colour(10);
    cout << "[4] Registrar Cliente";
    Basics::position(20,10); Basics::colour(10);
    cout << "[5] ";
    Basics::position(20,11);Basics::colour(10);
    cout << "[6] ";
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

//Opcion 1 Registrar Zona

void Menu::registrarZona(){
    string respuesta;
    do{
        Zona *nuevaZona = NULL;
        ListaZonas *auxListaZonas = NULL;


        Basics::clearScreen();
        this->mostrarTituloAplicacion();

        Basics::position(16,4);
        cout << "Registrar nueva Zona de la empresa";

        Basics::position(16,6);
        string nombre = Basics::readText("Nombres: ");


        nuevaZona = new Zona(nombre);

        auxListaZonas = this->supermercado->getZonas();
        auxListaZonas->insertar(zona);
        this->supermercado->setZonas(auxListaZonas);

        Basics::position(16,12);cout << "Zona registrada correctamente" << endl;
        cout << endl;
        do{
           Basics::position(16,14);cout << "Desea insertar otra Zona?: ";
           fflush(stdin);
           getline(cin,respuesta);;
       }while(!(respuesta == "N" || respuesta == "n" || respuesta == "S" || respuesta == "s" ||
                respuesta == "No" || respuesta == "no" || respuesta == "Si" || respuesta == "si"));
    }while(!(respuesta == "N" || respuesta == "n" || respuesta == "No" || respuesta == "no"));
}

//Opcion 2 Registrar Estante

void Menu::registrarEstante(){
    Basics::clearScreen();
    this->mostrarTituloAplicacion();

    if(this->supermercado->getZonas()->numeroZonas == 0){
        Basics::position(20,4); Basics::colour(10);
        cout << "Primero registre al menos una zona";
        return;
    }

    string respuesta;
    do{
        Estante *nuevoEstante = NULL;
        ListaEstantes *auxListaEstantes = NULL;
        Zona *auxZona = NULL;

        Basics::clearScreen();
        this->mostrarTituloAplicacion();

        Basics::position(16,4);
        cout << "Registrar nuevo Estante de la empresa";

        Basics::position(18,6);auxZona = this->supermercado->getZonas()->escojerZona
                ("Seleccione la zona que se le va asignar un estante");
        cout << endl;


        Basics::position(16,6);
        string fila = Basics::readText("Fila: ");
        Basics::position(16,7);
        string columna = Basics::readText("Columna: ");

        nuevoEstante = new Estante(fila,columna);

        auxListaEstantes = auxZona->getEstantes();
        auxListaEstantes->insertar(nuevoEstante);
        auxZona->setEstantes(auxListaEstantes);

        Basics::position(16,9);cout << "Estante registrado correctamente" << endl;
        cout << endl;
        do{
           Basics::position(16,11);cout << "Desea insertar otra Estante?: ";
           fflush(stdin);
           getline(cin,respuesta);;
       }while(!(respuesta == "N" || respuesta == "n" || respuesta == "S" || respuesta == "s" ||
                respuesta == "No" || respuesta == "no" || respuesta == "Si" || respuesta == "si"));
    }while(!(respuesta == "N" || respuesta == "n" || respuesta == "No" || respuesta == "no"));
}

// Opcion 3 Registrar Producto

void Menu::registrarProducto(){

    Zona *auxZona = NULL;

    Basics::clearScreen();
    this->mostrarTituloAplicacion();

    //Verificar si existen Zonas registradas
    if(this->supermercado->getZonas()->numeroZonas == 0){
        Basics::position(20,4); Basics::colour(10);
        cout << "Primero registre al menos una zona";
        return;
    }

    Basics::clearScreen();
    this->mostrarTituloAplicacion();

    Basics::position(16,4);
    cout << "Registrar nuevo Producto de la empresa";

    //Escojer La zona donde se va regitrar producto
    Basics::position(18,6);auxZona = this->supermercado->getZonas()->escojerZona
            ("Seleccione la zona que se le va asignar un producto");
    cout << endl;

    //Validar que existan estantes
    if(auxZona->getEstantes()->getCantidadEstantes() == 0){
        postion(16,8);cout << "Esta zona no tiene estantes registrados";
        postion(16,10);cout << "Registre al menos un estante, por favor";
    }

    //Escojer estante


    //Insertar Producto a un estante

}

void Menu::MenuOpciones() {

    int opcion;

    do {
    opcion = this->mostrarMenuOpciones();

      switch (opcion) {
        case 1:this->registrarZona();
          Basics::addDelay(2);
          break;

        case 2:this->registrarEstante();
          Basics::addDelay(1.5);
          break;

        case 3:
          Basics::pause();
          break;

        case 4:
          Basics::pause();
          break;

        case 5:
          Basics::pause();
          break;

        case 6:
          Basics::pause();
          break;
      }

    } while (!(opcion == 0));

    cout << "\t\t    Gracias por usar la app, tenga un buen dia!" <<
          endl<<"\t\t    ";
}
