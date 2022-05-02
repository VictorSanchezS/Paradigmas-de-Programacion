#include <iostream>
#include <peoplelist.h>

using namespace std;

int main()
{
    PeopleList *persons = new PeopleList();
    unsigned short opc;
    do{
        opc = persons->menu();
        switch (opc) {
            case 1: persons->registerPerson();break;
            case 2: persons->showPeople();break;
            case 3: persons->searchPerson();break;
            case 4: persons->higherPaidPerson();break;
        }
    }while(!(opc == 0 ));
    return 0;
}

