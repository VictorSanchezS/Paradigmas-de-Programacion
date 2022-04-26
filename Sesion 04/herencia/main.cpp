#include <iostream>
#include <trabajador.h>
#include <alumno.h>

using namespace std;

int main()
{
    trabajador *trabajador1 = new trabajador();
    alumno *alumno1 = new alumno();

    alumno1->setCarrera("Ingeneria de sistemas");

    return 0;
}

