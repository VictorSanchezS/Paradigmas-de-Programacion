#include "frmactualizartrabajador.h"
#include "ui_frmactualizartrabajador.h"

FrmActualizarTrabajador::FrmActualizarTrabajador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmActualizarTrabajador)
{
    ui->setupUi(this);
}

FrmActualizarTrabajador::~FrmActualizarTrabajador()
{
    delete ui;
}
