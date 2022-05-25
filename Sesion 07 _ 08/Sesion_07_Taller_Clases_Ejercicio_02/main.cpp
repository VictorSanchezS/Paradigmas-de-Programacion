#include <menu.h>

int main()
{
    Supermercado *supermercado = new Supermercado();
    semillaDatos::semilla(supermercado);

    Menu *menu = new Menu(supermercado);

    menu->MenuOpciones();

    return 0;
}

