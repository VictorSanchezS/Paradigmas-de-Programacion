#include "frmnewpaciente.h"
#include "ui_frmnewpaciente.h"
#include "QMessageBox"
#include "patient.h"

FrmNewPaciente::FrmNewPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNewPaciente)
{
    ui->setupUi(this);
    this->patients = new PatientsList();
}

FrmNewPaciente::~FrmNewPaciente()
{
    delete ui;
}

void FrmNewPaciente::on_cmdCerrar_clicked()
{
    this->close();
}

void FrmNewPaciente::cleanControls(){
    ui->txtNombre->clear();
    ui->txtDuenio->clear();
    ui->txtDni->clear();
    ui->deFecha->setDate(QDate(2022,01, 01 ) );
    ui->txtSintomas->clear();
    ui->sbHermanos->setValue(1);
    ui->txtNombre->setFocus();
}

void FrmNewPaciente::on_cmdRegistrar_clicked()
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

    this->patients->insert(newPatient);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "","Registro Correcto"  );

    // Limpia controles del formulario
    this->cleanControls();

}
PatientsList *FrmNewPaciente::getPatients() const
{
    return patients;
}

void FrmNewPaciente::setPatients(PatientsList *value)
{
    patients = value;
}


