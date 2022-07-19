#include "frmlistaproductossel.h"
#include "ui_frmlistaproductossel.h"

FrmListaProductosSel::FrmListaProductosSel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmListaProductosSel)
{
    ui->setupUi(this);
}

FrmListaProductosSel::~FrmListaProductosSel()
{
    delete ui;
}
