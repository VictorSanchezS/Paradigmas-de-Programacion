#include <menu.h>

int main()
{
    Hotel *hotel = new Hotel();
    DataSeed::seed(hotel);

    Menu *appMenu = new Menu(hotel);

    appMenu->displayMenu();
    return 0;
}

