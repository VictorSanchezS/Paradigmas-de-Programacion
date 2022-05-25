#ifndef MENU_H
#define MENU_H
#include <dataseed.h>

class Menu
{
private:
   Automotive *automotive;
   void displayAppTitle();
   void displayClientsTableHeader(int rowNumber);
   void registerClient();
   void registerCar();
   void showClients();
   void showCars();
   void findClientById();
   void findCarByPlate();
   int displayMenuOption();


public:
   Menu(Automotive *automotive);
   ~Menu();


    void displayMenu();

    void displayCarsTableHeader(int rowNumber);
};
#endif // MENU_H
