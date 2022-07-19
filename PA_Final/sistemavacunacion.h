#ifndef SISTEMAVACUNACION_H
#define SISTEMAVACUNACION_H
#include "listalocalesclass.h"
#include "listaenfermeras.h"


class SistemaVacunacion
{
private:
    QString ruc;
    QString lider;
    QString telefono;
    ListaLocalesClass *listaLocales;
    ListaEnfermeras *listaEnfermeras;
public:
    SistemaVacunacion();
    ~SistemaVacunacion();
    QString getRuc() const;
    void setRuc(const QString &value);
    QString getLider() const;
    void setLider(const QString &value);
    QString getTelefono() const;
    void setTelefono(const QString &value);
    ListaLocalesClass *getListaLocales() const;
    void setListaLocales(ListaLocalesClass *value);
    ListaEnfermeras *getListaEnfermeras() const;
    void setListaEnfermeras(ListaEnfermeras *value);
};

#endif // SISTEMAVACUNACION_H
