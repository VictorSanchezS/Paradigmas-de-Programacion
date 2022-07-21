#include "frmactualizardoctor.h"
#include "ui_frmactualizardoctor.h"
#include "QMessageBox"

FrmActualizarDoctor::FrmActualizarDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmActualizarDoctor)
{
    ui->setupUi(this);
}

FrmActualizarDoctor::~FrmActualizarDoctor()
{
    delete ui;
}
listaDoctoresClass *FrmActualizarDoctor::getListaDoctores() const
{
    return listaDoctores;
}

void FrmActualizarDoctor::setListaDoctores(listaDoctoresClass *value)
{
    listaDoctores = value;
}
doctorclass *FrmActualizarDoctor::getDoctor() const
{
    return doctor;
}

void FrmActualizarDoctor::setDoctor(doctorclass *value)
{
    doctor = value;
}

void FrmActualizarDoctor::nuevoDatosDoctor(){
    ui->txtNombre->setText(this->doctor->getNombre());
    ui->txtApellidos->setText(this->doctor->getApellidos());
    ui->txtDni->setText(this->doctor->getDni());
    ui->txtDireccion->setText(this->doctor->getDireccion());
    ui->txtTelefono->setText(this->doctor->getTelefono());
}



void FrmActualizarDoctor::on_cmdActualizar_clicked()
{
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
        QMessageBox::critical( this, "Error", "Falta Direccion" );
    }
    if(ui->txtTelefono->text().isEmpty()){
        QMessageBox::critical( this, "Error", "Falta Telefono" );
    }

    QString nombre = this->ui->txtNombre->text();
    QString apellidos = this->ui->txtApellidos->text();
    QString dni = this->ui->txtDni->text();
    QString direccion = this->ui->txtDireccion->text();
    QString telefono = this->ui->txtTelefono->text();
    bool genero = this->ui->rbMasculino->isChecked();
    QString fechaNacimiento = this->ui->deFechaNacimiento->text();
    double sueldo = this->ui->dsbSueldo->value();
    int horasTrabajadas = this->ui->sbHorasTrabajo->value();

    doctorclass *doctor = new doctorclass(this->doctor->getCodigo(), nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento,sueldo, horasTrabajadas);
    this->listaDoctores->modificarDoctor(doctor);
    QMessageBox::information( this, "","Actualizado Correctamente"  );
}

void FrmActualizarDoctor::on_cmdCancelar_clicked()
{
    this->close();
}
