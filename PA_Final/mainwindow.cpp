#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fmradministrarlocales.h"

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

