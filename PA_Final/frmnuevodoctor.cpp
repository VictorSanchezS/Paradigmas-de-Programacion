#include "frmnuevodoctor.h"
#include "ui_frmnuevodoctor.h"
#include "QMessageBox"

FrmNuevoDoctor::FrmNuevoDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNuevoDoctor)
{
    ui->setupUi(this);
    this->listaDoctores = new listaDoctoresClass();
}

FrmNuevoDoctor::~FrmNuevoDoctor()
{
    delete ui;
}
listaDoctoresClass *FrmNuevoDoctor::getListaDoctores() const
{
    return listaDoctores;
}

void FrmNuevoDoctor::setListaDoctores(listaDoctoresClass *value)
{
    listaDoctores = value;
}


void FrmNuevoDoctor::on_cmdRegistrar_clicked()
{
    QString codigo = "Doc-";
    int numero = this->listaDoctores->getNDoctor()+ 1;
    codigo.append( QString::number(numero ));

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

    doctorclass *doctor = new doctorclass(codigo,nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento,sueldo, horasTrabajadas);

    this->listaDoctores->insertarDoctor(doctor);

    QMessageBox::information( this, "Registro Correcto","Registro Correcto"  );

    ui->txtNombre->clear();
    ui->txtApellidos->clear();
    ui->txtDni->clear();
    ui->txtDireccion->clear();
    ui->txtTelefono->clear();
    ui->txtNombre->setFocus();
}

void FrmNuevoDoctor::on_cmdCancelar_clicked()
{
    this->close();
}
