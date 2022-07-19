#ifndef FRMNUEVOMEDICAMENTO_H
#define FRMNUEVOMEDICAMENTO_H

#include <QDialog>

namespace Ui {
class FrmNuevoMedicamento;
}

class FrmNuevoMedicamento : public QDialog
{
    Q_OBJECT

public:
    explicit FrmNuevoMedicamento(QWidget *parent = 0);
    ~FrmNuevoMedicamento();

private:
    Ui::FrmNuevoMedicamento *ui;
};

#endif // FRMNUEVOMEDICAMENTO_H
