#include "fmrnewenfermera.h"
#include "ui_fmrnewenfermera.h"
#include "QMessageBox"

FmrNewEnfermera::FmrNewEnfermera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrNewEnfermera)
{
    ui->setupUi(this);
    this->listaEnfermeras = new ListaEnfermeras();
}

FmrNewEnfermera::~FmrNewEnfermera()
{
    delete ui;
}

void FmrNewEnfermera::on_cmdCancelar_clicked()
{
    this->close();
}

void FmrNewEnfermera::on_cmdRegistrar_clicked()
{
    QString codigo = "Enf-";
    int numero = this->listaEnfermeras->getNumeroEnfermeras() + 1;
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
    EnfermeraClass *enfermera = new EnfermeraClass(codigo,nombre,apellidos,dni,direccion,telefono,genero,fechaNacimiento,sueldo,horasTrabajo);

    this->listaEnfermeras->insertarEnfermera(enfermera);

    // Muestra mensaje del resultado
    QMessageBox::information( this, "Registro Correcto","Registro Correcto"  );

    //Limpia Controles del Formulario
    ui->txtNombre->clear();
    ui->txtApellidos->clear();
    ui->txtDni->clear();
    ui->txtDireccion->clear();
    ui->txtTelefono->clear();
    ui->txtNombre->setFocus();
}


ListaEnfermeras *FmrNewEnfermera::getListaEnfermeras() const
{
    return listaEnfermeras;
}

void FmrNewEnfermera::setListaEnfermeras(ListaEnfermeras *value)
{
    listaEnfermeras = value;
}

