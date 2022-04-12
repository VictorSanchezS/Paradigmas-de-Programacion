/*
Llevar con control de un depósito de automóviles. Se debe poder registrar por día que automóvil llega junto a los datos del automóvil incluyendo el propietario.
Las opciones deben tener:
Registro de día
Registro de automóvil y sus datos
Búsqueda de automóvil por placa
Búsqueda de automóvil por dueño
Lista de automóviles
Lista de días y los automóviles que ingresan

*/
#include <basics.cpp>

struct car{
    string owner;
    string plate;
    string model;
    string color;
    string brand;
    string checkinTime;
    string departureTime;
    double cost;
};

struct carNode{
    car *carriage;
    carNode *next;
};

struct carList{
    unsigned short numberCars;
    carNode *head;
};

struct day{
    string date;
    carList *cars;
};

struct dayNode{
    day *dia;
    dayNode *next;
    dayNode *previous;
};

struct listDays{
    unsigned short numberDates;
    dayNode *head;
};
