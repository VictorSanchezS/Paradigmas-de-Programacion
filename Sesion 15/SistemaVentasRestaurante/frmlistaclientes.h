#ifndef FRMLISTACLIENTES_H
#define FRMLISTACLIENTES_H

#include <QDialog>

namespace Ui {
class FrmListaClientes;
}

class FrmListaClientes : public QDialog
{
    Q_OBJECT

public:
    explicit FrmListaClientes(QWidget *parent = 0);
    ~FrmListaClientes();

private:
    Ui::FrmListaClientes *ui;
};

#endif // FRMLISTACLIENTES_H
