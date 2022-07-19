#ifndef FMRNEWLOCAL_H
#define FMRNEWLOCAL_H
#include "listalocalesclass.h"

#include <QDialog>

namespace Ui {
class FmrNewLocal;
}

class FmrNewLocal : public QDialog
{
    Q_OBJECT

public:
    explicit FmrNewLocal(QWidget *parent = 0);
    ~FmrNewLocal();

    ListaLocalesClass *getListaLocales() const;
    void setListaLocales(ListaLocalesClass *value);
    void limpiarControles();
private slots:
    void on_cmdGrabar_clicked();

    void on_CmdCerrar_clicked();

private:
    Ui::FmrNewLocal *ui;
    ListaLocalesClass *listaLocales;
};

#endif // FMRNEWLOCAL_H
