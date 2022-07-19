#include "frmnuevomedicamento.h"
#include "ui_frmnuevomedicamento.h"

FrmNuevoMedicamento::FrmNuevoMedicamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNuevoMedicamento)
{
    ui->setupUi(this);
}

FrmNuevoMedicamento::~FrmNuevoMedicamento()
{
    delete ui;
}
