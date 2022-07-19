#ifndef FRMACTUALIZARMEDICAMENTO_H
#define FRMACTUALIZARMEDICAMENTO_H

#include <QDialog>

namespace Ui {
class FrmActualizarMedicamento;
}

class FrmActualizarMedicamento : public QDialog
{
    Q_OBJECT

public:
    explicit FrmActualizarMedicamento(QWidget *parent = 0);
    ~FrmActualizarMedicamento();

private:
    Ui::FrmActualizarMedicamento *ui;
};

#endif // FRMACTUALIZARMEDICAMENTO_H
