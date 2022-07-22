#ifndef FMRNEWALMACEN_H
#define FMRNEWALMACEN_H
#include "listaalmacenclass.h"
#include <QDialog>

namespace Ui {
class FmrNewAlmacen;
}

class FmrNewAlmacen : public QDialog
{
    Q_OBJECT

public:
    explicit FmrNewAlmacen(QWidget *parent = 0);
    ~FmrNewAlmacen();

    ListaAlmacenClass *getListaAlamacen()const;
    void setListaAlmacen(ListaAlmacenClass *value);

private slots:
    void on_GuardarAl_clicked();

    void on_CancelarAl_clicked();

private:
    Ui::FmrNewAlmacen *ui;
    ListaAlmacenClass *listaAlmacen;
};

#endif // FMRNEWALMACEN_H



