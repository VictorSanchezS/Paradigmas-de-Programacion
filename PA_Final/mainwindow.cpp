#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fmradministrarlocales.h"
#include "fmradministrarenfermeras.h"
#include "frmadministrardoctores.h"
#include "fmradministrarpaciente.h"
#include "fmradministraralmacen.h"
#include "frmadministrarlotes.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->centralWidget()->setStyleSheet(
                "background-image:url(:/img/fondo.jpg); background-position:center;");
    this->showMaximized(); // ventana principal se carga maximizada
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdministrar_Locales_triggered()
{
    FmrAdministrarLocales *fmrAdministrarLocales = new FmrAdministrarLocales();
    fmrAdministrarLocales->setListaLocales(this->sistemaVacunacion->getListaLocales());
    fmrAdministrarLocales->show();
    fmrAdministrarLocales->listadoLocales(this->sistemaVacunacion->getListaLocales());
}
SistemaVacunacion *MainWindow::getSistemaVacunacion() const
{
    return sistemaVacunacion;
}

void MainWindow::setSistemaVacunacion(SistemaVacunacion *value)
{
    sistemaVacunacion = value;
}


void MainWindow::on_actionAdministrar_Enfermeras_triggered()
{
    FmrAdministrarEnfermeras *fmrAdministrarEnfermeras = new FmrAdministrarEnfermeras();
    fmrAdministrarEnfermeras->setListaEnfermeras(this->sistemaVacunacion->getListaEnfermeras());
    fmrAdministrarEnfermeras->show();
    fmrAdministrarEnfermeras->listadoEnfermeras(this->sistemaVacunacion->getListaEnfermeras());

}

void MainWindow::on_actionAdministrar_Doctores_triggered()
{
    FrmAdministrarDoctores *frmAdministrarDoctor = new FrmAdministrarDoctores();
    frmAdministrarDoctor->setListaDoctores(this->sistemaVacunacion->getListaDoctores());
    frmAdministrarDoctor->show();
    frmAdministrarDoctor->listadoDoctores(this->sistemaVacunacion->getListaDoctores());
}

void MainWindow::on_actionAdministrar_Pacientes_triggered()
{
    FmrAdministrarPaciente *fmrAdministrarPaciente = new FmrAdministrarPaciente();
    fmrAdministrarPaciente->setListaPacientes(this->sistemaVacunacion->getListaPacientes());
    fmrAdministrarPaciente->show();
    fmrAdministrarPaciente->listadoPacientes(this->sistemaVacunacion->getListaPacientes());
}

void MainWindow::on_actionAdministrar_Almacenes_triggered()
{
    FmrAdministrarAlmacen *fmrAdministrarAlmacen= new FmrAdministrarAlmacen;
    fmrAdministrarAlmacen->setListaAlmacen(this->sistemaVacunacion->getListaAlmacen());
    fmrAdministrarAlmacen->show();
}

void MainWindow::on_actionAdministrar_Lotes_de_Vacunas_triggered()
{
    FrmAdministrarLotes *frmAdministrarLotes= new FrmAdministrarLotes;
    frmAdministrarLotes->setListaLotesV(this->sistemaVacunacion->getListaLotesV());
    frmAdministrarLotes->show();
    frmAdministrarLotes->listadoLoteV(this->sistemaVacunacion->getListaLotesV());
}
