#include "QMessageBox"
#include "producto.h"
#include "frmnewproducto.h"
#include "ui_frmnewproducto.h"

FrmNewProducto::FrmNewProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNewProducto)
{

    ui->setupUi(this);
    this->lP = new ListaProductos();
}

FrmNewProducto::~FrmNewProducto()
{
    delete ui;
}

void FrmNewProducto::on_CmdCerrar_clicked()
{
    this->close();
}

void FrmNewProducto::on_cmdGrabar_clicked()
{
   QString codigo = "P00";
   int numero = this->lP->getNProd() + 1;
   codigo.append( QString::number(numero ));   
   if ( ui->txtNombre->text().isEmpty() ) {
       QMessageBox::critical( this, "Error", "Faltan nombre" );
       return;
   }
   if ( ui->SbPrecio->value() == 0 ) {
       QMessageBox::critical( this, "Error", "Elija Pecio" );
       return;
   }
   if ( ui->sBStock->value() == 0 ) {
       QMessageBox::critical( this, "Error", "Asigne stock" );
       return;
   }
   Producto *pro = new Producto(  codigo,
                                  ui->txtNombre->text(),
                                  ui->txtDescripcion->text(),
                                  ui->SbPrecio->value(),
                                  ui->sBStock->value(),
                                  ui->dEFecha->date().toString()); // Convertir a QString
   this->lP->insertarProducto( pro );
   QMessageBox::information( this, "Registro Correcto","Registro Correcto"  );
   ui->txtNombre->clear();
   ui->txtDescripcion->clear();
   ui->SbPrecio->setValue(0.0 );
   ui->sBStock->setValue(0 );
   ui->dEFecha->setDate(QDate(2022,01, 01 ) );
   ui->txtNombre->setFocus();
}
ListaProductos *FrmNewProducto::getLP() const
{
    return lP;
}

void FrmNewProducto::setLP(ListaProductos *value)
{
    lP = value;
}

