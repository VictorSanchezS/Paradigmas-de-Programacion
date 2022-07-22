#ifndef FMRACTUALIZARALMACEN_H
#define FMRACTUALIZARALMACEN_H

#include <QDialog>

namespace Ui {
class FmrActualizarAlmacen;
}

class FmrActualizarAlmacen : public QDialog
{
    Q_OBJECT

public:
    explicit FmrActualizarAlmacen(QWidget *parent = 0);
    ~FmrActualizarAlmacen();

private:
    Ui::FmrActualizarAlmacen *ui;
};

#endif // FMRACTUALIZARALMACEN_H
