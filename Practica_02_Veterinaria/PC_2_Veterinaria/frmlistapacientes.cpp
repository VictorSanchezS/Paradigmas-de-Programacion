#include "frmlistapacientes.h"
#include "ui_frmlistapacientes.h"
#include "frmnewpaciente.h"
#include "frmactualizarpaciente.h"
#include "QMessageBox"

FrmListaPacientes::FrmListaPacientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmListaPacientes)
{
    ui->setupUi(this);

    ui->twPacientes->setColumnWidth(0,80);
    ui->twPacientes->setColumnWidth(1,120);
    ui->twPacientes->setColumnWidth(2,150);
    ui->twPacientes->setColumnWidth(3,120);
}

FrmListaPacientes::~FrmListaPacientes()
{
    delete ui;
}

void FrmListaPacientes::showPatients(int x, PatientNode *auxPatientNode){
    ui->twPacientes->insertRow( ui->twPacientes->rowCount() );
    ui->twPacientes->setItem(x, 0, new QTableWidgetItem(  auxPatientNode->getPatient()->getCode() ));
    ui->twPacientes->setItem(x, 1, new QTableWidgetItem(  auxPatientNode->getPatient()->getName() ));
    ui->twPacientes->setItem(x, 2, new QTableWidgetItem(  auxPatientNode->getPatient()->getOwner() ));
    ui->twPacientes->setItem(x, 3, new QTableWidgetItem(  auxPatientNode->getPatient()->getDateOfBirth() ));
}
PatientsList *FrmListaPacientes::getPatients() const
{
    return patients;
}

void FrmListaPacientes::setPatients(PatientsList *value)
{
    patients = value;
}


void FrmListaPacientes::showPatientsList(PatientsList *patients){
    ui->twPacientes->setRowCount(0);
    PatientNode *auxPatientNode = new PatientNode();
    auxPatientNode = patients->getHead();
    int x = 0;
    while( auxPatientNode != NULL ){
        this->showPatients(x,auxPatientNode);
        auxPatientNode = auxPatientNode->getNext();
        x++;
    }
}

void FrmListaPacientes::on_cmdBuscar_clicked()
{
    ui->twPacientes->setRowCount(0);
    PatientNode *auxPatientNode = new PatientNode();
    auxPatientNode = patients->getHead();
    int x = 0;
    while( auxPatientNode != NULL ){
        if(auxPatientNode->getPatient()->getName() == ui->txtNombre->text()){
            this->showPatients(x,auxPatientNode);
            x++;
        }
        auxPatientNode = auxPatientNode->getNext();
    }
}

void FrmListaPacientes::on_cmdCerrar_clicked()
{
    this->close();
}

Patient *FrmListaPacientes::pickPatient(QString code ){
    PatientNode *auxPatientNode = new PatientNode();
    auxPatientNode = this->patients->getHead();
    while( auxPatientNode != NULL ){
        if ( auxPatientNode->getPatient()->getCode() == code ){
            return auxPatientNode->getPatient();
            break;
        }
        auxPatientNode = auxPatientNode->getNext();
    }
    return NULL;
}



void FrmListaPacientes::on_cmdActualizar_clicked()
{
    if(ui->twPacientes->currentIndex().isValid()){
        int type;
        Patient *updatedPatient = new Patient();
        updatedPatient = this->pickPatient(ui->twPacientes->item(ui->twPacientes->currentRow(),0)->text());
        FrmActualizarPaciente *fmrUpdatedPatient = new FrmActualizarPaciente();
        fmrUpdatedPatient->setPatients(this->getPatients());
        fmrUpdatedPatient->setPatient(updatedPatient);
        fmrUpdatedPatient->assignValues();
        type = fmrUpdatedPatient->exec();
        if(type == QDialog::Rejected){
            this->showPatientsList(this->patients);
        }
    }
    else{
        QMessageBox::critical( this, "", "Debe Seleccionar una mascota");
    }
}
Patient *FrmListaPacientes::getPatient() const
{
    return patient;
}

void FrmListaPacientes::setPatient(Patient *value)
{
    patient = value;
}

