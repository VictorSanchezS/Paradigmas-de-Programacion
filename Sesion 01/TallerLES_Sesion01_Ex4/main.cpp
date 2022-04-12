#include <structures.cpp>

//inicializar Dias

void initialiseDays(listDays *days){
    days->head = NULL;
    days->numberDates = 0;
}

// opc 1 registrar dia

void initialiseDay(day *dia){
    dia->cars = new carList();

    dia->cars->head = NULL;
    dia->cars->numberCars = 0;
}

void readDay(day *dia){
    clearScreen();
    registrationHeader();
    position(40,6); dia->date = readText("FECHA: ");
}

void insertDay(listDays *days,day *dia){
    dayNode *aux;
    dayNode *temp = new dayNode();
    temp->dia = dia;
    aux = days->head;
    if(aux != NULL){
        while(aux->next != NULL){
            aux = aux->next;
        }
        temp->next = aux->next;
        aux->next = temp;
        temp->previous = aux;
    }
    else{
        temp->next = aux;
        temp->previous = NULL;
        days->head = temp;
    }
    days->numberDates++;
}

void registerDay(listDays *days){
    char answer;
    do{
        day *dia = new day();
        initialiseDay(dia);
        readDay(dia);
        insertDay(days,dia);
        do{
            position(40,11);cout << "Desea insertar otro dia: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));
}

//opc 2 registar Carro

dayNode *chooseDay(listDays *days){
    int num, x = 0;
    dayNode *aux = days->head;
    while (aux != NULL) {
        position(10, 3 + x); cout << x + 1 << " - " << aux->dia->date;
        x++;
        aux = aux->next;
    }
    do {
        position(10, 3 + 2 * x); cout << "Elija Fecha : ";
        cin >> num;
    } while (!(num > 0 && num <= days->numberDates));
    aux = days->head;
    for (int y = 0; y < num - 1; y++) {
        aux = aux->next;
    }
    return aux;
}

void initialiseCar(car *carro){
    carro->cost = 0.0;
}

void readCar(car *carro){
    clearScreen();
    position(45,5);carro->owner = readText("PROPIETARIO: ");
    position(45,6);carro->model = readText("MODELO: ");
    position(45,7);carro->color = readText("COLOR: ");
    position(45,8);carro->brand = readText("MARCA: ");
    position(45,9);carro->plate = readText("PLACA: ");
    position(45,10);carro->checkinTime = readText("HORA DE ENTRADA: ");
    position(45,11);carro->departureTime = readText("HORA DE SALIDA: ");
    position(45,12);carro->cost = readReal("COSTO: ");
}

void insertCar(carList *cars, car *carro){
    carNode *aux = cars->head;
    carNode *temp = new carNode();
    temp->carriage = carro;
    temp->next = NULL;
    if(aux == NULL){
        cars->head = temp;
    }
    else{
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = temp;
    }
    cars->numberCars++;
}

void registerCar(listDays *days){
    clearScreen();
    if(days->numberDates == 0){
        emptyList();
        return;
    }
    dayNode *aux = new dayNode();
    aux = chooseDay(days);
    if(aux != NULL){
        char answer;
        do{
            car *carro = new car();
            initialiseCar(carro);
            readCar(carro);
            insertCar(aux->dia->cars,carro);
            do{
                position(40,14);cout << "Desea insertar otro carro: ";
                fflush(stdin);
                cin.get(answer);
            }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
        }while(!(answer == 'N' || answer == 'n'));
    }
}

//opc 3 buscar carro por placa

void showCar(car *carriage,int x){
    headerCar();
    position(12,5 + x);cout << carriage->owner;
    position(24,5 + x);cout << carriage->plate;
    position(34,5 + x);cout << carriage->checkinTime;
    position(50,5 + x);cout << carriage->departureTime;
    position(66,5 + x);cout << carriage->cost;
}

void searchCarPlate(listDays *days){
    clearScreen();
    if(days->numberDates == 0){
        emptyList();
        return;
    }
    dayNode *aux = new dayNode();
    aux = chooseDay(days);
    if(aux != NULL){
        carNode *aux2 = aux->dia->cars->head;
        string searchCar;
        bool sw = false;
        while(aux != NULL){
            searchCar = readText("INGRESE PLACA DE CARRO A BUSCAR: ");
            clearScreen();
            if(aux2->carriage->plate == searchCar){
                showCar(aux2->carriage,0);
                sw = true;
                break;
            }
            aux = aux->next;
        }
        if(sw == false){
            position(45,5);cout << "CARRO NO ENCONTRADO";
        }
    }
    addDelay(2);
}

//opc 4 Buscar carro por Propietario

void searchCarOwner(listDays *days){
    clearScreen();
    if(days->numberDates == 0){
        emptyList();
        return;
    }
    dayNode *aux = new dayNode();
    aux = chooseDay(days);
    carNode *aux2 = aux->dia->cars->head;
    string searchCar;
    bool sw = false;
    while(aux != NULL){
        searchCar = readText("INGRESE DUENIO DE CARRO A BUSCAR: ");
        clearScreen();
        if(aux2->carriage->owner == searchCar){
            showCar(aux2->carriage,0);
            sw = true;
            break;
        }
        aux = aux->next;
    }
    if(sw == false){
        position(45,5);cout << "CARRO NO ENCONTRADO";
    }
    addDelay(2);
}

//opc 5 Listar Carros

void listCars(listDays *days){
    clearScreen();
    if(days->numberDates == 0){
        emptyList();
        return;
    }
    dayNode *aux = new dayNode();
    aux = chooseDay(days);
    clearScreen();
    carNode *aux2 = new carNode();
    aux2 = aux->dia->cars->head;
    int x = 0;
    while(aux2 != NULL){
        showCar(aux->dia->cars->head->carriage,x);
        aux2 = aux2->next;
        x++;
    }
    system("pause");
}

//opc 6 Listar Dias con carros

void showDays(day *dia){
    cout << dia->date;
}

void showCar(car *carriage){
    //headerCar();
    cout << endl <<carriage->owner << endl;
    cout << carriage->plate << endl;
    cout << carriage->checkinTime << endl;
    cout << carriage->departureTime << endl;
    cout << carriage->cost << endl;
}

void listDaysCars(listDays *days){
    clearScreen();
    dayNode *aux1 = new dayNode();
    int x = 0;

    aux1 = days->head;

    while(aux1 != NULL){
        showDays(aux1->dia);
        carNode *aux2 = new carNode();
        int y = 0;
        aux2 = aux1->dia->cars->head;
        while(aux2 != NULL){
            showCar(aux2->carriage);
            aux2 = aux2->next;
            y++;
        }
        aux1 = aux1->next;
        x++;
    }
    cout << endl;
    system("pause");
}

// Carga de Datos

day *dayData(string date){
    day *dia = new day();
    dia->cars = new carList();

    dia->cars->head = NULL;
    dia->cars->numberCars = 0;

    dia->date = date;

    return dia;
}

car *carData(string owner,string model,string color,string brand,string plate,
             string checkinTime,string departureTime,double cost){
    car *carro = new car();

    carro->owner = owner;
    carro->model = model;
    carro->color = color;
    carro->brand = brand;
    carro->plate = plate;
    carro->checkinTime = checkinTime;
    carro->departureTime = departureTime;
    carro->cost = cost;

    return carro;
}

void uploadData(listDays *days){
    day *day1 = new day();
    day *day2 = new day();
    car *car1 = new car();
    car *car2 = new car();

    day1 = dayData("05/04/2022");
    //initialiseDay(day1);
    insertDay(days,day1);
    day2 = dayData("06/04/2022");
    //initialiseDay(day2);
    insertDay(days,day2);

    car1 = carData("Victor","Mazda 3","Rojo","Mazda","VM205","15:13","17:13",5);
    insertCar(days->head->dia->cars,car1);
    car2 = carData("Felipe","Yaris","Negro","Toyota","JF205","13:13","15:13",5);
    insertCar(days->head->next->dia->cars,car2);
}

int main()
{
    listDays *days = new listDays();
    initialiseDays(days);
    uploadData(days);
    int opc;
    do {
        opc = menu();
        switch (opc) {
            case 1: registerDay(days); break;
            case 2: registerCar(days); break;
            case 3: searchCarPlate(days); break;
            case 4: searchCarOwner(days); break;
            case 5: listCars(days); break;
            case 6: listDaysCars(days); break;
        }
    } while (!(opc == 0));
    return 0;
}

