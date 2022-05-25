#include <menu.h>

int main()
{
    Automotive *automotive = new Automotive();
    DataSeed::seed(automotive);

    Menu *appMenu = new Menu(automotive);

    appMenu->displayMenu();

    return 0;
}

