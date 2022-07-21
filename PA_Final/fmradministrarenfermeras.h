#ifndef FMRADMINISTRARENFERMERAS_H
#define FMRADMINISTRARENFERMERAS_H

#include "listaenfermeras.h"

#include <QDialog>

namespace Ui {
class FmrAdministrarEnfermeras;
}

class FmrAdministrarEnfermeras : public QDialog
{
    Q_OBJECT

public:
    explicit FmrAdministrarEnfermeras(QWidget *parent = 0);
    ~FmrAdministrarEnfermeras();

    ListaEnfermeras *getListaEnfermeras() const;
    void setListaEnfermeras(ListaEnfermeras *value);

    void mostrarFilaEnfermeras(int x, NodoEnfermeraClass *aux);
    void listadoEnfermeras(ListaEnfermeras *listaEnfermeras);
    EnfermeraClass *selecionarEnfermera(QString codigo);
private slots:
    void on_cmdAgregarEnfermera_clicked();

    void on_cmdCerrar_clicked();

    void on_cmdBuscar_clicked();

    void on_cmdMostrarTodos_clicked();

    void on_cmdActualizarEnfermera_clicked();

private:
    Ui::FmrAdministrarEnfermeras *ui;
    ListaEnfermeras *listaEnfermeras;
};

#endif // FMRADMINISTRARENFERMERAS_H
