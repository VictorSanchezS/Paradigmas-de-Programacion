#include <iostream>
#include <persona.h>
#include <alumno.h>
#include <docente.h>

using namespace std;

int main()
{
    cout << "/////////////PERSONA/////////////" << endl;

    Persona *persona_1 = new Persona("Jaime","Bravo Ruiz","16598985","06/10/1987");
    Persona *persona_2 = new Persona();

    persona_2->setApellidos("ESPINOZA SECLEN");
    persona_2->setNombres("ALBA GUADALUPE");
    persona_2->setDni("75956987");
    persona_2->setFechaNacimiento("05/05/2020");
    persona_2->mostrar();
    cout << endl;
    persona_1->mostrar();

    cout << "/////////////ALUMNO/////////////" << endl;


    Alumno *alumno_1 = new Alumno();
    Alumno *alumno_2 = new Alumno("202598789511","INGENERIA DE SISTEMAS","PERU","2020");

    alumno_1->setCodigoUniversitario("3245324324");
    alumno_1->setEspecialidad("ARQUITECTURA");
    alumno_1->setNacionalidad("ECUADOR");
    alumno_1->setAnioIngreso("2018");
    alumno_1->mostrar();
    cout << endl;
    alumno_2->mostrar();

    cout << "/////////////DOCENTE/////////////" << endl;

    Docente *docente_1 = new Docente();
    Docente *docente_2 = new Docente("INGENERIA DE SISTEMAS",true,4500);

    docente_1->setProfesion("MEDICINA");
    docente_1->setTipoContrato(false);
    docente_1->setSueldo(5500);

    docente_1->mostrar();
    docente_2->mostrar();

    /////////

    Persona *persona_3 = new Alumno("201945151","INGENERIA DE SISTEMAS","PERU","2017");

    persona_3->setApellidos("VIERA ABAD");
    persona_3->setNombres("COLLINS POOL");
    persona_3->setDni("56989854");
    persona_3->setFechaNacimiento("10/10/2000");

    cout << endl;

    persona_3->mostrar();

    cout << "/////////////DOCENTE/////////////" << endl;

    Persona *persona_4 = new Docente("DOCENTE",true,4500);

    persona_4->setApellidos("SANCHEZ");
    persona_4->setNombres("VICTOR");
    persona_4->setDni("74659847");
    persona_4->setFechaNacimiento("20/05/2001");
    cout << endl;
    persona_4->mostrar();
    return 0;
}

