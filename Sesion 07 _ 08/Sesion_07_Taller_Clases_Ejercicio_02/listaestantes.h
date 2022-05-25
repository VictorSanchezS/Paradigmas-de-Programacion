#ifndef LISTAESTANTES_H
#define LISTAESTANTES_H
#include <nodoestante.h>

class ListaEstantes
{
private:
    Estante *cab;
    int cantidadEstantes;
public:
    ListaEstantes();
    ~ListaEstantes();
    Estante *getCab() const;
    void setCab(Estante *value);
    int getCantidadEstantes() const;
    void setCantidadEstantes(int value);
    void insertar(Estante *nuevoEstante);
};

#endif // LISTAESTANTES_H
