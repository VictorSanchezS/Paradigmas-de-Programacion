#ifndef FRMLISTAPACIENTES_H
#define FRMLISTAPACIENTES_H

#include "patientslist.h"

#include <QDialog>

namespace Ui {
class FrmListaPacientes;
}

class FrmListaPacientes : public QDialog
{
    Q_OBJECT

public:
    explicit FrmListaPacientes(QWidget *parent = 0);
    ~FrmListaPacientes();


    void showPatientsList(PatientsList *patients);
    void showPatients(int x, PatientNode *auxPatientNode);
    PatientsList *getPatients() const;
    void setPatients(PatientsList *value);

    Patient *pickPatient(QString code);
    Patient *getPatient() const;
    void setPatient(Patient *value);

private slots:
    void on_cmdBuscar_clicked();

    void on_cmdCerrar_clicked();

    void on_cmdActualizar_clicked();

private:
    Ui::FrmListaPacientes *ui;
    PatientsList *patients;
    Patient *patient;
};

#endif // FRMLISTAPACIENTES_H
