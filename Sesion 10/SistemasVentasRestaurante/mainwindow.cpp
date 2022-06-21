#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "venta.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet("background-image:url(:/"
                                         "Imagenes/imagenFondo.jpg); "
                                         "background-position:center");
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRegistrar_Venta_triggered()
{
    Venta *venta = new Venta();
    venta->show();
}
