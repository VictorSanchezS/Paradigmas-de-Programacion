#include <iostream>
#include <phone.h>

using namespace std;

int main()
{
    Phone *phone = new Phone("Pro max 13","APPLE",6500,"Negro","A678","3400");
    Chip chip = new Chip("967850467","Claro",5.0);

    phone->agregarChip(chip);
    phone->mostrar();
    chip.mostrar();

    return 0;
}

