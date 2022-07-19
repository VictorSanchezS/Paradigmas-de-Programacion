#include "frmlistamedicamentos.h"
#include "ui_frmlistamedicamentos.h"

FrmListaMedicamentos::FrmListaMedicamentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmListaMedicamentos)
{
    ui->setupUi(this);
}

FrmListaMedicamentos::~FrmListaMedicamentos()
{
    delete ui;
}
