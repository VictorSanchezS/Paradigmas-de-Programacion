#include <structures.cpp>

void initialiseListDiseases(listDiseases *diseases){
    diseases->head = NULL;
    diseases->numberDiseases = 0;
}

//opc 1 Registrar Enfermedad

void initialiseDisease(disease *enfermedad){
    enfermedad->patients = new patientsList();

    enfermedad->patients->head = NULL;
    enfermedad->patients->numberPatients = 0;
}

void readDisease(disease *enfermedad){
    clearScreen();
    registrationHeaderDisease();
    position(40,6); enfermedad->code = readText("CODIGO: ");
    position(40,7); enfermedad->name = readText("NOMBRE: ");
}

void insertDisease(listDiseases *diseases,disease *enfermedad){
    diseaseNode *aux;
    diseaseNode *temp = new diseaseNode();
    temp->enfermedad = enfermedad;
    aux = diseases->head ;
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
        diseases->head = temp;
    }
    diseases->numberDiseases++;
}

void registerDisease(listDiseases *diseases){
    char answer;
    do{
        disease *enfermedad = new disease();
        initialiseDisease(enfermedad);
        readDisease(enfermedad);
        insertDisease(diseases,enfermedad);
        do{
            position(40,11);cout << "Desea insertar otro enfermedad: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));
}

// Opc 2 Registar Paciente

diseaseNode *chooseDisease(listDiseases *diseases) {
    int num, x = 0;
    diseaseNode *aux = diseases->head;
    while (aux != NULL) {
        position(10, 3 + x); cout << x + 1 << " - " << aux->enfermedad->name;
        x++;
        aux = aux->next;
    }
    do {
        position(10, 3 + 2 * x); cout << "Elija nombre de Enfermedad : ";
        cin >> num;
    } while (!(num > 0 && num <= diseases->numberDiseases));
    aux = diseases->head;
    for (int y = 0; y < num - 1; y++) {
        aux = aux->next;
    }
    return aux;
}

void initalisePatient(patient *paciente){
    paciente->age = 0;
    paciente->size = 0;
    paciente->weight = 0.0;
}

void readPatient(patient *paciente){
    clearScreen();
    registrationHeaderPatient();
    position(40,6);paciente->id = readText("DNI: ");
    position(40,7);paciente->names = readText("NOMBRE: ");
    position(40,8);paciente->surnames= readText("APELLIDOS: ");
    position(40,9);paciente->age = readInteger("EDAD: ");
    position(40,10);paciente->weight = readReal("PESO: ");
    position(40,11);paciente->size = readUnsignedShort("TALLA(cm): ");
}

void insertPatient(patientsList *patients,patient *paciente){
    patientNode *aux = patients->head;
    patientNode *temp = new patientNode();
    temp->paciente = paciente;
    temp->next = NULL;
    if(aux == NULL){
        patients->head = temp;
    }
    else{
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = temp;
    }
    patients->numberPatients++;
}

void registerPatient(listDiseases *diseases){
    clearScreen();
    if(diseases->numberDiseases == 0){
        emptyList();
        return;
    }
    diseaseNode *aux = new diseaseNode();
    aux = chooseDisease(diseases);
    char answer;
    do{
        patient *paciente = new patient();
        initalisePatient(paciente);
        readPatient(paciente);
        insertPatient(aux->enfermedad->patients,paciente);
        do{
            position(42,11);cout << "Desea insertar otro Paciente: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));

}


// opc 3 Buscar Enfermdad

void showDiseases(disease *enfermedad,int x){
    headerDiseases();
    position(12,5 + x);cout << enfermedad->code;
    position(20,5 + x);cout << enfermedad->name;
}

void searchDisease(listDiseases *diseases){
    clearScreen();
    if(diseases->numberDiseases == 0){
        emptyList();
        return;
    }
    diseaseNode *aux = diseases->head;
    string searchDiseaseByName;
    searchDiseaseByName = readText("INGRESE NOMBRE DE EENFERMEDAD A BUSCAR: ");
    bool sw = false;
    while(aux != NULL){
        if(aux->enfermedad->name == searchDiseaseByName){
            showDiseases(aux->enfermedad,0);
            sw = true;
            break;
        }
        aux = aux->next;
    }
    if(sw == false){
        position(45,5);cout << "ENFERMEDAD NO ENCONTRADA";
    }
    addDelay(2);
}

//opc 4 Buscar Paciente

void showPatients(patient *paciente,int x){
    headerPatients();
    position(12,5 + x);cout << paciente->id;
    position(24,5 + x);cout << paciente->names;
    position(34,5 + x);cout << paciente->surnames;
    position(50,5 + x);cout << paciente->age;
    position(66,5 + x);cout << paciente->weight;
    position(72,5 + x);cout << paciente->size;
}

void searchPatient(listDiseases *diseases){
    clearScreen();
    if(diseases->numberDiseases == 0){
        emptyList();
        return;
    }
    diseaseNode *aux1 = diseases->head;
    bool sw = false;
    while(aux1 != NULL){
        if(aux1->enfermedad->patients->numberPatients == 0){
            emptyPatientsList();
            return;
        }
        patientNode *aux2 = aux1->enfermedad->patients->head;
        while(aux2 != NULL){
            string searchPatientById;
            position(35,5); searchPatientById = readText("INGRESE DNI DE PACIENTE A BUSCAR: ");
            clearScreen();
            if(searchPatientById == aux2->paciente->id){
                showPatients(aux2->paciente,0);
                sw = true;
                break;
            }
            aux2 = aux2->next;
        }
        aux1 = aux1->next;
    }
    if(sw == false){
        position(40,5);cout << "PACIENTEE NO ENCONTRADO";
    }
    system("pause");
}

//opc 5 Mostrar Lista de Enfermedades con Pacientes

void showDiseasePatients(listDiseases *diseases){
    clearScreen();
    if(diseases->numberDiseases == 0){
        emptyList();
        return;
    }
    diseaseNode *aux = new diseaseNode();
    aux = chooseDisease(diseases);
    if(aux->enfermedad->patients->numberPatients == 0){
        emptyPatientsList();
        return;
    }
    int x = 0;
    while(aux != NULL){
        showPatients(aux->enfermedad->patients->head->paciente,x);
        aux = aux->next;
        x++;
    }
    cout << endl;
    system("pause");
}

//Carga de Datos



int main()
{
    int opc;
    listDiseases *diseases = new listDiseases();
    initialiseListDiseases(diseases);
    do {
        opc = menu();
        switch (opc) {
            case 1: registerDisease(diseases); break;
            case 2: registerPatient(diseases); break;
            case 3: searchDisease(diseases); break;
            case 4: searchPatient(diseases); break;
            case 5: showDiseasePatients(diseases); break;
        }
    } while (!(opc == 0));
    return 0;
}

