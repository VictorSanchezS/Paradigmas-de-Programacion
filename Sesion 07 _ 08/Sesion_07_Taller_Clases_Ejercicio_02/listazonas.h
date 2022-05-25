#ifndef LISTAZONAS_H
#define LISTAZONAS_H
#include <zona.h>

class ListaZonas
{
private:
    Zona *cab;
    int numeroZonas;
    int max;
    void crece();
public:
    ListaZonas();
    ~ListaZonas();
    void insertar(Zona *zona);
    Zona *getCab() const;
    void setCab(Zona *value);
    int getNumeroZonas() const;
    void setNumeroZonas(int value);
    int getMax() const;
    void setMax(int value);
    Zona *escojerZona(string message);
};

#endif // LISTAZONAS_H
