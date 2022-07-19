#ifndef FRMACTUALIZARTRABAJADOR_H
#define FRMACTUALIZARTRABAJADOR_H

#include <QDialog>

namespace Ui {
class FrmActualizarTrabajador;
}

class FrmActualizarTrabajador : public QDialog
{
    Q_OBJECT

public:
    explicit FrmActualizarTrabajador(QWidget *parent = 0);
    ~FrmActualizarTrabajador();

private:
    Ui::FrmActualizarTrabajador *ui;
};

#endif // FRMACTUALIZARTRABAJADOR_H
