#include "fmrnewpaciente.h"
#include "ui_fmrnewpaciente.h"
#include "QMessageBox"

FmrNewPaciente::FmrNewPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrNewPaciente)
{
    ui->setupUi(this);
    this->ListaPacientes = new ListaPacientesClass();
}

FmrNewPaciente::~FmrNewPaciente()
{
    delete ui;
}

void FmrNewPaciente::on_cmdCancelar_clicked()
{
    this->close();
}

void FmrNewPaciente::on_cmdRegistrar_clicked()
{
    QString codigo = "Pac-";
    int numero = this->ListaPacientes->getNPacientes() + 1;
    codigo.append( QString::number(numero ));

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


    Paciente *pac = new Paciente(codigo,nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento,dosis);

    this->ListaPacientes->insertarPaciente(pac);


    QMessageBox::information( this,"", "Registro Correcto"  );

    //Limpia Controles del Formulario
    ui->txtNombre->clear();
    ui->txtApellidos->clear();
    ui->txtDni->clear();
    ui->txtDireccion->clear();
    ui->txtTelefono->clear();
    ui->txtNombre->setFocus();
}


ListaPacientesClass *FmrNewPaciente::getListaPacientes() const
{
    return ListaPacientes;
}

void FmrNewPaciente::setListaPacientes(ListaPacientesClass *value)
{
    ListaPacientes = value;
}

