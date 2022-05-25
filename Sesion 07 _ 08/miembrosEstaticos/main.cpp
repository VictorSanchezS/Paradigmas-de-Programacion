#include <iostream>
#include <persona.h>
#include <basicas.h>

using namespace std;



int main()
{
    Persona *persona_1 = new Persona(true);
    Persona *persona_2 = new Persona(false);
    Persona *persona_3 = new Persona(true);
    Persona *persona_4 = new Persona(false);

    Basicas::position(20,5);
    persona_1->setFirstName(Basicas::readText("Ingrese Nombre: "));

    return 0;
}

