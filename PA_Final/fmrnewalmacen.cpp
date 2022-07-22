#include "fmrnewalmacen.h"
#include "ui_fmrnewalmacen.h"
#include "QMessageBox"

FmrNewAlmacen::FmrNewAlmacen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrNewAlmacen)
{
    ui->setupUi(this);
    this->listaAlmacen = new ListaAlmacenClass();
}

FmrNewAlmacen::~FmrNewAlmacen()
{
    delete ui;
}

ListaAlmacenClass *FmrNewAlmacen::getListaAlamacen() const
{
    return listaAlmacen;
}

void FmrNewAlmacen::setListaAlmacen(ListaAlmacenClass *value)
{
 listaAlmacen = value;
}

void FmrNewAlmacen::on_GuardarAl_clicked()
{
    QString codigo = "Al-";
    int numero = this->listaAlmacen->getNumeroAlmacenes() +1;
    codigo.append(QString::number(numero));
    if(ui->txtNr->text().isEmpty()){
        QMessageBox::critical(this, "Error","Falta Numero");
    }
    if(ui->txtDr->text().isEmpty()){
        QMessageBox::critical(this, "Error","Falta Direccion");
    }
    QString numeroAl = this->ui->txtNr->text();
    QString direccion = this->ui->txtDr->text();
    bool estadoAl = true;

    AlmacenClass *almacen = new AlmacenClass(codigo,numeroAl,direccion,estadoAl);
    this->listaAlmacen->insertarAlmacen(almacen);

    QMessageBox::information(this, "Registro Correcto", "Registro Correcto");

    ui->txtNr->clear();
    ui->txtDr->clear();
    ui->txtNr->setFocus();
}

void FmrNewAlmacen::on_CancelarAl_clicked()
{
    this->close();
}
