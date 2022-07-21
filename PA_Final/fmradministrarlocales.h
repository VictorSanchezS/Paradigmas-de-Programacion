#ifndef FMRADMINISTRARLOCALES_H
#define FMRADMINISTRARLOCALES_H

#include "listalocalesclass.h"

#include <QDialog>

namespace Ui {
class FmrAdministrarLocales;
}

class FmrAdministrarLocales : public QDialog
{
    Q_OBJECT

public:
    explicit FmrAdministrarLocales(QWidget *parent = 0);
    ~FmrAdministrarLocales();

    ListaLocalesClass *getListaLocales() const;
    void setListaLocales(ListaLocalesClass *value);

    void listadoLocales(ListaLocalesClass *listaLocales);
    void mostraFila(int x, NodoLocalClass *aux);
    LocalClass *selecionarLocal(QString codigo);
private slots:
    void on_cmdCerrar_clicked();

    void on_cmdAgregarLocal_clicked();

    void on_cmdBuscar_clicked();

    void on_cmdActualizar_clicked();

    void on_cmdTodos_clicked();

    void on_cmdEliminar_clicked();

private:
    Ui::FmrAdministrarLocales *ui;
    ListaLocalesClass *listaLocales;
};

#endif // FMRADMINISTRARLOCALES_H
