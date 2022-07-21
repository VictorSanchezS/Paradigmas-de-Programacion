#include "fmradministrarpaciente.h"
#include "ui_fmradministrarpaciente.h"
#include "fmrnewpaciente.h"
#include "fmractualizarpaciente.h"
#include "QMessageBox"

FmrAdministrarPaciente::FmrAdministrarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrAdministrarPaciente)
{
    ui->setupUi(this);
    ui->twPacientes->setColumnWidth(0,80);
    ui->twPacientes->setColumnWidth(1,220);
    ui->twPacientes->setColumnWidth(2,220);
    ui->twPacientes->setColumnWidth(3,100);
}

FmrAdministrarPaciente::~FmrAdministrarPaciente()
{
    delete ui;
}


void FmrAdministrarPaciente::on_cmdAgregarPaciente_clicked()
{
    int tipo;
    FmrNewPaciente *fmrNewPaciente = new FmrNewPaciente();
    fmrNewPaciente->setListaPacientes(this->getListaPacientes());
    tipo = fmrNewPaciente->exec();
    if(tipo == QDialog::Rejected){
        this->listadoPacientes(this->listaPacientes);
    }
}

void FmrAdministrarPaciente::on_cmdCerrar_clicked()
{
    this->close();
}
ListaPacientesClass *FmrAdministrarPaciente::getListaPacientes() const
{
    return listaPacientes;
}

void FmrAdministrarPaciente::setListaPacientes(ListaPacientesClass *value)
{
    listaPacientes = value;
}

void FmrAdministrarPaciente::mostrarFilaPacientes(int x, NodoPacienteClass *aux){
    ui->twPacientes->insertRow(ui->twPacientes->rowCount());
    ui->twPacientes->setItem(x,0,new QTableWidgetItem(aux->getPac()->getCodigo()));
    ui->twPacientes->setItem(x,1,new QTableWidgetItem(aux->getPac()->getNombre()));
    ui->twPacientes->setItem(x,2,new QTableWidgetItem(aux->getPac()->getApellidos()));
    ui->twPacientes->setItem(x,3,new QTableWidgetItem(aux->getPac()->getDni()));

}


void FmrAdministrarPaciente::listadoPacientes(ListaPacientesClass *listaPacientes){
    ui->twPacientes->setRowCount(0);
    NodoPacienteClass *aux = new NodoPacienteClass();
    aux = listaPacientes->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getPac()->getEstado() == true){
            this->mostrarFilaPacientes(x,aux);
        }
        aux = aux->getSgte();
        x++;
    }
}

void FmrAdministrarPaciente::on_cmdBuscar_clicked()
{
    ui->twPacientes->setRowCount(0);
    NodoPacienteClass *aux = new NodoPacienteClass();
    aux = listaPacientes->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getPac()->getDni() == ui->txtDni->text()){
            this->mostrarFilaPacientes(x,aux);
            x++;
        }
        aux = aux->getSgte();
    }

    ui->txtDni->clear();
    ui->txtDni->setFocus();
}

void FmrAdministrarPaciente::on_cmdMostrarTodos_clicked()
{
    this->listadoPacientes(this->listaPacientes);
}

Paciente *FmrAdministrarPaciente::selecionarPaciente(QString codigo)
{
    NodoPacienteClass *aux = new NodoPacienteClass();
    aux = this->listaPacientes->getCab();
    while(aux != NULL){
        if (aux->getPac()->getCodigo() == codigo){
            return aux->getPac();
        }
        aux = aux->getSgte();
    }
    return NULL;
}

void FmrAdministrarPaciente::on_cmdActualizarPaciente_clicked()
{
    if(ui->twPacientes->currentIndex().isValid()){
        int tipo;
        Paciente *pacienteActualizado = new Paciente();
        pacienteActualizado = this->selecionarPaciente(ui->twPacientes->item(ui->twPacientes->currentRow(),0)->text());
        FmrActualizarPaciente *fmrActualizarPaciente = new FmrActualizarPaciente();
        fmrActualizarPaciente->setListaPacientes(this->getListaPacientes());
        fmrActualizarPaciente->setPaciente(pacienteActualizado);
        fmrActualizarPaciente->asignarValoresPaciente();
        tipo = fmrActualizarPaciente->exec();
        if(tipo == QDialog::Rejected){
            this->listadoPacientes(this->listaPacientes);
        }
    }
    else{
        QMessageBox::critical( this, "", "Debe Seleccionar un Paciente");
    }
}

void FmrAdministrarPaciente::on_cmdEliminarPaciente_clicked()
{
    if(ui->twPacientes->currentIndex().isValid()){
        QMessageBox::StandardButton respuestaButton;
        respuestaButton = QMessageBox::question(this,"Eliminar Paciente","¿Está seguro?",QMessageBox::Yes | QMessageBox::Cancel);
        if(respuestaButton == QMessageBox::Yes){
            Paciente *pacienteEliminado = new Paciente();
            pacienteEliminado = this->selecionarPaciente(ui->twPacientes->item(ui->twPacientes->currentRow(),0)->text());
            pacienteEliminado->setEstado(false);
            this->listadoPacientes(this->listaPacientes);
        }
        else{
            return;
        }

    }
    else{
        QMessageBox::critical( this, "", "Debe Seleccionar un paciente");
    }
}

