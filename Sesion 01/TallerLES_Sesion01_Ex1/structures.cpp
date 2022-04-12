/*
Se pide registrar los datos de un grupo de equipos de futbol (código, nombre, ciudad,
nombre del estadio, entrenador). Asimismo, se deberán registrar los datos de sus jugadores
(apellidos, nombres, posición, edad, peso y talla).
Ud. Debe mostrar un menú en que se elija las opciones siguientes:
1. Registrar equipo de futbol
2. Registrar jugador en equipo
3. Buscar equipo de futbol (Se debe mostrar los datos del equipo)
4. Listar equipos
5. Mostrar equipos con sus jugadores
6. Salir
 */
#include <basics.cpp>

struct player{
    string surnames;
    string names;
    string posicion;
    unsigned short age;
    double weight;
    unsigned short size;
};

struct playerNode{
    player *jugador;
    playerNode *next;
};

struct playerList{
  unsigned short numberPlayers;
  playerNode *head;
};

struct teamFootball{
    int code;
    string name;
    string city;
    string stadium;
    string dt;
    playerList *players;
};

struct teamNode{
    teamFootball *team;
    teamNode *next;
    teamNode *previous;
};

struct listTeams{
    unsigned short numberTeams;
    teamNode *head;
};





