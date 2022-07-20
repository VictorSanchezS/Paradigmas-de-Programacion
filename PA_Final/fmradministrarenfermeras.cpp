#include "fmradministrarenfermeras.h"
#include "ui_fmradministrarenfermeras.h"
#include "fmrnewenfermera.h"
#include "fmractualizarenfermera.h"
#include "QMessageBox"

FmrAdministrarEnfermeras::FmrAdministrarEnfermeras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrAdministrarEnfermeras)
{
    ui->setupUi(this);

    ui->twEnfermeras->setColumnWidth(0,80);
    ui->twEnfermeras->setColumnWidth(1,220);
    ui->twEnfermeras->setColumnWidth(2,220);
    ui->twEnfermeras->setColumnWidth(3,100);
}

FmrAdministrarEnfermeras::~FmrAdministrarEnfermeras()
{
    delete ui;
}

void FmrAdministrarEnfermeras::on_cmdAgregarEnfermera_clicked()
{
    int tipo;
    FmrNewEnfermera *fmrNewEnfermera = new FmrNewEnfermera();
    fmrNewEnfermera->setListaEnfermeras(this->getListaEnfermeras());
    tipo = fmrNewEnfermera->exec();
    if(tipo == QDialog::Rejected){
        this->listadoEnfermeras(this->listaEnfermeras);
    }
}

void FmrAdministrarEnfermeras::on_cmdCerrar_clicked()
{
    this->close();
}
ListaEnfermeras *FmrAdministrarEnfermeras::getListaEnfermeras() const
{
    return listaEnfermeras;
}

void FmrAdministrarEnfermeras::setListaEnfermeras(ListaEnfermeras *value)
{
    listaEnfermeras = value;
}

void FmrAdministrarEnfermeras::mostrarFilaEnfermeras(int x, NodoEnfermeraClass *aux){
    ui->twEnfermeras->insertRow(ui->twEnfermeras->rowCount());
    ui->twEnfermeras->setItem(x,0,new QTableWidgetItem(aux->getEnfermera()->getCodigo()));
    ui->twEnfermeras->setItem(x,1,new QTableWidgetItem(aux->getEnfermera()->getNombre()));
    ui->twEnfermeras->setItem(x,2,new QTableWidgetItem(aux->getEnfermera()->getApellidos()));
    ui->twEnfermeras->setItem(x,3,new QTableWidgetItem(QString::number(aux->getEnfermera()->getSueldo())));

}


void FmrAdministrarEnfermeras::listadoEnfermeras(ListaEnfermeras *listaEnfermeras){
    ui->twEnfermeras->setRowCount(0);
    NodoEnfermeraClass *aux = new NodoEnfermeraClass();
    aux = listaEnfermeras->getCab();
    int x = 0;
    while(aux != NULL){
        this->mostrarFilaEnfermeras(x,aux);
        aux = aux->getSgte();
        x++;
    }
}

void FmrAdministrarEnfermeras::on_cmdBuscar_clicked()
{
    ui->twEnfermeras->setRowCount(0);
    NodoEnfermeraClass *aux = new NodoEnfermeraClass();
    aux = listaEnfermeras->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getEnfermera()->getDni() == ui->txtDni->text()){
            this->mostrarFilaEnfermeras(x,aux);
            x++;
        }
        aux = aux->getSgte();
    }

    ui->txtDni->clear();
    ui->txtDni->setFocus();
}

void FmrAdministrarEnfermeras::on_cmdMostrarTodos_clicked()
{
    this->listadoEnfermeras(this->listaEnfermeras);
}

EnfermeraClass *FmrAdministrarEnfermeras::selecionarEnfermera(QString codigo)
{
    NodoEnfermeraClass *aux = new NodoEnfermeraClass();
    aux = this->listaEnfermeras->getCab();
    while(aux != NULL){
        if (aux->getEnfermera()->getCodigo() == codigo){
            return aux->getEnfermera();
        }
        aux = aux->getSgte();
    }
    return NULL;
}

void FmrAdministrarEnfermeras::on_cmdActualizarEnfermera_clicked()
{
    if(ui->twEnfermeras->currentIndex().isValid()){
        int tipo;
        EnfermeraClass *enfermeraActulizado = new EnfermeraClass();
        enfermeraActulizado = this->selecionarEnfermera(ui->twEnfermeras->item(ui->twEnfermeras->currentRow(),0)->text());
        fmrActualizarEnfermera *FmrActualizarEnfermera = new fmrActualizarEnfermera();
        FmrActualizarEnfermera->setListaEnfermeras(this->getListaEnfermeras());
        FmrActualizarEnfermera->setEnfermera(enfermeraActulizado);
        FmrActualizarEnfermera->asignarValoresEnfermera();
        tipo = FmrActualizarEnfermera->exec();
        if(tipo == QDialog::Rejected){
            this->listadoEnfermeras(this->listaEnfermeras);
        }
    }
    else{
        QMessageBox::critical( this, "", "Debe Seleccionar una enfermera");
    }
}
