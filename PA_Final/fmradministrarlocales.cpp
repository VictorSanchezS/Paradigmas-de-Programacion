#include "fmradministrarlocales.h"
#include "ui_fmradministrarlocales.h"
#include "fmrnewlocal.h"
#include "QMessageBox"
#include "fmractualizarlocal.h"

#include <iostream>

using namespace std;

FmrAdministrarLocales::FmrAdministrarLocales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrAdministrarLocales)
{
    ui->setupUi(this);

    ui->twLocales->setColumnWidth(0,80);
    ui->twLocales->setColumnWidth(1,220);
    ui->twLocales->setColumnWidth(2,220);
    ui->twLocales->setColumnWidth(3,100);
}

FmrAdministrarLocales::~FmrAdministrarLocales()
{
    delete ui;
}

void FmrAdministrarLocales::on_cmdCerrar_clicked()
{
    this->close();
}

void FmrAdministrarLocales::on_cmdAgregarLocal_clicked()
{
    int tipo;
    FmrNewLocal *fmrNewLocal = new FmrNewLocal();
    fmrNewLocal->setListaLocales(this->getListaLocales());
    tipo = fmrNewLocal->exec();
    if (tipo == QDialog::Rejected){
        this->listadoLocales(this->listaLocales);
    }
}
ListaLocalesClass *FmrAdministrarLocales::getListaLocales() const
{
    return listaLocales;
}

void FmrAdministrarLocales::setListaLocales(ListaLocalesClass *value)
{
    listaLocales = value;
}

void FmrAdministrarLocales::mostraFila(int x,NodoLocalClass *aux){
    ui->twLocales->insertRow(ui->twLocales->rowCount());
    ui->twLocales->setItem(x,0, new QTableWidgetItem(aux->getLocal()->getCodigo()));
    ui->twLocales->setItem(x,1, new QTableWidgetItem(aux->getLocal()->getNombre()));
    ui->twLocales->setItem(x,2, new QTableWidgetItem(aux->getLocal()->getDireccion()));
    string estadoTexto = aux->getLocal()->getEstado() ? "Habilitado" : "Inhabilitado";
    QString estado = QString::fromStdString(estadoTexto);
    ui->twLocales->setItem(x,3, new QTableWidgetItem(estado));
}

void FmrAdministrarLocales::listadoLocales(ListaLocalesClass *listaLocales){
    ui->twLocales->setRowCount(0);
    NodoLocalClass *aux = new NodoLocalClass();
    aux  = listaLocales->getCab();
    int x = 0;
    while(aux != NULL){
        this->mostraFila(x,aux);
        aux = aux->getSgte();
        x++;
    }
}


void FmrAdministrarLocales::on_cmdBuscar_clicked()
{
    ui->twLocales->setRowCount(0);
    NodoLocalClass *aux = new NodoLocalClass();
    aux = listaLocales->getCab();
    int x = 0;
    while(aux != NULL){
        if (aux->getLocal()->getNombre() == ui->txtNombre->text()){
            this->mostraFila(x,aux);
            x++;
        }
        aux = aux->getSgte();
    }

    ui->txtNombre->clear();
    ui->txtNombre->setFocus();
}

LocalClass *FmrAdministrarLocales::selecionarLocal(QString codigo)
{
    NodoLocalClass *aux = new NodoLocalClass();
    aux = this->listaLocales->getCab();
    while(aux != NULL){
        if (aux->getLocal()->getCodigo() == codigo){
            return aux->getLocal();
        }
        aux = aux->getSgte();
    }
    return NULL;
}

void FmrAdministrarLocales::on_cmdActualizar_clicked()
{
    if(ui->twLocales->currentIndex().isValid()){
        int tipo;
        LocalClass *localActualizado = new LocalClass();
        localActualizado = this->selecionarLocal(ui->twLocales->item(ui->twLocales->currentRow(),0)->text());
        FmrActualizarLocal *fmrActualizarLocal = new FmrActualizarLocal();
        fmrActualizarLocal->setListaLocales(this->getListaLocales());
        fmrActualizarLocal->setLocal(localActualizado);
        fmrActualizarLocal->asignarValores();
        tipo = fmrActualizarLocal->exec();
        if(tipo == QDialog::Rejected){
            this->listadoLocales(this->listaLocales);
        }
    }
    else{
        QMessageBox::critical( this, "", "Debe Seleccionar un producto");
    }
}

void FmrAdministrarLocales::on_cmdTodos_clicked()
{
    this->listadoLocales(this->listaLocales);
}
