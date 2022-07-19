#include "frmventa.h"
#include "ui_frmventa.h"
#include "QMessageBox"


FrmVenta::FrmVenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmVenta)
{
    ui->setupUi(this);
}

FrmVenta::~FrmVenta()
{
    delete ui;
}
ListaClientes *FrmVenta::getLC() const
{
    return lC;
}

void FrmVenta::setLC(ListaClientes *value)
{
    lC = value;
}
ListaProductos *FrmVenta::getLP() const
{
    return lP;
}

void FrmVenta::setLP(ListaProductos *value)
{
    lP = value;
}
ListaTrabajadores *FrmVenta::getLT() const
{
    return lT;
}

void FrmVenta::setLT(ListaTrabajadores *value)
{
    lT = value;
}
ListaVentas *FrmVenta::getLV() const
{
    return lV;
}

void FrmVenta::setLV(ListaVentas *value)
{
    lV = value;
}


void FrmVenta::on_btnCerrar_clicked()
{
    this->close();
}


void FrmVenta::on_cmdBuscarDni_clicked()
{
    if ( ui->txtDNI->text().isEmpty()){
        QMessageBox::critical(this, "Error", "Error");
        return;
    }
    //Cliente *cli =
}

Cliente *FrmVenta::buscarCliente( QString dni ){
    Cliente *cli = new Cliente();
    /*for( int x = 0; this->lC->getNCli(); x++){
        //if(( this->lC->getCab() + i)->get == codigo){

        //}
    }*/
}
