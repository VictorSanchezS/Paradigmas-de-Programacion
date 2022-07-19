#ifndef FRMNEWPACIENTE_H
#define FRMNEWPACIENTE_H
#include "patientslist.h"

#include <QDialog>

namespace Ui {
class FrmNewPaciente;
}

class FrmNewPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit FrmNewPaciente(QWidget *parent = 0);
    ~FrmNewPaciente();



    PatientsList *getPatients() const;
    void setPatients(PatientsList *value);

    void cleanControls();
private slots:
    void on_cmdCerrar_clicked();

    void on_cmdRegistrar_clicked();

private:
    Ui::FrmNewPaciente *ui;
    PatientsList *patients;
};

#endif // FRMNEWPACIENTE_H
