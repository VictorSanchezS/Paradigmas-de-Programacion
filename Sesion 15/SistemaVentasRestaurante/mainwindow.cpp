#include "frmlistaproductos.h"
#include "mainwindow.h"
#include "frmventa.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
                "background-image:url(:/imagenes/fondo.jpg); background-position:center;");
    this->showMaximized(); // ventana principal se carga maximizada
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRegistrar_Venta_triggered()
{
    FrmVenta *vent = new FrmVenta();
    vent->show();
}

void MainWindow::on_actionListar_Productos_stock_triggered()
{
    FrmListaProductos *FrmlP = new FrmListaProductos();
    FrmlP->setLP( this->rest->getLP() );
    FrmlP->show();
    FrmlP->ListadoProductos( this->rest->getLP() );
}

Restaurante *MainWindow::getRest() const
{
    return rest;
}

void MainWindow::setRest(Restaurante *value)
{
    rest = value;
}

