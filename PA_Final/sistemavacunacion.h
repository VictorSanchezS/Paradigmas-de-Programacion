#ifndef SISTEMAVACUNACION_H
#define SISTEMAVACUNACION_H
#include "listalocalesclass.h"
#include "listaenfermeras.h"
#include "listadoctoresclass.h"
#include "listapacientesclass.h"


class SistemaVacunacion
{
private:
    QString ruc;
    QString lider;
    QString telefono;
    ListaLocalesClass *listaLocales;
    ListaEnfermeras *listaEnfermeras;
    listaDoctoresClass *listaDoctores;
    ListaPacientesClass *listaPacientes;
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
    listaDoctoresClass *getListaDoctores() const;
    void setListaDoctores(listaDoctoresClass *value);
    ListaPacientesClass *getListaPacientes() const;
    void setListaPacientes(ListaPacientesClass *value);
};

#endif // SISTEMAVACUNACION_H
