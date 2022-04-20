#include <basics.cpp>

/*
 Usar una lista dinamica y una lista enlazada (simple o doble) para el siguiente caso:
- Un campeonato registra los equipos de futbol con sus juadores. Permitir Registrar:
- Registrar Equipos
- Registrar Jugadores
- Equipos con sus datos
- Jugadores de los equipos
- Buscar un jugador
- Listar equipos
- Listar jugadores
 */

struct player{
    string surnames;
    string names;
    string posicion;
    unsigned short age;
    double weight;
    unsigned short size;
};

struct playerNode{
    player jugador;
    playerNode *next;
    playerNode *previous;
};

struct playerList{
  unsigned short numberPlayers;
  playerNode *header;
};

struct teamFootball{
    string code;
    string name;
    string city;
    string stadium;
    string dt;
    playerList *players;
};


struct listTeams{
    int max;
    int numberTeams;
    teamFootball *header;
};

struct championship{
    string name;
    string startDate;
    string endingDate;
    listTeams *teams;
};
