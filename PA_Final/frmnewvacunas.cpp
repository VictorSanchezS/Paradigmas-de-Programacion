#include "frmnewvacunas.h"
#include "ui_frmnewvacunas.h"

FrmNewVacunas::FrmNewVacunas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNewVacunas)
{
    ui->setupUi(this);
}

FrmNewVacunas::~FrmNewVacunas()
{
    delete ui;
}
