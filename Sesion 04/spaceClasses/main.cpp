#include <house.h>

int main()
{
    house *home1 = new house();
    house *home2 = new house();
    house *home3 = new house("Av. Bolognesi",345.00);
    house *home4 = new house("Calle los jaminez 123","azul",110.00,"Juan Carlos",true);
    pet *pet1 = new pet();

    pet1->changeName("Sasha");

    home1->setOwner("Cristian Juares");
    home1->changeCondition(true);
    home1->setCondition(true);
    home2 = home1;
    home2->changeCondition(true);

    home1->setMascota(*pet1);

    return 0;
}

