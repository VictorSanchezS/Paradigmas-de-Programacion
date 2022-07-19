#include "frmactualizarpaciente.h"
#include "ui_frmactualizarpaciente.h"
#include "QMessageBox"

FrmActualizarPaciente::FrmActualizarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmActualizarPaciente)
{
    ui->setupUi(this);
}

FrmActualizarPaciente::~FrmActualizarPaciente()
{
    delete ui;
}
PatientsList *FrmActualizarPaciente::getPatients() const
{
    return patients;
}

void FrmActualizarPaciente::setPatients(PatientsList *value)
{
    patients = value;
}
Patient *FrmActualizarPaciente::getPatient() const
{
    return patient;
}

void FrmActualizarPaciente::setPatient(Patient *value)
{
    patient = value;
}

void FrmActualizarPaciente::assignValues()
{
    ui->txtNombre->setText(this->patient->getName());
    ui->txtDuenio->setText(this->patient->getOwner());
    QString dateOfBirth = this->patient->getDateOfBirth();
    QDate date = QDate::fromString(dateOfBirth,"dd/MM/yyyy");
    ui->deFecha->setDate(date);
}

void FrmActualizarPaciente::on_cmdActualizar_clicked()
{
    //Validacion
    if(ui->txtNombre->text().isEmpty()){
        QMessageBox::critical(this,"Error","Agrege Nombre");
        return;
    }
    if(ui->txtDuenio->text().isEmpty()){
        QMessageBox::critical(this,"Error","Agrege Dueño");
        return;
    }
    if(ui->txtDni->text().isEmpty()){
        QMessageBox::critical(this,"Error","Agrege DNI");
        return;
    }
    if(ui->txtSintomas->text().isEmpty()){
        QMessageBox::critical(this,"Error","Agrege sintomas");
        return;
    }

    // Datos del formulario
    QString name = this->ui->txtNombre->text();
    bool gender = this->ui->rbM->isChecked();
    QString owner = this->ui->txtDuenio->text();
    QString idOwner = this->ui->txtDni->text();
    QString dateOfBirth = this->ui->deFecha->text();
    QString symptom = this->ui->txtSintomas->text();
    int numberSiblings = this->ui->sbHermanos->value();

    // Creación de la nueva instancia
    Patient *newPatient = new Patient(name,gender,owner,idOwner,dateOfBirth,symptom,numberSiblings);

    // Actualizacion de valores
    this->patients->updateValues(newPatient);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "","Actualizado Correctamente"  );
}
