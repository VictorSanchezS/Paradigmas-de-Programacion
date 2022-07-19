#ifndef FRMLISTAPRODUCTOSSEL_H
#define FRMLISTAPRODUCTOSSEL_H

#include <QDialog>

namespace Ui {
class FrmListaProductosSel;
}

class FrmListaProductosSel : public QDialog
{
    Q_OBJECT

public:
    explicit FrmListaProductosSel(QWidget *parent = 0);
    ~FrmListaProductosSel();

private:
    Ui::FrmListaProductosSel *ui;
};

#endif // FRMLISTAPRODUCTOSSEL_H
