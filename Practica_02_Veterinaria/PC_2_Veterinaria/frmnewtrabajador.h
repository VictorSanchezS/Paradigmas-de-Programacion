#ifndef FRMNEWTRABAJADOR_H
#define FRMNEWTRABAJADOR_H

#include <QDialog>

namespace Ui {
class FrmNewTrabajador;
}

class FrmNewTrabajador : public QDialog
{
    Q_OBJECT

public:
    explicit FrmNewTrabajador(QWidget *parent = 0);
    ~FrmNewTrabajador();

private:
    Ui::FrmNewTrabajador *ui;
};

#endif // FRMNEWTRABAJADOR_H
