#ifndef MENU_H
#define MENU_H
#include <semilladatos.h>

class Menu
{
private:
    Supermercado *supermercado;
    void mostrarTituloAplicacion();
    int mostrarMenuOpciones();
    void registrarZona();
    void registrarEstante();
    void MenuOpciones();
public:
    ~Menu();
    Menu(Supermercado *supermercado);
};

#endif // MENU_H
