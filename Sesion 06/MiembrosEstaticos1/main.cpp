#include <iostream>
#include <persona.h>
#include <basicas.h>


using namespace std;

int Persona::codigo = 0;
double Persona::sueldo = 3000;

int main()
{
    Persona *per1 = new Persona();
    per1->mostrar();
    Persona *per2 = new Persona();
    per2->mostrar();
    Persona *per3 = new Persona();
    per3->mostrar();
    Basicas::gotoxy(30,5); cout << "Universidad";

    return 0;
}

