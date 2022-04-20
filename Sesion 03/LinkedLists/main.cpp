#include <structures.cpp>

void initialiseChampionship(championship *campeonato){
    campeonato->name = "Campeonato 2022-I de Ingeneria de Sistemas";
    campeonato->startDate = "04/04/2022";
    campeonato->endingDate = "26/07/2022";
    campeonato->teams = new listTeams();
    campeonato->teams->header = NULL;
    campeonato->teams->numberTeams = 0;
    campeonato->teams->max = 0;
}

//opc 1 registrar Equipo

void readTeamFootball(teamFootball *team){
    clearScreen();
    position(45,6); team->code = readText("CODIGO: ");
    position(45,7); team->name = readText("NOMBRE: ");
    position(45,8); team->dt = readText("ENTRENADOR: ");
    position(45,9); team->city = readText("CIUDAD: ");
    position(45,10); team->stadium = readText("ESTADIO: ");
}


void grow(listTeams *teams){
    teamFootball *aux = new teamFootball[teams->max + increase];
    for(int x = 0; x < teams->max; x++){
        *(aux + x ) = *(teams->header + x);
    }
    if(teams->header != NULL){
        delete teams->header;
    }
    teams->header = aux;
    teams->max += increase;
}

void insertTeam(listTeams *teams, teamFootball *team){
    if(teams->numberTeams == teams->max){
        grow(teams);
    }
    *(teams->header + teams->numberTeams) = *team;
    teams->numberTeams++;
}

void initialiseTeam(teamFootball *team){
    team->players->header = NULL;
    team->players->numberPlayers = 0;
}

void registerTeam(listTeams *teams){
    char answer;
    do{
       teamFootball *team = new teamFootball();
       initialiseTeam(team);
       readTeamFootball(team);
       insertTeam(teams,team);
       do{
           position(40,12);cout << "Desea insertar otro Equipo?: ";
           fflush(stdin);
           cin.get(answer);
       }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));
}

//opc 2 Registrar Jugador

// opc 2 registrar jugador

teamFootball *pickTeam(listTeams *teams){
    system("cls");
    int opc;
    cout << "Escoja entre los " << teams->numberTeams <<" equipos siguientes: " << endl << endl;
    for(int x = 0; x < teams->numberTeams;x++){
        cout << "[" << x + 1 <<"]";
        cout << " - Escuela:";
        cout << ((teams->header + x)->name);
        cout << endl;
    }
    cout << endl << "Introduzca la Opcion deseada: ";
    cin >> opc;

    while(!(1 <= opc && opc <= teams->numberTeams)){
        cout << "Por favor, introduzca un valor entre 1 y " << teams->numberTeams << "."<<endl;
        fflush(stdin);
        cin >> opc;
    }
    return (teams->header + opc) - 1;
}

void initialisePlayer(player *jugador){
    jugador->age = 0;
    jugador->size = 0;
    jugador->weight = 0.0;
}

void readPlayer(player *jugador){
    clearScreen();
    position(45,2); cout << "*********************";
    position(45,3); cout << "* REGISTRAR JUGADOR *";
    position(45,4); cout << "*********************";
    position(45,5);jugador->names = readText("NOMBRE: ");
    position(45,6);jugador->surnames = readText("APELLIDOS: ");
    position(45,7);jugador->posicion = readText("POSICION: ");
    position(45,8);jugador->age = readInteger("EDAD: ");
    position(45,9);jugador->weight = readReal("PESO: ");
    position(45,10);jugador->size = readUnsignedShort("TALLA(cm): ");
}

void insertPlayer(playerList *players,player * jugador){
    playerNode *aux = new playerNode();
    aux = players->header;
    playerNode *temp = new playerNode();
    temp->jugador = *jugador;
    if (aux != NULL) {
        while (aux->next != NULL) {
            aux = aux->next;
        }
        temp->next = aux->next;
        aux->next = temp;
        temp->previous = aux;
    }
    else {
        temp->next = aux;
        temp->previous = NULL;
        players->header = temp;
    }
    players->numberPlayers++;
}

