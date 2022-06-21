#include "venta.h"
#include "ui_venta.h"

Venta::Venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Venta)
{
    ui->setupUi(this);
}

Venta::~Venta()
{
    delete ui;
}
