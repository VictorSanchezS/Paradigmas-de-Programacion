#include "fmractualizarenfermera.h"
#include "ui_fmractualizarenfermera.h"
#include "QMessageBox"

fmrActualizarEnfermera::fmrActualizarEnfermera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fmrActualizarEnfermera)
{
    ui->setupUi(this);
}

fmrActualizarEnfermera::~fmrActualizarEnfermera()
{
    delete ui;
}
ListaEnfermeras *fmrActualizarEnfermera::getListaEnfermeras() const
{
    return listaEnfermeras;
}

void fmrActualizarEnfermera::setListaEnfermeras(ListaEnfermeras *value)
{
    listaEnfermeras = value;
}
EnfermeraClass *fmrActualizarEnfermera::getEnfermera() const
{
    return enfermera;
}

void fmrActualizarEnfermera::setEnfermera(EnfermeraClass *value)
{
    enfermera = value;
}



void fmrActualizarEnfermera::on_cmdCancelar_clicked()
{
    this->close();
}

void fmrActualizarEnfermera::asignarValoresEnfermera()
{
    ui->txtNombre->setText(this->enfermera->getNombre());
    ui->txtApellidos->setText(this->enfermera->getApellidos());
    ui->txtDni->setText(this->enfermera->getDni());
    ui->txtDireccion->setText(this->enfermera->getDireccion());
    ui->txtTelefono->setText(this->enfermera->getTelefono());
}

void fmrActualizarEnfermera::on_cmdActualizar_clicked()
{
    //Validacion
    if(ui->txtNombre->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Nombre" );
    }
    if(ui->txtApellidos->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Apellidos" );
    }
    if(ui->txtDni->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Dni" );
    }
    if(ui->txtDireccion->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Nombre" );
    }
    if(ui->txtTelefono->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Telefono" );
    }

    //Datos del Formulario
    QString nombre = this->ui->txtNombre->text();
    QString apellidos = this->ui->txtApellidos->text();
    QString dni = this->ui->txtDni->text();
    QString direccion = this->ui->txtDireccion->text();
    QString telefono = this->ui->txtTelefono->text();
    bool genero = this->ui->rbMasculino->isChecked();
    QString fechaNacimiento = this->ui->deFechaNacimiento->text();
    double sueldo = this->ui->dsbSueldo->value();
    int horasTrabajo = this->ui->sbHorasTrabajo->value();

    //Creacion de la nueva instancia
    EnfermeraClass *enfermera = new EnfermeraClass(this->enfermera->getCodigo(),nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento,sueldo,horasTrabajo);
    this->listaEnfermeras->cambiarValoresEnfermera(enfermera);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "","Actualizado Correctamente"  );
}
