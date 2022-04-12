#include <structures.cpp>

//inicializar Equipos
void initialiseEquimentList(listTeams *teams){
    teams->head = NULL;
    teams->numberTeams = 0;
}

//opc 1 registrar Equipos

void initialiseTeamFootball(teamFootball *team){
    team->code = 0;
    team->players = new playerList();

    team->players->head = NULL;
    team->players->numberPlayers = 0;
}

void readTeam(teamFootball *newTeam, listTeams *teams){
    clearScreen();
    newTeam->code = teams->numberTeams + 1;
    registrationHeader();
    position(40,6); newTeam->name = readText("NOMBRE: ");
    position(40,7); newTeam->dt = readText("ENTRENADOR: ");
    position(40,8); newTeam->city = readText("CIUDAD: ");
    position(40,9); newTeam->stadium = readText("ESTADIO: ");
}

void insertTeam(listTeams *teams,teamFootball *newTeam){
    teamNode *aux;
    teamNode *temp = new teamNode();
    temp->team = newTeam;
    aux = teams->head;
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
        teams->head = temp;
    }
    teams->numberTeams++;
}

void registerTeam(listTeams *teams){
    char answer;
    do{
        teamFootball *newTeam = new teamFootball();
        initialiseTeamFootball(newTeam);
        readTeam(newTeam,teams);
        insertTeam(teams,newTeam);
        do{
            position(40,11);cout << "Desea insertar otro equipo: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));
}

//opc 2 registrar Jugador

teamNode *chooseTeam(listTeams *teams) {
    int num, x = 0;
    teamNode *aux = teams->head;
    while (aux != NULL) {
        position(10, 3 + x); cout << x + 1 << " - " << aux->team->name;
        x++;
        aux = aux->next;
    }
    do {
        position(10, 3 + 2 * x); cout << "Elija nombre de Ciudad : ";
        cin >> num;
    } while (!(num > 0 && num <= teams->numberTeams));
    aux = teams->head;
    for (int y = 0; y < num - 1; y++) {
        aux = aux->next;
    }
    return aux;
}

void initialisePlayer(player *jugador){
    jugador->age = 0;
    jugador->size = 0;
    jugador->weight = 0.0;
}

void readPlayer(player *jugador){
    clearScreen();
    position(45,5);jugador->names = readText("NOMBRE: ");
    position(45,6);jugador->surnames = readText("APELLIDOS: ");
    position(45,7);jugador->age = readInteger("EDAD: ");
    position(45,8);jugador->weight = readReal("PESO: ");
    position(45,9);jugador->posicion = readText("POSICION: ");
    position(45,10);jugador->size = readUnsignedShort("TALLA(cm): ");
}

void insertPlayer(playerList *players, player *jugador){
    playerNode *aux = players->head;
    playerNode *temp = new playerNode();
    temp->jugador = jugador;
    temp->next = NULL;
    if(aux == NULL){
        players->head = temp;
    }
    else{
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = temp;
    }
    players->numberPlayers++;
}

void registerPlayer(listTeams *teams){
    system("cls");
    if(teams->numberTeams > 0){
        teamNode *aux = new teamNode();
        aux = chooseTeam(teams);
        char answer;
        do{
            player *jugador = new player();
            initialisePlayer(jugador);
            readPlayer(jugador);
            insertPlayer(aux->team->players,jugador);
            do{
                position(40,11);cout << "Desea insertar otro jugador: ";
                fflush(stdin);
                cin.get(answer);
            }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
        }while(!(answer == 'N' || answer == 'n'));

    }
    else{
        position(45,5);cout << "REGISTRE EQUIPOS PRIMERO";
    }
    addDelay(2);
}

// opc 3 buscar Equipo

void showTeam(teamFootball *team, int x){
    headerTeam();
    position(12,5 + x);cout << team->code;
    position(20,5 + x);cout << team->name;
    position(35,5 + x);cout << team->city;
    position(45,5 + x);cout << team->dt;
    position(65,5 + x);cout << team->stadium;
}

void searchTeam(listTeams *teams){
    clearScreen();
    if(teams->numberTeams > 0){
        teamNode *aux = teams->head;
        string searchName;
        bool sw = false;
        while(aux != NULL){
            searchName = readText("INGRESE NOMBRE DE EQUIPO A BUSCAR: ");
            if(aux->team->name == searchName){
                showTeam(aux->team,0);
                sw = true;
                break;
            }
            aux = aux->next;
        }
        if(sw == false){
            position(45,5);cout << "EQUIPO NO ENCONTRADO";
        }
    }
    else{
        position(45,5);cout << "REGISTRE EQUIPOS PRIMERO";
    }
    addDelay(2);
}

// opc 4 listar Equipos de futbol

void listFootballTeams(listTeams *teams){
    clearScreen();
    if(teams->numberTeams > 0){
        teamNode *aux = teams->head;
        int x = 0;
        while(aux != NULL){
            showTeam(aux->team,x);
            x++;
            aux = aux->next;
        }
    }
    else{
       position(45,5);cout << "REGISTRE EQUIPOS PRIMERO";
    }
    cout << endl;
    system("pause");
}

// opc 5 Mostrar Equipos con Jugadores

void showPlayers(player *jugador,int x){
    clearScreen();
    headerPlayers();
    position(12,5 + x);cout << jugador->names;
    position(20,5 + x);cout << jugador->surnames;
    position(35,5 + x);cout << jugador->age;
    position(55,5 + x);cout << jugador->size;
    position(65,5 + x);cout << jugador->weight;
    position(75,5 + x);cout << jugador->posicion;
}

void showTeamsPlayers(listTeams *teams){
    clearScreen();
    if(teams->numberTeams > 0){
        teamNode *aux = new teamNode();
        aux = chooseTeam(teams);
        int x = 0;
        while(aux != NULL){
            showPlayers(aux->team->players->head->jugador,x);
            aux = aux->next;
            x++;
        }
    }
    else{
        position(45,5);cout << "REGISTRE EQUIPOS PRIMERO";
    }
    addDelay(2);
}

// carga de Datos

teamFootball *teamData(int code,string name,string dt,string city,string stadium){
    teamFootball *team = new teamFootball();
    team->players = new playerList();

    team->players->head = NULL;
    team->players->numberPlayers = 0;

    team->code = code;
    team->name = name;
    team->dt = dt ;
    team->city = city;
    team->stadium = stadium;
    return team;
}

player *playerData(string names,string surnames,int age,double weight,string posicion,unsigned short size){
    player *jugador = new player();
    jugador->names = names;
    jugador->surnames = surnames;
    jugador->age = age;
    jugador->weight = weight;
    jugador->posicion = posicion;
    jugador->size = size;
    return jugador;
}

void uploadData(listTeams *teams){
    teamFootball *equipo1 = new teamFootball();
    teamFootball *equipo2 = new teamFootball();
    teamFootball *equipo3 = new teamFootball();
    player *jugador1 =  new player();
    player *jugador2 =  new player();
    player *jugador3 =  new player();

    equipo1 = teamData(1,"ALIANZA LIMA","GONZALO SUPO","LIMA","MATUTE");
    //initialiseTeamFootball(equipo1);
    insertTeam(teams,equipo1);
    equipo2 = teamData(2,"UNIVERSITARIO","VICTOR SANCHEZ","LIMA","LOLO FERNANDEZ");
    //initialiseTeamFootball(equipo2);;
    insertTeam(teams,equipo2);
    equipo3 = teamData(3,"SPORTING CRISTAL","kUN KUEN PALOMINO","LIMA","ALBERTO GALLARDO");
    //initialiseTeamFootball(equipo3);
    insertTeam(teams,equipo3);

    jugador1 = playerData("MANUEL","SHAPIAMA",18,70,"DELANTERO",175);
    insertPlayer(teams->head->team->players,jugador1);
    jugador2 = playerData("VICTOR","SANCHEZ",24,64,"LATERAL",170);
    insertPlayer(teams->head->next->team->players,jugador2);
    jugador3 = playerData("FELIPE","TORRES",19,72,"CENTRAL",178);
    insertPlayer(teams->head->next->next->team->players,jugador3);
}

int main()
{
    int opc;
    listTeams *teams = new listTeams();
    initialiseEquimentList(teams);
    uploadData(teams);//Debugear y/o cambiar manera de cargar Datos
    do {
        opc = menu();
        switch (opc) {
        case 1: registerTeam(teams); break;
        case 2: registerPlayer(teams); break;
        case 3: searchTeam(teams); break;
        case 4: listFootballTeams(teams); break;
        case 5: showTeamsPlayers(teams); break;
        }
    } while (!(opc == 0));
    return 0;
}

