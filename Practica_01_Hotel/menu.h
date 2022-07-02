#ifndef MENU_H
#define MENU_H
#include <dataseed.h>

class Menu
{
private:
    Hotel *hotel;
    void displayAppTitle();
    int displayMenuOption();
    void displayRoomTableHeader(int rowNumber);
    void displayClientsTableHeader(int rowNumber);
    //Opcion 1 Registrar Habitacion
    void registerRoom();
    //Opcion 2 Registrar Cliente
    void registerClient();
    //Opcion 3 Listar Habitaciones Ocuapdas y/o Libres
    void displayFreeAndOccupiedRooms();
    //Opcion 4 Listar Personas en Cierta Fecha
    void displayClientsByArrivalDate();
    //Opcion 5 Mostrar cliente alojado por Dni
    void findClientById();
    //Opcion 6 Mostrar el monto total recaudado por los alojamientos
    void calculateTotalAmountForAccommodation();
public:
    Menu(Hotel *hotel);
    ~Menu();
    void displayMenu();
};

#endif // MENU_H
