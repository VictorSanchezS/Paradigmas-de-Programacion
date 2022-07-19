#include "frmactualizarmedicamento.h"
#include "ui_frmactualizarmedicamento.h"

FrmActualizarMedicamento::FrmActualizarMedicamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmActualizarMedicamento)
{
    ui->setupUi(this);
}

FrmActualizarMedicamento::~FrmActualizarMedicamento()
{
    delete ui;
}
