#ifndef FMRACTUALIZARLOCAL_H
#define FMRACTUALIZARLOCAL_H

#include <QDialog>

#include "listalocalesclass.h"

namespace Ui {
class FmrActualizarLocal;
}

class FmrActualizarLocal : public QDialog
{
    Q_OBJECT

public:
    explicit FmrActualizarLocal(QWidget *parent = 0);
    ~FmrActualizarLocal();

    ListaLocalesClass *getListaLocales() const;
    void setListaLocales(ListaLocalesClass *value);

    LocalClass *getLocal() const;
    void setLocal(LocalClass *value);

    void asignarValores();
private slots:
    void on_CmdCerrar_clicked();

    void on_cmdGrabar_clicked();

private:
    Ui::FmrActualizarLocal *ui;
    ListaLocalesClass *listaLocales;
    LocalClass *local;
};

#endif // FMRACTUALIZARLOCAL_H
