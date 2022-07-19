#ifndef FRMACTUALIZARPACIENTE_H
#define FRMACTUALIZARPACIENTE_H

#include "patientslist.h"

#include <QDialog>

namespace Ui {
class FrmActualizarPaciente;
}

class FrmActualizarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit FrmActualizarPaciente(QWidget *parent = 0);
    ~FrmActualizarPaciente();

    PatientsList *getPatients() const;
    void setPatients(PatientsList *value);

    Patient *getPatient() const;
    void setPatient(Patient *value);

    void assignValues();
private slots:
    void on_cmdActualizar_clicked();

private:
    Ui::FrmActualizarPaciente *ui;
    PatientsList *patients;
    Patient *patient;
};

#endif // FRMACTUALIZARPACIENTE_H