void registerPlayer(listTeams *teams){
    clearScreen();
    if(teams->numberTeams == 0){
        position(45,5);cout << "LISTA DE EQUIPOS VACIA";
        addDelay(2);
        return;
    }
    char answer;
    do{
        teamFootball *aux = new teamFootball();
        aux = pickTeam(teams);
        player *jugador = new player();
        initialisePlayer(jugador);
        readPlayer(jugador);
        insertPlayer(aux->players,jugador);
        do{
            position(40,12);cout << "Desea insertar otro Jugador?: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));

}
//opc 3 listar Equipos

void showTeam(teamFootball *team, int x){
    headerTeam();
    position(12,5 + x);cout << team->code;
    position(20,5 + x);cout << team->name;
    position(35,5 + x);cout << team->city;
    position(45,5 + x);cout << team->dt;
    position(65,5 + x);cout << team->stadium;
}

void listFootballTeams(listTeams *teams){
    clearScreen();
    if(teams->numberTeams == 0){
        position(45,5);cout << "NO HAY EQUIPOS REGISTRADOS";
        return;
    }
    for(int x = 0 ; x < teams->numberTeams;x++ ){
        showTeam((teams->header + x),x);
    }
    cout << endl;
    pause();
}

// opc 4 Mostrar Equipos con sus jugadores

void showPlayers(player *jugador,int x){
    headerPlayers();
    position(8,5 + x);cout << jugador->names;
    position(25,5 + x);cout << jugador->surnames;
    position(45,5 + x);cout << jugador->age;
    position(55,5 + x);cout << jugador->size;
    position(65,5 + x);cout << jugador->weight;
    position(75,5 + x);cout << jugador->posicion;
}

void showtTeamsPlayers(listTeams *teams){
    clearScreen();
    if(teams->numberTeams == 0){
        position(45,5);cout << "NO HAY EQUIPOS REGISTRADOS";
        return;
    }
    teamFootball *aux = new teamFootball();
    aux = pickTeam(teams);
    clearScreen();
    int x = 0;
    while(aux->players->header != NULL){
        showPlayers(&aux->players->header->jugador,x);
        aux->players->header = aux->players->header->next;
        x++;
    }
    cout << endl;
    pause();
}

//opc 5 Buscar Equipo

void searchTeam(listTeams *teams){
    if(teams->numberTeams == 0){
        position(45,5);cout << "NO HAY EQUIPOS REGISTRADOS";
        return;
    }
    string teamToSearch;
    bool sw = false;

    system("cls");
    teamToSearch = readText("Ingrese nombre de equipo a buscar: ");
    system("cls");

    for(int i = 0 ;i < teams->numberTeams ; i++){
        if((teams->header + i)->name == teamToSearch){
            showTeam((teams->header + i),0);
            sw = true;
            cout << endl;
            system("pause");
            break;
        }
    }

    if(sw == false){
        position(35,5);cout << "Equipo no encontrado";
        cout << endl;
        system("pause");
    }
}

//opc 6 buscar Jugador

void searchPlayer(listTeams *teams){
    system("cls");
    if(teams->numberTeams == 0){
        position(45,5);cout << "NO HAY EQUIPOS REGISTRADOS";
        system("pause");
        return;
    }
    playerNode *player = new playerNode();
    string playerToSearch;
    bool sw = false;
    position(35,5); playerToSearch = readText("INGRESE NOMBRE DE JUGADOR A BUSCAR: ");
    clearScreen();
    for(int i = 0; i < teams->numberTeams;i++){
        player = (teams->header + i)->players->header;
        while(player != NULL){
            if(playerToSearch == player->jugador.names){
                showPlayers(&player->jugador,0);
                sw = true;
                cout << endl;
                system("pause");
                break;
            }
            player = player->next;
        }
    }
    if(sw == false){
        system("color 15");
        position(35,5);cout << "JUGADOR NO ENCONTRADO";
        cout << endl;
        system("pause");
        system("color 7");
    }
}


//carga de datos

player *dataPlayer(string names, string surnames, string position, int age, double weight, unsigned short size){
    player *jugador = new player();

    jugador->names = names;
    jugador->surnames = surnames;
    jugador->posicion = position;
    jugador->age = age;
    jugador->weight = weight;
    jugador->size = size;

    return jugador;
}

teamFootball *dataTeam(string code, string name, string dt, string city, string stadium){
    teamFootball *team = new teamFootball();
    team->players = new playerList();

    team->players->header = NULL;
    team->players->numberPlayers = 0;

    team->code = code;
    team->name = name;
    team->dt = dt;
    team->city = city;
    team->stadium = stadium;

    return team;
}

void uploadData(listTeams *teams){
    teamFootball *team1 = new teamFootball();
    teamFootball *team2 = new teamFootball();
    //playerList players1, players2;
    player *player1 = new player();
    player *player2 = new player();
    player *player3 = new player();
    player *player4 = new player();

    team1 = dataTeam("E001","ALIANZA LIMA","FELIPE TORRES","LIMA","MATUTE");
    insertTeam(teams,team1);
    team2 = dataTeam("E002","UNIVERSITARIO","MANUEL SANCHEZ","LIMA","LOLO FERNANDEZ");
    insertTeam(teams,team2);

    player1 = dataPlayer("KUN KUEN","PALOMINO","VOLANTE",14,70,170);
    insertPlayer((teams->header + 0)->players,player1);
    player2 = dataPlayer("CRISTIANO","RONALDO","DELANTERO",37,90,180);
    insertPlayer((teams->header + 0)->players,player2);
    player3 = dataPlayer("LIONEL","MESSI","DELANTERO",37,72,172);
    insertPlayer((teams->header + 1)->players,player3);
    player4 = dataPlayer("DIEGO","MARADONA","DELANTERO",55,80,172);
    insertPlayer((teams->header + 1)->players,player4);

}

int main()
{
    championship *campeonato = new championship();
    initialiseChampionship(campeonato);
    uploadData(campeonato->teams);
    int opc;
    do {
        opc = menu();
        switch (opc) {
            case 1: registerTeam(campeonato->teams); break;
            case 2: registerPlayer(campeonato->teams); break;
            case 3: listFootballTeams(campeonato->teams); break;
            case 4: showtTeamsPlayers(campeonato->teams); break;
            case 5: searchTeam(campeonato->teams); break;
            case 6: searchPlayer(campeonato->teams); break;
        }
    } while (!(opc == 0));
    return 0;
}

