#ifndef FRMTRABAJADORES_H
#define FRMTRABAJADORES_H

#include <QDialog>

namespace Ui {
class FrmTrabajadores;
}

class FrmTrabajadores : public QDialog
{
    Q_OBJECT

public:
    explicit FrmTrabajadores(QWidget *parent = 0);
    ~FrmTrabajadores();

private:
    Ui::FrmTrabajadores *ui;
};

#endif // FRMTRABAJADORES_H
