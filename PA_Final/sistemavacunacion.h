#ifndef SISTEMAVACUNACION_H
#define SISTEMAVACUNACION_H
#include "listalocalesclass.h"


class SistemaVacunacion
{
private:
    QString ruc;
    QString lider;
    QString telefono;
    ListaLocalesClass *listaLocales; //LES
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
};

#endif // SISTEMAVACUNACION_H
