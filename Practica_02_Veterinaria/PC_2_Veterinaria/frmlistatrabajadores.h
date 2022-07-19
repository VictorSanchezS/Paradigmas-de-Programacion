#ifndef FRMLISTATRABAJADORES_H
#define FRMLISTATRABAJADORES_H

#include <QDialog>

namespace Ui {
class FrmListaTrabajadores;
}

class FrmListaTrabajadores : public QDialog
{
    Q_OBJECT

public:
    explicit FrmListaTrabajadores(QWidget *parent = 0);
    ~FrmListaTrabajadores();

private:
    Ui::FrmListaTrabajadores *ui;
};

#endif // FRMLISTATRABAJADORES_H
