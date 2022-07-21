#include "fmractualizarpaciente.h"
#include "ui_fmractualizarpaciente.h"
#include "QMessageBox"


FmrActualizarPaciente::FmrActualizarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrActualizarPaciente)
{
    ui->setupUi(this);

}

FmrActualizarPaciente::~FmrActualizarPaciente()
{
    delete ui;
}

ListaPacientesClass *FmrActualizarPaciente::getListaPacientes() const
{
    return listaPacientes;
}

void FmrActualizarPaciente::setListaPacientes(ListaPacientesClass *value)
{
    listaPacientes = value;
}
Paciente *FmrActualizarPaciente::getPaciente() const
{
    return pac;
}

void FmrActualizarPaciente::setPaciente(Paciente *value)
{
    pac = value;
}



void FmrActualizarPaciente::on_cmdCancelar_clicked()
{
    this->close();
}

void FmrActualizarPaciente::asignarValoresPaciente()
{
    ui->txtNombre->setText(this->pac->getNombre());
    ui->txtApellidos->setText(this->pac->getApellidos());
    ui->txtDni->setText(this->pac->getDni());
    ui->txtDireccion->setText(this->pac->getDireccion());
    ui->txtTelefono->setText(this->pac->getTelefono());
}

void FmrActualizarPaciente::on_cmdActualizar_clicked()
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
    if(ui->txtDireccion->toPlainText().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Nombre" );
    }
    if(ui->txtTelefono->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Telefono" );
    }

    //Datos del Formulario
    QString nombre = this->ui->txtNombre->text();
    QString apellidos = this->ui->txtApellidos->text();
    QString dni = this->ui->txtDni->text();
    QString direccion = this->ui->txtDireccion->toPlainText();
    QString telefono = this->ui->txtTelefono->text();
    bool genero = this->ui->rbMasculino->isChecked();
    QString fechaNacimiento = this->ui->deFechaNacimiento->text();
    int dosis = this->ui->sbDosis->value();

    //Creacion de la nueva instancia
    Paciente *pac = new Paciente(this->pac->getCodigo(),nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento,dosis);
    this->listaPacientes->cambiarValoresPaciente(pac);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "","Actualizado Correctamente"  );
}
