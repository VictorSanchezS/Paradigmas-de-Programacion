#include "frmlistatrabajadores.h"
#include "ui_frmlistatrabajadores.h"

FrmListaTrabajadores::FrmListaTrabajadores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmListaTrabajadores)
{
    ui->setupUi(this);
}

FrmListaTrabajadores::~FrmListaTrabajadores()
{
    delete ui;
}
