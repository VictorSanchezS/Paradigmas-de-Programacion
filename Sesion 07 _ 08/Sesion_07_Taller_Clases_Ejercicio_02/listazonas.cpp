#include "listazonas.h"
#define increase 3

ListaZonas::ListaZonas()
{
    this->max = 0;
    this->numeroZonas = 0;
    this->zona = new Zona();
}

ListaZonas::~ListaZonas()
{

}


Zona *ListaZonas::getCab() const
{
    return cab;
}

void ListaZonas::setCab(Zona *value)
{
    cab = value;
}

int ListaZonas::getNumeroZonas() const
{
    return numeroZonas;
}

void ListaZonas::setNumeroZonas(int value)
{
    numeroZonas = value;
}

int ListaZonas::getMax() const
{
    return max;
}

void ListaZonas::setMax(int value)
{
    max = value;
}
void ListaZonas::crece(){
    Zona *aux = new Zona[this->numeroZonas + increase];

    for(int i = 0; i < this->numeroZonas;i++){
        *(aux + i) = *(this->cab + i);
    }
    this->cab = aux;
    this->max += increase;
}

void ListaZonas::insertar(Zona *zona){
    if(this->numeroZonas == this->max){
        this->crece();
    }

    *(this->cab + this->numeroZonas) = *zona;
    this->numeroZonas++;
}


// Escojer Zona

Zona *ListaZonas::escojerZona(string message) {

    Zona *aux = NULL;
    int opcion;
    int y = 0;

    cout << message;
    Basics::position(17,8);cout << "Escoja entre las " << this->getNumeroZonas() << " zonas siguientes:";

    for (int x = 0; x < this->getNumeroZonas(); x++ && y++) {
        aux = this->getCab() + x;


        Basics::position(17,10 + x);cout << "[" << x + 1 << "]";
        cout << aux->getNombre();
    }


    Basics::position(17,12 + y ); cout << "Introduzca la opcion deseada: ";
    cin >> option;

    while (!(1 <= opcion && opcion <= this->getNumeroZonas())) {
    cout << "Por favor, introduzca un valor entre 1 y " << this->getNumeroZonas()
         << "." << endl;
    fflush(stdin);
    cin >> option;
    }

    return (this->getCab() + opcion - 1);
}
