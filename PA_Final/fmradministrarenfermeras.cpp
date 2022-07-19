#include "fmradministrarenfermeras.h"
#include "ui_fmradministrarenfermeras.h"
#include "fmrnewenfermera.h"

FmrAdministrarEnfermeras::FmrAdministrarEnfermeras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrAdministrarEnfermeras)
{
    ui->setupUi(this);
}

FmrAdministrarEnfermeras::~FmrAdministrarEnfermeras()
{
    delete ui;
}

void FmrAdministrarEnfermeras::on_cmdAgregarEnfermera_clicked()
{
    FmrNewEnfermera *fmrNewEnfermera = new FmrNewEnfermera();
    fmrNewEnfermera->show();
}

void FmrAdministrarEnfermeras::on_cmdCerrar_clicked()
{
    this->close();
}
