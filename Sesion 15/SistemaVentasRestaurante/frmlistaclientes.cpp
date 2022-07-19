#include "frmlistaclientes.h"
#include "ui_frmlistaclientes.h"

FrmListaClientes::FrmListaClientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmListaClientes)
{
    ui->setupUi(this);
}

FrmListaClientes::~FrmListaClientes()
{
    delete ui;
}
