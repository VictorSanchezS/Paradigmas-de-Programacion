#include "fmractualizaralmacen.h"
#include "ui_fmractualizaralmacen.h"

FmrActualizarAlmacen::FmrActualizarAlmacen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrActualizarAlmacen)
{
    ui->setupUi(this);
}

FmrActualizarAlmacen::~FmrActualizarAlmacen()
{
    delete ui;
}
