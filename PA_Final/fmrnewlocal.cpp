#include "fmrnewlocal.h"
#include "ui_fmrnewlocal.h"
#include "QMessageBox"

FmrNewLocal::FmrNewLocal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrNewLocal)
{
    ui->setupUi(this);
    this->listaLocales = new ListaLocalesClass();
}

FmrNewLocal::~FmrNewLocal()
{
    delete ui;
}
ListaLocalesClass *FmrNewLocal::getListaLocales() const
{
    return listaLocales;
}

void FmrNewLocal::setListaLocales(ListaLocalesClass *value)
{
    listaLocales = value;
}

void FmrNewLocal::on_cmdGrabar_clicked()
{
    QString codigo = "Loc-";
    int numero = this->listaLocales->getNumeroLocales() + 1;
    codigo.append( QString::number(numero ));
    //Validacion
    if(ui->txtNombre->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Nombre" );
        return;
    }
    if(ui->teDireccion->toPlainText().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Direccion" );
        return;
    }
    // Datos del formulario
    QString nombre = this->ui->txtNombre->text();
    QString direccion = this->ui->teDireccion->toPlainText();
    bool estado = true;
    // Creación de la nueva instancia
    LocalClass *local = new LocalClass(codigo,nombre, direccion,estado);

    this->listaLocales->insertarLocal(local);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "Registro Correcto","Registro Correcto"  );

    // Limpia controles del formulario
    ui->txtNombre->clear();
    ui->teDireccion->clear();
    ui->txtNombre->setFocus();
}

void FmrNewLocal::on_CmdCerrar_clicked()
{
    this->close();
}
