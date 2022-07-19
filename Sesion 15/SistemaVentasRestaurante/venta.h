#ifndef VENTA_H
#define VENTA_H

#include <QDialog>

namespace Ui {
class Venta;
}

class Venta : public QDialog
{
    Q_OBJECT

public:
    explicit Venta(QWidget *parent = 0);
    ~Venta();

private:
    Ui::Venta *ui;
};

#endif // VENTA_H
