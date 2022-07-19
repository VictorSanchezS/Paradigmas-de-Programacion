#include "frmtrabajadores.h"
#include "ui_frmtrabajadores.h"

FrmTrabajadores::FrmTrabajadores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmTrabajadores)
{
    ui->setupUi(this);
}

FrmTrabajadores::~FrmTrabajadores()
{
    delete ui;
}
