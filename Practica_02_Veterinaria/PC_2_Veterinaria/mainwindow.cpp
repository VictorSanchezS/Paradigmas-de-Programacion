#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmnewpaciente.h"
#include "frmlistapacientes.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
                "background-image:url(:/img/veterinaria.jpg); background-position:center;");
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAgregar_Pacientes_triggered()
{
    FrmNewPaciente *fmrNewPatient = new FrmNewPaciente();
    fmrNewPatient->setPatients(this->getPatients());
    fmrNewPatient->show();
}
PatientsList *MainWindow::getPatients() const
{
    return patients;
}

void MainWindow::setPatients(PatientsList *value)
{
    patients = value;
}


void MainWindow::on_actionListar_Pacientes_triggered()
{
    if(this->getPatients()->getNumberPatients() == 0){
        QMessageBox *message = new QMessageBox();
        message->setText("Primero registre Pacientes");
        message->exec();
        return;
    }
    FrmListaPacientes *fmrPatientsList = new FrmListaPacientes();
    fmrPatientsList->setPatients(this->getPatients());
    fmrPatientsList->show();
    fmrPatientsList->showPatientsList(this->getPatients());
}
