#include "frmnewtrabajador.h"
#include "ui_frmnewtrabajador.h"

FrmNewTrabajador::FrmNewTrabajador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNewTrabajador)
{
    ui->setupUi(this);
}

FrmNewTrabajador::~FrmNewTrabajador()
{
    delete ui;
}

void FrmNewTrabajador::on_cmdRegistrar_clicked()
{

}
