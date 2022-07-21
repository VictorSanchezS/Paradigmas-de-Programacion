#include "frmadministrardoctores.h"
#include "ui_frmadministrardoctores.h"
#include "frmnuevodoctor.h"
#include "frmactualizardoctor.h"
#include "QMessageBox"

FrmAdministrarDoctores::FrmAdministrarDoctores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmAdministrarDoctores)
{
    ui->setupUi(this);

    ui->twDoctor->setColumnWidth(0,80);
    ui->twDoctor->setColumnWidth(1,220);
    ui->twDoctor->setColumnWidth(2,220);
    ui->twDoctor->setColumnWidth(3,100);
}

FrmAdministrarDoctores::~FrmAdministrarDoctores()
{
    delete ui;
}
listaDoctoresClass *FrmAdministrarDoctores::getListaDoctores() const
{
    return listaDoctores;
}

void FrmAdministrarDoctores::setListaDoctores(listaDoctoresClass *value)
{
    listaDoctores = value;
}

void FrmAdministrarDoctores::mostrarDoctores(int x, nodoDoctorClass *aux ){
    ui->twDoctor->insertRow(ui->twDoctor->rowCount());
    ui->twDoctor->setItem(x,0,new QTableWidgetItem(aux->getDoctor()->getCodigo()));
    ui->twDoctor->setItem(x,1,new QTableWidgetItem(aux->getDoctor()->getNombre()));
    ui->twDoctor->setItem(x,2,new QTableWidgetItem(aux->getDoctor()->getApellidos()));
    ui->twDoctor->setItem(x,3,new QTableWidgetItem(aux->getDoctor()->getDni()));
}

void FrmAdministrarDoctores::listadoDoctores(listaDoctoresClass *listaDoctores){
    ui->twDoctor->setRowCount(0);
    nodoDoctorClass *aux = new nodoDoctorClass();
    aux = listaDoctores->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getDoctor()->getCondicion() == true){
            this->mostrarDoctores(x,aux);
        }
        aux = aux->getSgte();
        x++;
    }
}

doctorclass *FrmAdministrarDoctores::escogerDoctor(QString codigo)
{
    nodoDoctorClass *aux = new nodoDoctorClass();
    aux = this->listaDoctores->getCab();
    while(aux != NULL){
        if (aux->getDoctor()->getCodigo() == codigo){
            return aux->getDoctor();
        }
        aux = aux->getSgte();
    }
    return NULL;
}

void FrmAdministrarDoctores::on_cmRegistrarDoctor_clicked()
{
    int tipo;
    FrmNuevoDoctor *frmNuevoDoctor = new FrmNuevoDoctor();
    frmNuevoDoctor->setListaDoctores(this->getListaDoctores());
    tipo = frmNuevoDoctor->exec();
    if(tipo == QDialog::Rejected){
        this->listadoDoctores(this->listaDoctores);
    }
}

void FrmAdministrarDoctores::on_cmdBuscarDoctor_clicked()
{
    ui->twDoctor->setRowCount(0);
    nodoDoctorClass *aux = new nodoDoctorClass();
    aux = listaDoctores->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getDoctor()->getDni() == ui->txtDni->text()){
            this->mostrarDoctores(x,aux);
            x++;
        }
        aux = aux->getSgte();
    }
    ui->txtDni->clear();
    ui->txtDni->setFocus();
}

void FrmAdministrarDoctores::on_cmdMostrarLista_clicked()
{
    this->listadoDoctores(this->listaDoctores);
}

void FrmAdministrarDoctores::on_cmdActualizarDoctor_clicked()
{
    if(ui->twDoctor->currentIndex().isValid()){
        int tipo;
        doctorclass *actDoc = new doctorclass();
        actDoc = this->escogerDoctor(ui->twDoctor->item(ui->twDoctor->currentRow(),0)->text());
        FrmActualizarDoctor *FmrActualizarDoctor = new FrmActualizarDoctor();
        FmrActualizarDoctor->setListaDoctores(this->getListaDoctores());
        FmrActualizarDoctor->setDoctor(actDoc);
        FmrActualizarDoctor->nuevoDatosDoctor();
        tipo = FmrActualizarDoctor->exec();
        if(tipo == QDialog::Rejected){
            this->listadoDoctores(this->listaDoctores);
        }
    }
    else{
        QMessageBox::critical( this, "", "Primero seleccione un doctor");
    }
}

void FrmAdministrarDoctores::on_cmdEliminarDoctor_clicked()
{
    if(ui->twDoctor->currentIndex().isValid()){
        QMessageBox::StandardButton respuestaButton;
        respuestaButton = QMessageBox::question(this,"Eliminar Doctor","¿Está seguro?",QMessageBox::Yes | QMessageBox::Cancel);
        if(respuestaButton == QMessageBox::Yes){
            doctorclass *docEliminado = new doctorclass();
            docEliminado = this->escogerDoctor(ui->twDoctor->item(ui->twDoctor->currentRow(),0)->text());
            docEliminado->setCondicion(false);
            this->listadoDoctores(this->listaDoctores);
        }
        else{
            return;
        }

    }
    else{
        QMessageBox::critical( this, "", "Debe seleccionar un doctor");
    }
}

void FrmAdministrarDoctores::on_cmdCerrar_clicked()
{
    this->close();
}
