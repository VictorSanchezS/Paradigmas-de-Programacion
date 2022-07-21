#include "fmractualizarlocal.h"
#include "ui_fmractualizarlocal.h"
#include "QMessageBox"

FmrActualizarLocal::FmrActualizarLocal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrActualizarLocal)
{
    ui->setupUi(this);
}

FmrActualizarLocal::~FmrActualizarLocal()
{
    delete ui;
}
ListaLocalesClass *FmrActualizarLocal::getListaLocales() const
{
    return listaLocales;
}

void FmrActualizarLocal::setListaLocales(ListaLocalesClass *value)
{
    listaLocales = value;
}
LocalClass *FmrActualizarLocal::getLocal() const
{
    return local;
}

void FmrActualizarLocal::setLocal(LocalClass *value)
{
    local = value;
}

void FmrActualizarLocal::asignarValores()
{
    ui->txtNombre->setText(this->local->getNombre());
    ui->teDireccion->setText(this->local->getDireccion());
}

void FmrActualizarLocal::on_CmdCerrar_clicked()
{
    this->close();
}

void FmrActualizarLocal::on_cmdGrabar_clicked()
{
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
    bool estado = this->ui->rbHabilitado->isChecked();
    // Creación de la nueva instancia
    LocalClass *local = new LocalClass(this->local->getCodigo(),nombre, direccion, estado);
    this->listaLocales->cambiarValores(local);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "","Actualizado Correctamente"  );
}
