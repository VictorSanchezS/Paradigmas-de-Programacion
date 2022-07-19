#include "frmactualizarproducto.h"
#include "ui_frmactualizarproducto.h"
#include "QMessageBox"

FrmActualizarProducto::FrmActualizarProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmActualizarProducto)
{
    ui->setupUi(this);
}

FrmActualizarProducto::~FrmActualizarProducto()
{
    delete ui;
}
ListaProductos *FrmActualizarProducto::getLP() const
{
    return lP;
}

void FrmActualizarProducto::setLP(ListaProductos *value)
{
    lP = value;
}
Producto *FrmActualizarProducto::getPr() const
{
    return pr;
}

void FrmActualizarProducto::setPr(Producto *value)
{
    pr = value;
}


void FrmActualizarProducto::asignarValores(){
    ui->txtNombre->setText( this->pr->getNombre() );
    ui->txtDescripcion->setText( this->pr->getDescripcion() );
    ui->SbPrecio->setValue( this->pr->getPrecio() );
    ui->sBStock->setValue( this->pr->getStock() );
    QString fecha = this->pr->getFechaVenc();
    QDate Date = QDate::fromString(fecha,"dd/MM/yyyy");
    ui->dEFecha->setDate( Date );

}

void FrmActualizarProducto::on_CmdCerrar_clicked()
{
    this->close();
}

void FrmActualizarProducto::on_cmdGrabar_clicked()
{
    if ( ui->txtNombre->text().isEmpty() ) {
        QMessageBox::critical( this, "Error", "Faltan nombre" );
        return;
    }
    if ( ui->SbPrecio->value() == 0 ) {
        QMessageBox::critical( this, "Error", "Elija Precio" );
        return;
    }
    if ( ui->sBStock->value() == 0 ) {
        QMessageBox::critical( this, "Error", "Asigne stock" );
        return;
    }
    Producto *pro = new Producto(  this->pr->getCodigo() ,
                                   ui->txtNombre->text(),
                                   ui->txtDescripcion->text(),
                                   ui->SbPrecio->value(),
                                   ui->sBStock->value(),
                                   ui->dEFecha->date().toString()); // Convertir a QString
    this->lP->cambiarValores( pro );
    QMessageBox::information( this, "Actualizado Correctamente","Registro Correcto"  );
}



