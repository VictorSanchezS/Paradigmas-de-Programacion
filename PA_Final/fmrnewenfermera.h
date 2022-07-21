#ifndef FMRNEWENFERMERA_H
#define FMRNEWENFERMERA_H
#include "listaenfermeras.h"

#include <QDialog>

namespace Ui {
class FmrNewEnfermera;
}

class FmrNewEnfermera : public QDialog
{
    Q_OBJECT

public:
    explicit FmrNewEnfermera(QWidget *parent = 0);
    ~FmrNewEnfermera();

    ListaEnfermeras *getListaEnfermeras() const;
    void setListaEnfermeras(ListaEnfermeras *value);

private slots:
    void on_cmdCancelar_clicked();

    void on_cmdRegistrar_clicked();

private:
    Ui::FmrNewEnfermera *ui;
    ListaEnfermeras *listaEnfermeras;
};

#endif // FMRNEWENFERMERA_H
